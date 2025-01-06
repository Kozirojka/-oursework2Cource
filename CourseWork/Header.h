#pragma once
#include <iostream>
#include <sstream>
#include <string>

#include "definition.h"



/*
   Клас CTimerCount представляє собою структуру для роботи з часом у форматі годин, хвилин і секунд.
   Включає реалізацію операцій порівняння, арифметичних операцій та конвертації ча  су в секунди.*/

struct CTimerCount
{
    int hours;
    int minutes;
    int seconds;

    // Конструктор з параметрами для ініціалізації годин, хвилин і секунд.
    CTimerCount(int h, int m, int s) : hours(h), minutes(m), seconds(s)
    {

    }

    // Конструктор за замовчуванням, ініціалізує години, хвилини і секунди значенням -1.
    CTimerCount()
    {
        hours = -1;
        minutes = -1;
        seconds = -1;
    }

    // Конструктор копіювання для створення копії іншого об'єкта CTimerCount.
    CTimerCount(const CTimerCount& timer) : hours(timer.hours), minutes(timer.minutes), seconds(timer.seconds)
    {
    }

    // Оператор присвоєння для копіювання значень з іншого об'єкта CTimerCount.
    CTimerCount& CTimerCount::operator=(const CTimerCount& other) {
        if (this != &other) { // Перевірка на самокопіювання
            hours = other.hours;
            minutes = other.minutes;
            seconds = other.seconds;
        }
        return *this;
    }


    // Оператор порівняння на рівність (==) для порівняння об'єктів CTimerCount.
    bool operator==(const CTimerCount& other) const
    {
        return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
    }

    // Оператор більше (>) для порівняння об'єктів CTimerCount.
    bool operator>(const CTimerCount& other) const
    {
        if (hours != other.hours)
            return hours > other.hours;
        if (minutes != other.minutes)
            return minutes > other.minutes;
        return seconds > other.seconds;
    }


    // Оператор менше (<) для порівняння об'єктів CTimerCount.
    bool operator<(const CTimerCount& other) const
    {
        if (hours != other.hours)
            return hours < other.hours;
        if (minutes != other.minutes)
            return minutes < other.minutes;
        return seconds < other.seconds;
    }

    // Переведення годин, хвилин і секунд в секунди.
    int converHMStoSecond(CTimerCount time) const {
        return (time.hours * 60 * 60) + (time.minutes * 60) + (time.seconds);
    }
    // Оператор віднімання (-) для визначення різниці між об'єктами CTimerCount.
    CTimerCount operator-(const CTimerCount& other) const {
        // Перевірка, чи перше значення менше і, якщо потрібно, обернення операндів.
        if (*this < other) {
            CTimerCount result = other - *this;
            return result;
        }

        CTimerCount result;
        result.hours = hours - other.hours;
        result.minutes = minutes - other.minutes;
        result.seconds = seconds - other.seconds;

        // Обробка випадків, коли віднімання може призвести до від'ємних значень.
        if (result.seconds < 0) {
            result.seconds += 60;
            result.minutes--;
        }
        if (result.minutes < 0) {
            result.minutes += 60;
            result.hours--;
        }

        return result;
    }

    // Оператор більше або рівне (>=) для порівняння об'єктів CTimerCount.
    bool operator>=(const CTimerCount& other) const {
        return !(*this < other);  // !(a < b) еквівалентно a >= b
    }

    // Оператор менше або рівне (<=) для порівняння об'єктів CTimerCount.
    bool operator<=(const CTimerCount& other) const {
        return (*this < other) || (*this == other);  // a <= b еквівалентно !(a > b)
    }
    // Оператор додавання (+) для об'єднання значень годин, хвилин і секунд.
    CTimerCount operator+(const CTimerCount& other) const {
        CTimerCount result;
        result.hours = hours + other.hours;
        result.minutes = minutes + other.minutes;
        result.seconds = seconds + other.seconds;

        // Обробка перенесення значень.
        result.minutes += result.seconds / 60;
        result.seconds %= 60;
        result.hours += result.minutes / 60;
        result.minutes %= 60;

        return result;
    }

    // Оператор множення (*) на константу для масштабування об'єкта CTimerCount.
    CTimerCount operator*(double factor) const {
        CTimerCount result;
        double totalSeconds = converHMStoSecond(*this) * factor;

        // Перетворення загальних секунд назад в години, хвилини і секунди.
        result.hours = static_cast<int>(totalSeconds / 3600);
        totalSeconds -= result.hours * 3600;
        result.minutes = static_cast<int>(totalSeconds / 60);
        result.seconds = static_cast<int>(fmod(totalSeconds, 60.0));

        return result;
    }


};


/*Клас sportsMan який унаслідковує клас CTimerCount та представляє спортсмена з властивостями, такими як ім'я, прізвище, 
показники пресу, результати бігу на 3 км і 100 м, довгий стрибок, номер особи, внутрішні об'єкти для представлення часових 
величин, відхилення від часу бігу на 100 м, загальна кількість очок тощо.Використовує ряд функцій для операцій над часом,
розрахунку очок та перевірки валідності даних.Також включає конструктори для ініціалізації об'єктів класу.
*/

class sportsMan : public CTimerCount
{
private:


    int press;
    std::string name;
    std::string surname;

    std::string sprintFor3km;
    std::string sprintFor100m;



    double longJump;


    int idPerson;
    CTimerCount* diviationFrom100m;
    double totalPoints;


public:
    CTimerCount* for3km;
    CTimerCount* for100m;

    int for3kh;
    int for3kmm;
    int for3ksec;



    int sprintFor100mh;
    int sprintFor100mm;
    int sprintFor100ms;


    

    
    CTimerCount get3km()
    {
        return *for3km;
    }
    System::String^ formatTime(const CTimerCount& timer) {
        return System::String::Format("{0:D2}:{1:D2}:{2:D2}", timer.hours, timer.minutes, timer.seconds);
    }
    static std::string formatTimeForOver(const CTimerCount& timer) {
        System::String^ formattedTime = System::String::Format("{0:D2}:{1:D2}:{2:D2}", timer.hours, timer.minutes, timer.seconds);

        return msclr::interop::marshal_as<std::string>(formattedTime);
    }

    CTimerCount get100m()
    {
        return *for100m;
    }

    void setDivision(CTimerCount& data)
    {

        diviationFrom100m = new CTimerCount(data - get100m());
    }

    CTimerCount getDivision()
    {
        return *diviationFrom100m;
    }


    //перевірка чи дата валідна
    bool isValidTime(CTimerCount &time) {

        return (time.hours >= 0 && time.hours <= 24) && (time.minutes >= 0 && time.minutes <= 60) && (time.seconds >= 0 && time.seconds <= 60);
	}

    //перевірка чи не містить стрічка чифр
    bool doesNotContainDigits(const std::string& str) {
        for (char ch : str) {
            if (isdigit(ch)) {
                return false;  // Found a digit, so the string is not valid
            }
        }
        return true;  // No digits found, the string is valid
    }

    //перевірка загальна чи дані у класі є валідні
    bool varaficateClass(sportsMan& ProbablyPush)
    {
        int check = 0;
        if(ProbablyPush.isValidTime(this->get100m()))
            check++;
        if (ProbablyPush.isValidTime(this->get3km()))
            check++;
        if (doesNotContainDigits(this->getSurname()))
            check++;
        if (doesNotContainDigits(this->getName()))
            check++;


        return check == 4;
    }



    // Оператор присвоєння
    sportsMan& sportsMan::operator=(const sportsMan& other) {
        if (this != &other) { 

            CTimerCount::operator=(other);

            press = other.press;
            name = other.name;
            surname = other.surname;
            sprintFor3km = other.sprintFor3km;
            sprintFor100m = other.sprintFor100m;
            longJump = other.longJump;
            idPerson = other.idPerson;

            for3km = new CTimerCount(*other.for3km);
            for100m = new CTimerCount(*other.for100m);
        }
        return *this;
    }



	
   
    // Конструктор з параметрами
    sportsMan(const std::string& n, const std::string& s, std::string s3, std::string s100, int p, float lj, int id)
        : press(p), name(n), surname(s), longJump(lj), idPerson(id){

        System::String^ sManaged = gcnew System::String(sprintFor3km.c_str());
        array<System::String^>^ fields = sManaged->Split(':');
        for3kh = System::Convert::ToInt32(fields[0]->Trim());
        for3kmm = System::Convert::ToInt32(fields[1]->Trim());
        for3ksec = System::Convert::ToInt32(fields[2]->Trim());
        for3km = new CTimerCount(for3kh, for3kmm, for3ksec);

        System::String^ Managed100 = gcnew System::String(sprintFor100m.c_str());
        array<System::String^>^ fields100 = Managed100->Split(':');
        sprintFor100mh = System::Convert::ToInt32(fields100[0]->Trim());
    	sprintFor100mm = System::Convert::ToInt32(fields100[1]->Trim());
        sprintFor100ms = System::Convert::ToInt32(fields100[2]->Trim());
        for100m = new CTimerCount(sprintFor100mh, sprintFor100mm, sprintFor100ms);

        double generalAmountSIn3km = calculateSeconds(*for3km);
        double generalAmountFor100m = calculateSeconds(*for100m);

        double amountOfPoint = ((generalAmountSIn3km / 100) * 35) + ((press / 100) * 20) +
            ((longJump / 100) * 20) + ((generalAmountFor100m / 100) * 20);

        totalPoints = amountOfPoint;
    }

    // Копіюючий конструктор
    sportsMan(const sportsMan& other)
        : press(other.press), name(other.name), surname(other.surname),
		for3kh(other.for3kh), for3kmm(other.for3kmm), for3ksec(other.for3ksec),
		sprintFor100mh(other.sprintFor100mh), sprintFor100mm(other.sprintFor100mm), sprintFor100ms(other.sprintFor100ms),
        longJump(other.longJump), totalPoints(other.totalPoints), idPerson(other.idPerson)
	{
        for3km = new CTimerCount(*other.for3km);
        for100m = new CTimerCount(*other.for100m);
    }

   
     // Дефолтний конструктор класу sportsMan
    sportsMan::sportsMan()
        : press(0), longJump(0.0), idPerson(0), diviationFrom100m(nullptr), totalPoints(0.0),
        for3km(nullptr), for100m(nullptr), for3kh(0), for3kmm(0), for3ksec(0),
        sprintFor100mh(0), sprintFor100mm(0), sprintFor100ms(0)
    {
    }

    double calculateSeconds(const CTimerCount& timer) {
        return (timer.hours * 60 * 60) + (timer.minutes * 60) + timer.seconds;
    }

    // Повертає загальну кількість очок
	float getTotalPoints() const {
		return totalPoints;
	}

    // Повертає значення пресу
    int getPress() const {
        return press;
    }

    // Повертає ім'я
    std::string getName() const {
        return name;
    }
    // Повертає прізвище
    std::string getSurname() const {
        return surname;
    }


    //повертає довжину стрибку
    double getLongJump() const {
        return longJump;
    }


    //повертає id
	int getId()
	{

        return idPerson;
	}

    int calculatePoints(int hours, int minutes, int seconds) {
        // Перевести час у секунди для легшого порівняння
        int totalSeconds = hours * 3600 + minutes * 60 + seconds;

        // Чим менше часу, тим більше очок
        // Можна використовувати інші формули в залежності від ваших потреб
        // Наприклад, використовуючи логарифм або інші функції
        int points = 10000 - totalSeconds;

        // Перевірити, чи спортсмен не мав негативного часу (штрафу)
        if (points < 0) {
            points = 0;
        }

        return points;
    }

    // Перевантажений оператор введення
    friend std::istream& operator>>(std::istream& input, sportsMan& person)
    {
        std::string inputLine;
        std::getline(input, inputLine);

        std::istringstream iss(inputLine);

        if (!(iss >> person.idPerson >> person.surname >> person.name >> person.sprintFor3km
            >> person.sprintFor100m >> person.press >> person.longJump)) {

            input.setstate(std::ios::failbit);
            return input;

        }

        try {
            // Parsing for3km
            System::String^ sManaged = gcnew System::String(person.sprintFor3km.c_str());
            array<System::String^>^ fields = sManaged->Split(':');
            person.for3kh = System::Convert::ToInt32(fields[0]->Trim());
            person.for3kmm = System::Convert::ToInt32(fields[1]->Trim());
            person.for3ksec = System::Convert::ToInt32(fields[2]->Trim());
            person.for3km = new CTimerCount(person.for3kh, person.for3kmm, person.for3ksec);
        }
        catch (System::FormatException^ ex) {               
            // Display error message in a MessageBox

            input.setstate(std::ios::failbit);
            return input;
        }

        try {
            // Parsing sprintFor100m
            System::String^ Managed100 = gcnew System::String(person.sprintFor100m.c_str());
            array<System::String^>^ fields100 = Managed100->Split(':');
            person.sprintFor100mh = System::Convert::ToInt32(fields100[0]->Trim());
            person.sprintFor100mm = System::Convert::ToInt32(fields100[1]->Trim());
            person.sprintFor100ms = System::Convert::ToInt32(fields100[2]->Trim());
            person.for100m = new CTimerCount(person.sprintFor100mh, person.sprintFor100mm, person.sprintFor100ms);
        }
        catch (System::FormatException^ ex) {
            // Display error message in a MessageBox

            input.setstate(std::ios::failbit);
            return input;
        }

        double generalAmountSIn3km = person.calculateSeconds(*person.for3km);
        double generalAmountFor100m = person.calculateSeconds(*person.for100m);

        double amountOfPoint = ((generalAmountSIn3km / 100) * 35) + ((person.press / 100) * 20) +
            ((person.longJump / 100) * 20) + ((generalAmountFor100m / 100) * 20);

     
        person.totalPoints = amountOfPoint;
        return input;
    }
    //перегуржений операотор << для того, щоб виводити дані у файл чи просто на екран
    
    friend std::ostream& operator<<(std::ostream& output,  sportsMan& person) {
        output << person.idPerson << " "
            << person.surname << " "
            << person.name << " "
            << formatTimeForOver(*person.for3km) << " "
            << formatTimeForOver(*person.for100m) << " "
            << person.press << " "
            << person.longJump << " "
            << person.getTotalPoints();
        return output;
    }
};

 

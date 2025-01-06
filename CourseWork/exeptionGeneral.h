#pragma once

#ifndef EXEPTION_H
#define EXEPTION_H

#include <string>

using std::string;

class CExeption {
protected: 
	string errorMessage = "";
public: 
	CExeption() = default;
	CExeption(const string& message);

	string getErrorMessage() const;	

	void setErrorMessage(const string& message);
};


class CEmptyFile : public CExeption {
public:
	CEmptyFile(const string& message = "File is empty!") : CExeption(message) {}
};

class CIncorrectInput :  public CExeption
{
public:
	CIncorrectInput(const string& message = "Invalid input!") : CExeption(message) {}
};

class CIncorrectInputFromFile : public CExeption
{
public:
	CIncorrectInputFromFile(const string& message = "Please check if everything in .txt note is in good format") : CExeption(message) {}
};


class CDontExitAvarage : public CExeption
{
public:
	CDontExitAvarage(const string& message = "Please find out the average score of player!") : CExeption(message) {}
};

class CArrayIsEmpty : public CExeption
{
public:
	CArrayIsEmpty(const string& message = "Please fill the table of sportsman!") : CExeption(message) {}
};


class CInvalidTimeData : public CExeption
{
public:
	CInvalidTimeData(const string& message = "Please enter the incorrect form of time\nhh:mm:ss!") : CExeption(message) {}
};

class CChooseTheSoringMethod : public CExeption
{
public:
	CChooseTheSoringMethod(const string& message = "Please, choose the sorting method!") : CExeption(message) {}
};
class CIdIsNotFound : public CExeption
{
public:
	CIdIsNotFound(const string& message = "There is no such as sportsman!") : CExeption(message) {}
};
class CIdIsAlreadyExist : public CExeption
{
public:
	CIdIsAlreadyExist(const string& message = "There is a player with the same Id!") : CExeption(message) {}
};

class CChooseTypeOfWorths : public CExeption
{
public :
	CChooseTypeOfWorths(const string& message = "Please choose by what kind of information\n do yoi want to look for the worst!") : CExeption(message) {}
};
#endif EXEPTION_H
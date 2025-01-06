#pragma once
#include "Header.h"
#include "MyForm.h"
#include <functional>

#include "definition.h"
#include "MyForm.h"

//потрібно для для новертації секунд в часовий формат
CTimerCount convertSecondsToHMS(int totalSeconds) {
    CTimerCount time;

    time.hours = totalSeconds / 3600;
    time.minutes = (totalSeconds % 3600) / 60;
    time.seconds = totalSeconds % 60;

    return time;
}

//для конвертації часофвого формату в секунди
int converHMStoSecond(CTimerCount time) {
    int res = (time.hours * 60 * 60) + (time.minutes * 60) + (time.seconds);
    return res;
}

//для перетворення в стрічку виду часового формату
System::String^ formatTime(const CTimerCount& timer) {
    return System::String::Format("{0:D2}:{1:D2}:{2:D2}", timer.hours, timer.minutes, timer.seconds);
}


//сортування за показником 100 метрів
inline void sortForSortingBy100m(std::vector<sportsMan>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j].get100m() < arr[minIndex].get100m()) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        std::swap(arr[minIndex], arr[i]);
    }
}
// сортування за показником ім'я
inline void selectionSortWithNames(std::vector<sportsMan>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j].getName() < arr[minIndex].getName()) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        std::swap(arr[minIndex], arr[i]);
    }
}




template <typename T>
inline void findWorthst(std::vector<sportsMan>& arr, std::vector<sportsMan>& temp, T averageValue, T(sportsMan::* getter)() const) {
    for (const auto& element : arr) {
        if ((element.*getter)() < averageValue) {
            temp.push_back(element);
        }
    }
}

template <typename T>
inline void findWorthstSpecific(std::vector<T>& arr, std::vector<T>& temp, const CTimerCount& name, CTimerCount(T::* getter)() const) {
    for (const auto& element : arr) {
        if ((element.*getter)() < name) {
            temp.push_back(element);
        }
    }
}

//перевірити чи ID присутнє в списку.
bool IsCheckForId(std::vector<sportsMan>&vec, int id)
{
	for(int i =0; i < vec.size(); i++)
	{
		if(vec[i].getId() == id)
		{
            return false;
		}
	}
    return true;
}

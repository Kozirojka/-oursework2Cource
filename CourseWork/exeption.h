#/*pragma once
#ifndef EXEPTION_H
#define EXEPTION_H
#include "Header.h"
#include "functionForManipulationWithPlayers.h"
#include "definition.h"
#include "MyForm.h"

#include <exception>

class CBasicException : public std::exception
{
protected:
	std::string errorMessege = "";

	CBasicException() = default;
	CBasicException(const std::string& messege);

	CBasicException(const char* message) : std::exception(message)
	{

	}

	std::string getError() const;


	void setError(const std::string& message);
};


#endif EXEPTION_H
*/
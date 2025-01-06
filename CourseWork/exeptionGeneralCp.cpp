#include <regex>

#include "exeptionGeneral.h"

CExeption::CExeption(const string& message) {
	this->errorMessage = message;
}

string CExeption::getErrorMessage() const {
	return this->errorMessage.c_str();
}

void CExeption::setErrorMessage(const std::string& message) {
	this->errorMessage = message;
}

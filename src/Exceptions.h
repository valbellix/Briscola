#ifndef Exceptions_h
#define Exceptions_h

#include <stdexcept>

class WrongChoiceException : public std::runtime_error
{
public:
	WrongChoiceException(): std::runtime_error("Wrong choice exception") {}
	explicit WrongChoiceException(const std::string& msg): std::runtime_error(msg) {}
};

#endif
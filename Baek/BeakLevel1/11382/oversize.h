#pragma once

#include <string>
class oversize
{
private:
	std::string value;

public:
	oversize(const std::string& Invalue)
		: value(Invalue) {};

	static std::string Calc(const oversize& num1, const oversize& num2, size_t digit);

};
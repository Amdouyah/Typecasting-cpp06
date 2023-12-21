#ifndef SCALER_HPP
#define SCALER_HPP

#include <iostream>
#include <cstdlib>
#include <limits>

class ScalarConverter{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator =(const ScalarConverter &copy);
		~ScalarConverter();
		void convert( std::string str);
};
void to_char(double s);
void to_int(double s);
void to_float(double s);
void to_double(double s);


#endif
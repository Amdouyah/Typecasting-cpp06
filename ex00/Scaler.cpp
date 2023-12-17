#include "Scaler.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::~ScalarConverter(){
}

void ScalarConverter::convert(std::string str){
	
	std::cout <<"int: " << std::atoi(str.c_str()) << std::endl;
	std::cout <<"double: " << std::atof(str.c_str()) << std::endl;
	// std::cout <<"float: " << static_cast<float>(std::atof(str.c_str()))<< "f" << std::endl;
}
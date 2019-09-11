#include <iostream>
#include <string>
#include "cmathparser.h"

int main(){
	std::string exp;
	
	std::cout << "Enter a Mathematical Expression >> ";
	std::cin >> exp;

	std::cout << "Answer: " << evaluate(exp.c_str()) << std::endl;

	return 0;
}

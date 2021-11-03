#pragma once
#include <iostream>
#include <string>

class TempConverter_A {
	const static std::string degree;

	std::string f_toString(double f) {
		return  std::to_string(f) + degree+"F";
	}

	std::string c_toString(double c) {
		return   std::to_string(c) + degree + "C";
	}

public:
	void farenheitToCelsius() {
		double farenheit;
		std::cout << "Enter temperature in farenheit: ";
		
		std::cin >> farenheit;

		//(°F - 32) x 5 / 9 = °C
		double celsius = (farenheit - 32) * 5 / 9;

		std::cout << f_toString(farenheit) << " is " << c_toString(celsius) << "\n";
	}

	void celsiusToFarenheit() {
		double celsius;

		std::cout << "Enter temperature in celsius: ";

		std::cin >> celsius;

		//(°C x 9 / 5) + 32 = °F
		double farenheit = (celsius * 9 / 5) + 32;

		std::cout << c_toString(celsius) << " is "  << f_toString(farenheit) <<"\n";
	}
};

const std::string TempConverter_A::degree = "\370";


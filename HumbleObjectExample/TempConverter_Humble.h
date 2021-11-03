#pragma once

#pragma once
#include <iostream>
#include <string>
#include "TemperatureCalculator.h"

class TempConverter_B {

	TemperatureCalculator& tc;

public:
	TempConverter_B(TemperatureCalculator& tc) :tc(tc) {}

	void farenheitToCelsius() {
		double farenheit;
		
		std::cout << "Enter temperature in farenheit: ";
		std::cin >> farenheit;

		std::cout << tc.farenheitToCelsius(farenheit);
	}

	void celsiusToFarenheit() {
		double celsius;

		std::cout << "Enter temperature in celsius: ";
		std::cin >> celsius;

		std::cout << tc.celsiusToFarenheit(celsius);
	}
};
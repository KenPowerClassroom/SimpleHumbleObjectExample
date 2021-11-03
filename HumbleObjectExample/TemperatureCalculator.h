#pragma once
#include<string>

class TemperatureCalculator {
	const static std::string degree;

	std::string f_toString(double f) {
		return  std::to_string(f) + degree + "F";
	}

	std::string c_toString(double c) {
		return   std::to_string(c) + degree + "C";
	}
public:

	std::string farenheitToCelsius(double farenheit) {

		//(°F - 32) x 5 / 9 = °C
		double celsius = (farenheit - 32) * 5.0 / 9;

		return  f_toString(farenheit) + " is " + c_toString(celsius) + "\n";
	}

	std::string celsiusToFarenheit(double celsius) {

		//(°C x 9 / 5) + 32 = °F
		double farenheit = (celsius * 9.0 / 5) + 32;

		return c_toString(celsius) + " is " + f_toString(farenheit) + "\n";
	}
};

const std::string TemperatureCalculator::degree = "\xF8";
#include "pch.h"
#include "../HumbleObjectExample/TemperatureCalculator.h"

std::string deg = "\xF8";
TEST(TemperatureCalculator, CtoF) {

	TemperatureCalculator tc;

	std::string expected0c = "0.000000" + deg + "C is 32.000000" + deg + "F\n";

	EXPECT_EQ("0.000000\xF8" "C is 32.000000\xF8" "F\n", tc.celsiusToFarenheit(0));

	std::string expected100c = "100.000000" + deg + "C is 212.000000" + deg + "F\n";

	EXPECT_EQ(expected100c, tc.celsiusToFarenheit(100));
}

TEST(TemperatureCalculator, FtoC) {

	TemperatureCalculator tc;

	std::string  expected0f = "0.000000" + deg + "F is -17.777778" + deg + "C\n";

	EXPECT_EQ(expected0f, tc.farenheitToCelsius(0));

	std::string  expected100f = "100.000000"+deg+ "F is 37.777778"+deg+ "C\n";

	EXPECT_EQ(expected100f, tc.farenheitToCelsius(100));
}
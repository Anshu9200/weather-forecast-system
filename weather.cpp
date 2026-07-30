#include <iostream>
#include "weather.h"

using namespace std;

void predictWeather(float temperature, float humidity, string condition)
{
    cout << "\n========== Weather Report ==========\n";

    cout << "Temperature : " << temperature << " °C" << endl;
    cout << "Humidity    : " << humidity << " %" << endl;
    cout << "Condition   : " << condition << endl;

    cout << "\nForecast:\n";

    if (condition == "Sunny" || condition == "sunny")
        cout << "Wear sunglasses and stay hydrated." << endl;
    else if (condition == "Rainy" || condition == "rainy")
        cout << "Carry an umbrella." << endl;
    else if (condition == "Cloudy" || condition == "cloudy")
        cout << "Weather is pleasant today." << endl;
    else
        cout << "Unknown weather condition." << endl;

    if (temperature > 35)
        cout << "High temperature warning!" << endl;
    else if (temperature < 10)
        cout << "Cold weather warning!" << endl;

    if (humidity > 80)
        cout << "High humidity detected." << endl;

    cout << "\nHave a nice day!" << endl;
}

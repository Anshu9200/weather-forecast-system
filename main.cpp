#include <iostream>
#include "weather.h"

using namespace std;

int main() {
    float temperature, humidity;
    string condition;

    cout << "========== Weather Forecast System ==========\n";

    cout << "Enter Temperature (°C): ";
    cin >> temperature;

    cout << "Enter Humidity (%): ";
    cin >> humidity;

    cout << "Enter Weather Condition (Sunny/Cloudy/Rainy): ";
    cin >> condition;

    predictWeather(temperature, humidity, condition);

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int file_size; // Snake Case
    int FileSize;  // Pascal Case (mainly use for classes)
    int fileSize;  // Camel Case (mainly use for variables)
    int iFileSize; // Hungarian Notation (First letter provides the type)

    /*
    Problem 1: You have earned an annual sale of $95000, but you need to pay state and county taxes.
    State taxes are 4% where as county taxes is 2%, how much money in state, county, and overall taxes
    do you need to pay and how much will you have left over in annual sales.
    */

    const int annualSales = 95000;
    const double stateTaxes = 0.04, countyTaxes = 0.02;
    int stateTotal = 0, countyTotal = 0, annualLeftOver = 0;

    stateTotal = annualSales * stateTaxes;
    countyTotal = annualSales * countyTaxes;
    annualLeftOver = annualSales - stateTotal - countyTotal;

    cout << "State Taxes need to be paid: $" << stateTotal << endl
         << "County Taxes need to be paid: $" << countyTotal << endl
         << "Total Taxes need to be paid: $" << countyTotal + stateTotal << endl
         << "Total annual sales left over: $" << annualLeftOver << endl
         << endl;

    /*
    Problem 2: Write a program that can convert a temperature from fahrenheit to celcius
    First Step: Subtract the fahrenheit number by 32
    Second Step: divide by 1.8
    */

    cout << "What is the current Fahrenheit number: ";
    double fahrenheitNumber = 0;
    double conversionToCelcius = 0;
    const int firstStep = 32;
    const double secondStep = 1.8;

    cin >> fahrenheitNumber;

    conversionToCelcius = (fahrenheitNumber - firstStep) / secondStep;
    cout << "The conversion from fahrenheit to celcius is: " << conversionToCelcius << " degrees";

    return 0;
}
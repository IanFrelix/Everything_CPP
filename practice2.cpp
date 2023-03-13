#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double result1 = floor(1.2);
    double result2 = pow(2, 3); // 2 to the power of 3

    cout << result1 << endl
         << result2 << endl;

    // Problem 1: Write a program to calculate the area of a circle.
    cout << "Give me the radius of the circle: ";
    double radiusOfCircle = 0;
    const double pi = 3.14;
    double areaOfCircle = 0;
    cin >> radiusOfCircle;

    areaOfCircle = pi * pow(radiusOfCircle, 2);
    cout << "Area of the circle is: " << areaOfCircle;

    return 0;
}
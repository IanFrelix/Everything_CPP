#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main(void)
{
    string myString = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
    ofstream fileOut;
    fileOut.open("OUT.TXT");
    fileOut << myString;
    fileOut.close();

    return 0;
}
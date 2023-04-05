#include <iostream>
#include <cstring>
#include <cmath>
#include <fstream>

using namespace std;

int main(void)
{

    ofstream fileOut;
    fileOut.open("NOTES.TXT");
    for (int i = 1; i <= 100; i++)
        fileOut << i << endl;
    fileOut.close();

    return 0;
}
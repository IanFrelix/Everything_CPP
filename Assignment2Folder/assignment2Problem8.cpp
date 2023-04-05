#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

void copyupper()
{
    ifstream fileIn;

    fileIn.open("FIRST.TXT");
    ofstream fileOut;
    fileOut.open("SECOND.TXT");
    char eachCharacter;

    while (fileIn.get(eachCharacter))
    {
        eachCharacter = toupper(eachCharacter);
        fileOut.put(eachCharacter);
    }

    fileIn.close();
    fileOut.close();
}

int main(void)
{
    copyupper();
    return 0;
}
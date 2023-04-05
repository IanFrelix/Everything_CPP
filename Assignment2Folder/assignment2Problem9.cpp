#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

void vowelwords()
{
    ifstream fileIn;
    fileIn.open("FIRST.TXT");
    ofstream fileOut;
    fileOut.open("SECOND.TXT");
    char myWord[30];
    while (!fileIn.eof())
    {
        fileIn >> myWord;
        if (myWord[0] == 'a' ||
            myWord[0] == 'e' ||
            myWord[0] == 'i' ||
            myWord[0] == 'o' ||
            myWord[0] == 'u')
            fileOut << myWord << " ";
    }
    fileIn.close();
    fileOut.close();
}

int main(void)
{
    vowelwords();
    return 0;
}
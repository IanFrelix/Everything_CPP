#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void numberOfAlphabets()
{
    ifstream fileIn;
    fileIn.open("OUT.TXT");
    char currentAlphabet;
    int count = 0;
    while (fileIn >> std::noskipws >> currentAlphabet)
    {
        if (std::isalpha(currentAlphabet))
        {
            count++;
        }
    }

    cout << "Number of Alphabets: " << count;
    fileIn.close();
}

int main(void)
{
    numberOfAlphabets();
    return 0;
}
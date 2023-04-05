#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void numberOfWords()
{
    ifstream fileIn;
    fileIn.open("OUT.TXT");
    string currentWord;
    int count = 0;
    while (!fileIn.eof())
    {
        fileIn >> currentWord;
        count++;
    }
    cout << "Number of words: " << count;
    fileIn.close();
}

int main(void)
{
    numberOfWords();
    return 0;
}
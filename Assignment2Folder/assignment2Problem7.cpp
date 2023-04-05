#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

void linesWithoutAStarting()
{
    ifstream fileIn;
    fileIn.open("STORY.TXT");
    char str[100];
    int count = 0;
    while (!fileIn.eof())
    {
        fileIn.getline(str, 100);
        if (str[0] != 'A')
            count++;
    }
    cout << "Number of lines without starting with A: " << count;
    fileIn.close();
}

int main(void)
{
    linesWithoutAStarting();
    return 0;
}
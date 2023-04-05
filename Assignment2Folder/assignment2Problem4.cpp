#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void numberOfSpaces()
{
    ifstream fileIn;
    fileIn.open("OUT.TXT");
    char currentIndex;
    int count = 0;
    while (!fileIn.eof())
    {
        fileIn.get(currentIndex);
        if (currentIndex == ' ')
            ++count;
    }
    cout << "Number of Spaces: " << count;
    fileIn.close();
}

int main(void)
{
    numberOfSpaces();
    return 0;
}
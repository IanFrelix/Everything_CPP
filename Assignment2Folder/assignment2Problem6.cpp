#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

void numberOfThe()
{
    ifstream fileIn;
    fileIn.open("STORY.TXT");
    char word[30];
    const char *actualWord = "the";
    int count = 0;
    while (!fileIn.eof())
    {
        fileIn >> word;
        if (strcmpi(word, actualWord) == 0)
            count++;
    }

    cout << "Number of the: " << count;
    fileIn.close();
}

int main(void)
{
    numberOfThe();
    return 0;
}
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

class computer
{
    char chiptype[10];
    int speed;

public:
    void getdetails()
    {
        gets(chiptype);
        cin >> speed;
        cin.ignore();
    }
    void showdetails()
    {
        cout << " Chip = " << chiptype << " Speed = " << speed << endl;
    }
};

void writeToBinaryFile(computer computerArray[])
{
    ofstream fileOut;
    fileOut.open("SHIP.DAT", ios::out | ios::binary);
    for (int i = 0; i < 5; ++i)
    {
        computerArray[i].getdetails();
        fileOut.write((char *)&computerArray[i], sizeof(computer));
    }
    fileOut.close();
}

void readFile()
{
    int count = 0;
    computer computer;
    ifstream fileIn;
    fileIn.open("SHIP.DAT", ios::in | ios::binary);
    while (fileIn.read(reinterpret_cast<char *>(&computer), sizeof(computer)))
    {
        computer.showdetails();
        count++;
    }
    cout << " Number of Records: " << count << endl;
    fileIn.close();
}

int main(void)
{
    computer computerArray[5];
    // Use this to write chips in the file
    //  writeToBinaryFile(computerArray);

    readFile();
}
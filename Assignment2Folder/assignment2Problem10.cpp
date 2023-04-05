#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class EMPLOYEE
{
    int ENO;
    char ENAME[10];

public:
    void GETIT()
    {
        cin >> ENO;
        cin.ignore();
        gets(ENAME);
    }
    void SHOWIT()
    {
        cout << ENO << " " << ENAME << endl;
    }
};

void writeToBinaryFile(EMPLOYEE myEmployee[])
{
    fstream fileOut;
    fileOut.open("EMPLOYEES.DAT", ios::out | ios::binary);
    for (int i = 0; i < 3; ++i)
    {
        fileOut.write((char *)&myEmployee[i], sizeof(EMPLOYEE));
    }
    fileOut.close();
}

readAndDisplayBinaryFile()
{
    fstream fileIn;
    EMPLOYEE newEmployee;
    fileIn.open("EMPLOYEES.DAT", ios::in | ios::binary);
    while (fileIn.read((char *)&newEmployee, sizeof(EMPLOYEE)))
    {
        cout << endl
             << endl;
        cout << "Data extracted from file..\n";
        // print the object
        newEmployee.SHOWIT();
    }

    fileIn.close();
}

int main(void)
{
    EMPLOYEE myEmployee[3];
    for (int i = 0; i < 3; ++i)
    {
        myEmployee[i].GETIT();
    }
    writeToBinaryFile(myEmployee);
    readAndDisplayBinaryFile();
    return 0;
}
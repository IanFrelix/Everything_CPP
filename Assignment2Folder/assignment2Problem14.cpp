#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class STUD
{
    int Rno;
    char Name[20];

public:
    void Enter()
    {
        cin >> Rno;
        cin.ignore();
        gets(Name);
    }
    void Display()
    {
        cout << Rno << Name << endl;
    }
};

void addStudent()
{
    ofstream File;
    File.open("STUDENT.DAT", ios::binary | ios::app);
    STUD student;
    student.Enter();
    File.write((char *)&student, sizeof(STUD));
    File.close();
}

int main(void)
{
    addStudent();
}
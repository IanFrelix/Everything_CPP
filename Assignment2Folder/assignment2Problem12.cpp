#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Student
{
    char S_Admno[10]; // Admission number of student
    char S_Name[30];  // Name of student
    int Percentage;   // Marks Percentage of student
public:
    void EnterData()
    {
        gets(S_Admno);
        gets(S_Name);
        cin >> Percentage;
        cin.ignore();
    }
    void DisplayData()
    {
        cout << setw(12) << S_Admno;
        cout << setw(32) << S_Name;
        cout << setw(3) << Percentage << endl;
    }
    int ReturnPercentage()
    {
        return Percentage;
    }
};

void writeStudentsToFile(Student myStudents[])
{
    ofstream fileOut;
    fileOut.open("STUDENT.DAT", ios::out | ios::binary);
    for (int i = 0; i < 5; ++i)
    {
        myStudents[i].EnterData();
        fileOut.write((char *)&myStudents[i], sizeof(Student));
    }
    fileOut.close();
}

void readStudentFile()
{
    const int percentage = 75;
    Student student;
    ifstream fileIn;
    fileIn.open("Student.DAT", ios::in | ios::binary);
    while (fileIn.read(reinterpret_cast<char *>(&student), sizeof(Student)))
    {
        if (student.ReturnPercentage() > percentage)
        {
            student.DisplayData();
        }
    }

    fileIn.close();
}

int main(void)
{
    Student myStudents[5];
    // Used this to write students in a file, commented out due to assignment only asking to read an existing file
    //  writeStudentsToFile(myStudents);
    readStudentFile();
}
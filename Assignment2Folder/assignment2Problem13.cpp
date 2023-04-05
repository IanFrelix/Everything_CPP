#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Employee
{
    int Eno;
    char Ename[20];

public:
    // Function to count the total number of records
    int Countrec();
};

int Employee::Countrec()
{
    fstream File;
    File.open("EMP.DAT", ios::binary | ios::in);
    File.seekg(0, ios::end);  // Statement 1
    int Bytes = File.tellg(); // Statement 2
    int Count = Bytes / sizeof(Employee);
    File.close();
    return Count;
}

int main(void)
{
    Employee emp;
    int Count;
    Count = emp.Countrec();
    cout << "The total number of records: " << Count << endl;
    return 0;
}

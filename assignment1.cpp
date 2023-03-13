#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class student
{

private:
    int admno;
    string sname;
    float eng, math, science, total;

    float ctotal(float eng, float math, float science)
    {
        return eng + math + science;
    }

public:
    void Takedata(int admno, string sname, float eng, float math, float science)
    {
        this->admno = admno;
        this->sname = sname;
        this->eng = eng;
        this->math = math;
        this->science = science;
        this->total = ctotal(eng, math, science);
    }

    void Showdata()
    {
        cout << "Administration Number: " << admno << endl
             << "Name: " << sname << endl
             << "English: " << eng << endl
             << "Math: " << math << endl
             << "Science: " << science << endl
             << "Total: " << total << endl;
    }
};

class batsman
{
private:
    // int bcode[4];
    int bcode;
    // char bname[20];
    string bname;
    int innings, notout, runs;
    float batavg;

    float calcavg(int innings, int notout, int runs)
    {
        return runs / (innings - notout);
    }

public:
    void readdata(int bcode, string bname, int innings, int notout, int runs)
    {
        // memcpy(bcode, bcodeCopy, sizeof(bcodeCopy));
        this->bcode = bcode;
        // memcpy(bname, bnameCopy, sizeof(bnameCopy));
        this->bname = bname;
        this->innings = innings;
        this->notout = notout;
        this->runs = runs;

        batavg = calcavg(innings, notout, runs);
    }

    void displaydata()
    {
        /*
        int length = sizeof(bcode) / sizeof(bcode[0]);
        for(int i = 0; i < length; ++i) {
            cout << bcode[i];
        }
        cout << endl;
        cout.write(bname, sizeof(bname)) << endl;
        */
        cout << "Bat code: " << bcode << endl
             << "Name: " << bname << endl
             << "innings: " << innings << endl
             << "notout: " << notout << endl
             << "runs: " << runs << endl
             << "batavg: " << batavg << endl;
    }
};

class TEST
{
private:
    int TestCode, NoCandidates, CenterReqd;
    string Description;

    int CALCNTR(int NoCandidates)
    {
        return (NoCandidates / 100 + 1);
    }

public:
    void SCHEDULE(int TestCode, string Description, int NoCandidates)
    {
        this->TestCode = TestCode;
        this->Description = Description;
        this->NoCandidates = NoCandidates;

        CenterReqd = CALCNTR(NoCandidates);
    }

    void DIPTEST()
    {
        cout << "Test Code: " << TestCode << endl
             << "Description: " << Description << endl
             << "Number of Candidates: " << NoCandidates << endl
             << "Number of Centers: " << CenterReqd << endl;
    }
};

class Flight
{
private:
    int flightNumber;
    string destination;
    float distance, fuel;

    int CALFUEL(int distance)
    {
        if (distance <= 1000)
        {
            return 500;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            return 1100;
        }
        else
        {
            return 2200;
        }
    }

public:
    void FEEDINFO()
    {
        cout << "Enter data for Problem 4: " << endl;
        cin >> flightNumber;
        getline(cin >> ws, destination);
        cin >> distance;

        fuel = CALFUEL(distance);
    }

    void SHOWINFO()
    {
        cout << "Flight Number: " << flightNumber << endl
             << "Destination: " << destination << endl
             << "Distance: " << distance << endl
             << "Fuel: " << fuel << endl;
    }
};

class BOOK
{
private:
    int bookNumber;
    string bookTitle; // must be char array
    float price;

    float TOTAL_COST(int N)
    {
        return N * price;
    }

public:
    INPUT()
    {
        cout << "Enter data for Problem 5: " << endl;
        cin >> bookNumber;
        getline(cin >> ws, bookTitle);
        cin >> price;
    }

    PURCHASE()
    {
        int n;
        float totalCost;
        cout << "Number of Copies: " << endl;
        cin >> n;
        totalCost = TOTAL_COST(n);
        cout << "Book Number: " << bookNumber << endl
             << "Book Title: " << bookTitle << endl
             << "Price: " << price << endl
             << "Number of Books: " << n << endl
             << "Total Cost($): " << totalCost << endl;
    }
};

class Report
{
private:
    int adno;
    char name[20];
    float marks[5];
    float average;

    float GETAVG()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        return total / 5;
    }

public:
    void READINFO(int adno, const char name[], float marks[])
    {
        this->adno = adno;
        strcpy(this->name, name);
        for (int i = 0; i < 5; i++)
        {
            this->marks[i] = marks[i];
        }
        average = GETAVG();
    }

    void DISPLAYINFO()
    {
        cout << "Admision Number: " << adno << endl;
        cout << "Name: " << name << endl;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Mark " << i + 1 << ": " << marks[i + 1] << endl;
        }
        cout << "Average: " << average << endl;
    }
};

class Rectangle
{
private:
    float length, width;

public:
    void setLength(float length)
    {
        this->length = length;
    }

    void setWidth(float width)
    {
        this->width = width;
    }

    float perimeter()
    {
        return 2 * (length + width);
    }

    float area()
    {
        return length * width;
    }

    void show()
    {
        cout << "Length: " << length << endl
             << "Width: " << width << endl;
    }

    int sameArea(Rectangle thisRectangle)
    {
        if (fabs(area() - thisRectangle.area()) < 0.01f)
        {
            return 1;
        }
        return 0;
    }
};

class complex
{
private:
    float realParts, imaginaryParts;

public:
    void set(float realParts, float imaginaryParts)
    {
        this->realParts = realParts;
        this->imaginaryParts = imaginaryParts;
    }

    void disp()
    {
        cout << realParts << " + " << imaginaryParts << "i" << endl;
    }

    complex sum(complex x)
    {
        complex temp;
        temp.realParts = realParts + x.realParts;
        temp.imaginaryParts = imaginaryParts + x.imaginaryParts;

        return temp;
    }
};

class Distance
{
private:
    int feet;
    float inches;

public:
    void set(int feet, float inches)
    {
        this->feet = feet;
        this->inches = inches;
    }

    void disp()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    Distance add(Distance x)
    {
        Distance tmp;
        tmp.feet = feet + x.feet;
        tmp.inches = inches + x.inches;

        while (tmp.inches >= 12.0)
        {
            tmp.inches = tmp.inches - 12.0;
            ++tmp.feet;
        }

        return tmp;
    }
};

class time
{
private:
    int hours, minutes;

public:
    void setTime(int hours, int minutes)
    {
        this->hours = hours;
        this->minutes = minutes;
    }

    void showTime()
    {
        cout << "Hours: " << hours << endl
             << "Minutes: " << minutes << endl;
    }

    time sum(time x)
    {
        time tmp;
        tmp.hours = hours + x.hours;
        tmp.minutes = minutes + x.minutes;

        while (tmp.minutes > 60.0)
        {
            tmp.minutes = tmp.minutes - 60.0;
            tmp.hours++;
        }

        while (tmp.hours > 12.0)
        {
            tmp.hours = tmp.hours - 12.0;
        }

        return tmp;
    }
};

int main()
{
    // Problem 1 need to fix

    student myStudent;
    cout << "Please Enter Data for Problem 1" << endl;
    int admno;
    string sname;
    float eng, math, science;
    cin >> admno >> sname >> eng >> math >> science;

    myStudent.Takedata(admno, sname, eng, math, science);
    myStudent.Showdata();

    // Problem 2 need to fix
    batsman myBatsMan;
    // int bcode[4];
    int bcode;
    // char bname[20];
    string bname;
    int innings, notout, runs;
    float batavg;

    cout << "Please Enter Data for Problem 2" << endl;
    cin >> bcode >> bname >> innings >> notout >> runs;
    myBatsMan.readdata(bcode, bname, innings, notout, runs);
    myBatsMan.displaydata();

    // Problem 3

    TEST myTest;
    int TestCode, NoCandidates;
    string Description;
    cout << "Please Enter Data for Problem 3" << endl;
    cin >> TestCode;
    getline(cin >> ws, Description);
    cin >> NoCandidates;

    myTest.SCHEDULE(TestCode, Description, NoCandidates);
    myTest.DIPTEST();

    // Problem 4
    Flight myFlight;
    myFlight.FEEDINFO();
    myFlight.SHOWINFO();

    // Problem 5 need to fix

    BOOK myBook;
    myBook.INPUT();
    myBook.PURCHASE();

    // Problem 6

    Report myReport;
    float marks[5] = {5.0, 4.2, 3.3, 3.1, 4.5};
    myReport.READINFO(4801, "Ian Frelix", marks);
    myReport.DISPLAYINFO();

    // Problem 7
    Rectangle myRect1;
    Rectangle myRect2;

    myRect1.setLength(5);
    myRect1.setWidth(2.5);
    cout << "First Rectangle Results: " << endl
         << "Area: " << myRect1.area() << endl
         << "Perimeter: " << myRect1.perimeter() << endl;
    myRect1.show();

    myRect2.setLength(5);
    myRect2.setWidth(18.9);
    cout << "Second Rectangle Results: " << endl
         << "Area: " << myRect2.area() << endl
         << "Perimeter: " << myRect2.perimeter() << endl;
    myRect2.show();

    if (myRect1.sameArea(myRect2) == 1)
    {
        cout << "The two rectangles have the same area" << endl;
    }
    else
    {
        cout << "The two rectangle do not have the same area" << endl;
    }

    cout << "Second part of Problem 7" << endl;

    myRect1.setLength(15);
    myRect1.setWidth(6.3);
    cout << "First Rectangle Results: " << endl
         << "Area: " << myRect1.area() << endl
         << "Perimeter: " << myRect1.perimeter() << endl;
    myRect1.show();

    myRect2.setLength(5);
    myRect2.setWidth(18.9);
    cout << "Second Rectangle Results: " << endl
         << "Area: " << myRect2.area() << endl
         << "Perimeter: " << myRect2.perimeter() << endl;
    myRect2.show();

    if (myRect1.sameArea(myRect2) == 1)
    {
        cout << "The two rectangles have the same area" << endl;
    }
    else
    {
        cout << "The two rectangle do not have the same area" << endl;
    }

    // Problem 8

    complex myObject1;
    complex myObject2;
    complex myObject3;

    myObject1.set(1, 3);
    myObject2.set(5, 7);

    myObject3 = myObject1.sum(myObject2);
    myObject1.disp();
    myObject2.disp();
    myObject3.disp();

    // Problem 9

    Distance myDistance1;
    Distance myDistance2;
    Distance myDistance3;

    myDistance1.set(5, 11);
    myDistance2.set(9, 4);
    myDistance3 = myDistance1.add(myDistance2);

    myDistance1.disp();
    myDistance2.disp();
    myDistance3.disp();

    time myTime1;
    time myTime2;
    time myTime3;

    myTime1.setTime(7, 26);
    myTime2.setTime(4, 54);
    myTime3 = myTime1.sum(myTime2);

    myTime1.showTime();
    myTime2.showTime();
    myTime3.showTime();

    return 0;
}
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Item
{
    int Ino;
    char Item[20];

public:
    // Function to search and display the content from a particular record number
    void Search(int);
    // Function to modify the content of a particular record number
    void Modify(int);
};

void Item::Search(int RecNo)
{
    fstream File;
    File.open("STOCK.DAT", ios::binary | ios::in);
    File.seekg((RecNo - 1) * sizeof(Item)); // Statement 1
    File.read((char *)this, sizeof(Item));
    cout << Ino << "== > " << Item << endl;
    File.close();
}

void Item::Modify(int RecNo)
{
    fstream File;
    File.open("STOCK.DAT", ios::binary | ios::in | ios::out);
    cin >> Ino;
    cin.getline(Item, 20);
    File.seekp((RecNo - 1) * sizeof(Item)); // Statement 2
    File.write((char *)this, sizeof(Item));
    File.close();
}

int main(void)
{
    Item item;

    item.Search(1);

    item.Search(3);

    item.Search(2);

    item.Modify(1);

    item.Modify(2);

    item.Modify(3);
    return 0;
}
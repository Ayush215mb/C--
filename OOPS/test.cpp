#include <bits/stdc++.h>
using namespace std;

class Info
{

    int id;
    string name;

public:
    void setId(int num)
    {
        id = num;
    }
    void printID()
    {
        cout << id << endl;
    }
};
int main()
{
    Info Ayush;
    Ayush.printID();

    Ayush.setId(10);
    Ayush.printID();

    return 0;
}
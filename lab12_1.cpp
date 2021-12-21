#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int grade;
    srand(time(0));

    cout << "Press Enter 3 times to reveal your future.";
    for(int i=0 ; i<3 ; i++)
    {
        cin.get();
    }
    grade = rand() % 9;

    cout << "You will get ";
    switch(grade)
    {
        case 0: cout << "A"; break;
        case 1: cout << "B+"; break;
        case 2: cout << "B"; break;
        case 3: cout << "C+"; break;
        case 4: cout << "C"; break;
        case 5: cout << "D+"; break;
        case 6: cout << "D"; break;
        case 7: cout << "F"; break;
        case 8: cout << "W"; break;
    }
    cout << " in this 261102.";
}
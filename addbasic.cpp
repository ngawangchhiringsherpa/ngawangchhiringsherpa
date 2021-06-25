#include <iostream>
using namespace std;

int main()
{
    int firstnum, secondnum, sumoftwonums;
    cout << "enter two integers:";
    cin >> firstnum >> secondnum ;

    //sum of two numbers is stored in variable sumoftwonums
    sumoftwonums=firstnum+secondnum;
    //print sum
    cout<<firstnum<<"+"<<secondnum<<"="<<sumoftwonums;
    return 0;
}
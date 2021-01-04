#include "calculator.h"
#include <iostream>

using namespace std;

int main ()
{
    char oper;
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    cout<<"Calculator Console Application"<<endl<<endl;
    cout<<"Please enter the operation on to perform"<<endl;
    calculator c;
    cin>>x>>oper>>y;
    result = c.calculate(x, oper, y);
    cout<<"Result is:"<<result<<endl;
    return 0;
}
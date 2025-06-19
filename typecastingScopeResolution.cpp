// example for scope resolution operator
#include <iostream>

using namespace std;

int c = 20;

int main (){
    int a = 5;
    int b = 6;

    int c = a+b;
    cout << "Value c : " << c << endl;
    cout <<"Value of global c : " <<::c << endl;
    
    //reference variables
    float var = 455;
    float &y = var;
    cout << var << endl;
    cout << y << endl;

    //typecasting
    int p = 45; float q = 45.46;

    cout <<"Value of p is : "<< p << endl;
    cout << "Value of p is : " << float(p) << endl;
    cout << "Value of q is : " << int(q) << endl;

    cout << "The expression is " << p + q << endl;
    cout << "The expression is " << p +int(q) << endl;
    cout << "The expression is " << p +(int)q << endl;

    return 0 ;
}

// 1. System header files : It comes with the compiler
#include <iostream>
// 2. This is a user defined header file. It is 
// written buy the programmer/user.
#include "this.h"

using namespace std;

int main(){

    int a =  4;
    int b = 5;

    cout << "This is hello world" << endl;
    cout << "Following are the operators" <<endl;
    cout << "a+b = "<< a+b << endl;
    cout << "a-b = "<< a-b << endl;
    cout << "a*b = "<< a*b << endl;
    cout << "a/b = "<< a/b << endl;
    cout << "a%b = "<< a%b << endl;
    cout << "a++ = "<< a++ << endl;
    cout << "++a = "<< ++a << endl;
    cout << "a-- = "<< a-- << endl;
    cout << "--a = "<< --a << endl;

    //assignment operators
    int x = 5, y = 8;
    char d = 'o';

    //comparison operators
    cout << "comparision operators "<< endl;
    cout << "x == y is " << (x==y) << endl;
    cout << "x != y is " << (x!=y) << endl;
    cout << "x <= y is " << (x<=y) << endl;
    cout << "x >= y is " << (x>=y) << endl;
    cout << "x > y is " << (x>y) << endl;
    cout << "x < y is " << (x<y) << endl;

    //logical operators
    cout << "Logical opertors" << endl;
    cout << "&& operator : " <<(( x ==y )&& (x < y)) << endl;
    cout << "|| operator : "<< ((x == y) || (x < y)) << endl;
    cout << "! operator : " << (!(x== y)) << endl;

    //bitwise operators
    int p = 2;
    int q = 3;
    cout << "bitwise operators" << endl;
    cout << "& operator: "<< (p&q) << endl;
    cout << "| operator: "<< (p|q) <<endl;
    cout << "^ operator: " << (p^q) << endl;
    cout << "~operator: " << (~p) << endl;
    cout << "left shift operator : "<< (p<<1) <<endl;
    cout << "right shift operator: "<<(p>>1) << endl;

    return 0;
}

//Data types in C++
//built in, user defined data types.
#include <iostream>

using namespace std;

int glow = 10;

typedef struct data {
    float x;
    double y;
} Data;

union num{
    char c;
    int d;
};

enum {
    yellow = 0,
    red,
    blue
};

void sum(){
    int a = 30;
    cout << "Default value of a inside sum func: "<< a << endl;
    cout << "Value of global glow: " << glow <<endl;
}

int main(){
    int a = 10;
    int b = 20;

    int glow = 15;

    //function call which calls global variable : glow
    sum();

    //defining structure variable
    Data d1 = {4.233, 3.1415239};

    //defining union variable
    num n1 ;
    n1.c = 'S';
 
    //enum variable
    int colour0 = yellow;
    int colour1 = red;
    int colour2 = blue;

    //local variable
    cout << "Value a : "<< a << endl;
    cout << "Value b : "<< b << endl;

    //local variable
    cout << "Value of local glow : " << glow << endl;

    //struct
    cout << "Value of struct data d1.x : "<< d1.x <<endl;
    cout << "Value of struct data d1.y : "<< d1.y << endl;

    //union
    cout << "Value of union num n1.c : " << n1.c << endl;
    n1.d = 10;
    cout << "Value of union num n1.d : " << n1.d << endl;

    //enum
    cout << "Value of color1 : "<< colour0 << endl;
    cout << "Value of color2 : "<< colour1 << endl;
    cout << "Value of color3 : "<< colour2 << endl;

    return 0;
}

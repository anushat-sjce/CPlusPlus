#include <iostream>
#include <string>

using namespace std;
class Complex{
    int a, b;
    
    public: 
    Complex(void); //constructor declaration.
    Complex(int x, int y);
    Complex(int x);
    Complex (Complex &obj);
    
    void printData(){
        cout <<" a : "<< a << endl;
        cout <<" b : "<< b << endl;
    }
};

Complex :: Complex(void){
    a = 10;
    b = 20;
};

Complex :: Complex(int x, int y){
    a = x;
    b = y;
}

Complex :: Complex(int x){
    a = x;
    b = 0;
}

Complex :: Complex(Complex &obj){
    cout << "Copy constructor called" << endl;
    a = obj.a;
    b = 0;
}


int main(){
    Complex x;
    x.printData();
    
    Complex z(30 ,40);
    z.printData();
    
    Complex s(50);
    s.printData();
    
    Complex t(s);
    t.printData();
    
    return 0;
}

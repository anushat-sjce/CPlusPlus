#include <iostream>
#include <string>

using namespace std;
class Complex{
    int a, b;
    
    public: 
    Complex(void); //constructor declaration.
    void printData(){
        cout <<" a : "<< a << endl;
        cout <<" b : "<< b << endl;
    }
};

Complex :: Complex(void){
    a = 10;
    b = 20;
};

int main(){
    Complex x;
    x.printData();
    
    return 0;
}

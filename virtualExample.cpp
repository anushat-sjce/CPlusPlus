// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>

using namespace std;

class Base1 {
    int data1;
    public :
    Base1 (int a) {
        data1 = a;
        cout << "Base1 constructor called " << endl;
    }
    
    void printData(void){
        cout << "Value of data1 : " << data1 << endl;
    }
};

class Base2 {
    int data2;
    public : 
    Base2(int x){
        data2 = x;
        cout << "Base2 constructor called" << endl;
    }
    
    void printData(void){
        cout << "Value of data2 : "<< data2 << endl;
    }
};

class Derived : public Base2, virtual public Base1 {
    int data3;
    public : 
    Derived(int m, int n, int o): Base1(m), Base2(n) {
        data3 = o;
        cout << "Derived constructor called "<< endl;
    }
    void printData(void){
        cout << "Value of data3 : " << data3 << endl;
    }
};


int main() {
    Derived d1 (10, 20, 30);
    d1.printData();
    
    return 0;
}

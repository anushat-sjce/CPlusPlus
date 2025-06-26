// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>

using namespace std;

class Complex {
    int real;
    int imaginary;
    
    public :
    void setData(int a, int b){
        real = a;
        imaginary = b;
        cout << "setData called " << endl;
    }
    
    void printData(void){
        cout << "real : " << real <<  endl;
        cout << "imaginary : " << imaginary << endl;
    }
};

int main(){
    Complex *ptr = new Complex;
    ptr->setData(10, 20);
    ptr->printData();
    
    Complex *arr = new Complex[3];
    arr->setData(30, 40);
    arr->printData();
    
    (arr+1)->setData(50, 60);
    (arr+1)->printData();
    
    delete[](ptr);
    ptr->printData(); // prints junk/garbage data
    arr->printData();
    delete[](arr);
    arr->printData(); // prints junk/garbage data
    
    return 0;
}

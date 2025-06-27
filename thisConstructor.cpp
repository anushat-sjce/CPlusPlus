// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>

using namespace std;

class Complex {
    int real;
    int imaginary;
    int c;
    
    public :
    void  setData(int a, int b, int c){
        real = a;
        imaginary = b;
        this->c = c;
        cout << "setData called " << endl;
    }
    
    void printData(void){
        cout << "real : " << real <<  endl;
        cout << "imaginary : " << imaginary << endl;
        cout << "c : " << c << endl;
    }
};

int main(){
    Complex *arr = new Complex[3];
    (arr+1)->setData(10, 20, 30);
    (arr+1)->printData();
    
    
    return 0;
}

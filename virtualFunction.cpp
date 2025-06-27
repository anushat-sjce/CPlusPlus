// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>

//Runtime ploymorphism will be done using virtual functions. // late binding.
//compile time polymorphism,- func overloading and operator overloading. // early binding.

using namespace std;

class Complex {
    int data;
    public :
       Complex(int a){
           data = a;
       }
        virtual  void displayData(void){
            cout << "Data is : " << data << endl;
        }
};

class Complex1 :public Complex {
    int data1;
    public :
        Complex1(int a, int b):Complex(a){
            data1 = b;
        }
        void displayData(void){
            cout << "Data1 is : " << data1 << endl;
        }
};

class Complex2 :public Complex {
    int data2;
    public :
        Complex2(int a, int b):Complex(a){
            data2 = b;
        }
        void displayData(void){
            cout << "Data2 is : " << data2 << endl;
        }
};

int main(){
    Complex1 c1 (10, 20);
    Complex2 c2 (30, 40);
    c1.displayData();
    c2.displayData();
    
    
    Complex* c[2];
    c[0] = &c1;
    c[1] = &c2;
    
    c[0]->displayData();
    c[1]->displayData();
    
    return 0;
}

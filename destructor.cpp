#include <iostream>
#include <string>

using namespace std;
class Complex{
    int a, b;
    int count;
    
    public: 
    Complex(void); //constructor declaration.
    Complex(int x, int y); //constructor
    Complex(int x); //constructor
    Complex (Complex &obj); //constructor
    
    ~Complex(){
        cout << "Destructor is called" << endl;
        
    }
    void printData(){
        cout <<" a : "<< a << endl;
        cout <<" b : "<< b << endl;
    }
};

Complex :: Complex(void){
    count++;
    a = 10;
    b = 20;
};

Complex :: Complex(int x, int y){
    count++;
    a = x;
    b = y;
}

Complex :: Complex(int x){
    count++;
    a = x;
    b = 0;
}

Complex :: Complex(Complex &obj){
    count++;
    cout << "Copy constructor called" << endl;
    a = obj.a;
    b = 0;
}

int main(){
    Complex x;
  x.printData();
     
    Complex z(30 ,40);
   z.printData();
   
   {
       cout << "Entering the block" << endl;
       cout << "Creating two more objects" << endl;
       Complex c1, c2;
       cout << "Exiting the block" << endl;
       
   } 
   // Complex s(50);
   //   s.printData();
    
   //   Complex t(s);
   //   t.printData();
    
    return 0;
}

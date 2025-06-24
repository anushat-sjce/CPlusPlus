#include <iostream>
#include <string>

using namespace std;

class Base1{
    int a;
    public : 
        void greet(){
            cout << "hOW ARE YOU BASE1 ?"<< endl;
        }
};

class Base2{
    public : 
        void greet(){
            cout << "How are you Base2  " << endl;
        }
};

class Three : public Base1, public Base2{
    public:
        void greet(){
            Base1::greet();
        }
};


int main(){
   Base1 obj1;
   Base2 obj2;
   
   Three three;
   three.greet();

    return 0;
}

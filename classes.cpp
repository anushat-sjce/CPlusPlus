// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class Employee{
    private :   int a;
                int b;
                int c;
    public  :   int d;
                int e;
                void setData(int a1, int b1, int c1);
                void getData(){
                    cout << "a : "<< a << endl;
                    cout << "b : "<< b << endl;
                    cout << "c : "<< c << endl;
                    cout << "d : " << d << endl;
                    cout << "e : " << e << endl;
                }
};
    
void Employee :: setData(int a1, int b1, int c1){
        a = a1;
        b = b1;
        c = c1;
}

int main() {
    // Write C++ code here
    Employee e1;
    e1.d = 40;
    e1.e = 50;
    e1.setData(10, 20, 30);
    e1.getData();

    return 0;
}

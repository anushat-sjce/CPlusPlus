// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

//
template <class t3>
class methods{
    public : 
    t3 a;
    methods(t3 x){
        a = x;
    }
    void display();
};

template <class t3>
void methods<t3> :: display(){
    cout << "a value : " << a << endl;
}

template <class t1, class t2>
float calculate(t1 x, t2 y){
    float product = 0;
    return (x * y);
}


//exact match get priority
void func(int a){
    cout << "I am first func : " << a << endl;
}

//
template <class t4>
void func(t4 a){
    cout << "I am templatised function : " << a << endl;
}


int main(){
    float p = calculate(10, 20.5);
    cout << "Product : " << p << endl;
    
    int x = calculate(10, 5.1);
    cout << "Product : " << x << endl;
    
    methods <int>m1(10);
    methods <float>m2(101.234);
    methods <char>m3('D');
    
    m1.display();
    m2.display();
    m3.display();
    
    func(5);
    func('a');
 
    return 0;
}

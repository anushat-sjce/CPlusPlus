// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

template <class T>

class vector{
    public : 
    T * a;
    T * b;
    int size;
    vector(int s){
        a = new T[s];
        b = new T[s];
    }
    
    int product(vector &v){
        int i = 0; 
        int sum = 1;
        
        for(i = 0 ; i < 3 ; i++){
            sum = sum * v.a[i];
        }
        return sum;
    }
};

int main(){
    vector <int>v1(3);
    v1.a[0] = 10;
    v1.a[1] = 20;
    v1.a[2] = 30;
    int k = v1.product(v1);
    cout << "Sum is : " << k << endl;
    
    return 0;
}

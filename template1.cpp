// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
template <class T>
class vector {
        public :
    T * arr;
    int size;

        vector (int m) {
            size = m;
            arr = new T[size];
        }
        T dotproduct(vector &v) {
            T d = 0;
            for(int i = 0; i < size; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main(){
    vector <float>v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 5;
    v1.arr[2] = 6;
    
    vector <float>v2(3);
    v2.arr[0] = 1.1;
    v2.arr[1] = 0;
    v2.arr[2] = 1.2;
    
    float  k = v1.dotproduct(v2);
    cout << k;
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
template <class T1= int, class T2=float>
class maths{
    public : 
        T1 a;
        T2 b;
        
        maths(T1 x, T2 y){
            a = x;
            b = y;
        }
        
        T2 displaySum(){
            T2 sum = 0;
            sum = a + b; 
            return sum;
        }
};


int main(){
  maths <int, float> m1(10, 20.5);
  float sum = m1.displaySum();
  cout << "Sum : " << sum<< endl;
  
  maths<int, int>m2(20, 30);
  int sum2 = m2.displaySum();
  cout << "Sum : " << sum2 << endl;
  
  return 0;
}

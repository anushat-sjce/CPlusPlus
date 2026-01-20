#include <iostream>
using namespace std;

template <typename T> 
T mymax(T x, T y){
    return max(x,y);
}
int main(){
   int *ptr ;
   ptr = new int(6);

   int *ptr2;

   ptr2 = new int[10];
   ptr2[0] = 1;
   ptr2[1] = 2;

   cout << *ptr << endl;
   cout << ptr2[0] << endl;
   cout << ptr2[1] << endl;

   cout << mymax(30,30) << endl; 
   cout << mymax(30.22, 45.22) << endl;
   cout << mymax('g', 'r') << endl;

   delete ptr;
   return 0;
}

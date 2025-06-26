// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;
    
    cout << "Value of x : " << x << endl;
    cout << "Value of *ptr : " << (*ptr) << endl;
    cout << "Value of ptr : " << (ptr) << endl;
    
    int *p = new int(40);
    
    cout << "Value of *p : " << (*p) << endl;
    cout << "Value of p : " << (p) << endl;
    
    float *a = new float[3];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    delete[](a);
    
    cout << "Value of a[0] : " << a[0] << endl;
    cout << "Value of a[1] : " << a[1] << endl;
    cout << "Value of a[2] : " << a[2] << endl;
    
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const int a = 3;
    cout << "The value of a is now : " << a << endl;
    //setw for the width of the output.
    cout << "The value of a is : "<< (setw(4)) << a << endl;
    return 0;
}

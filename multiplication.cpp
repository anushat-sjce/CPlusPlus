#include <iostream>

using namespace std;

int main(){
    cout << "Multiplication table for 6" << endl;
    int i = 1;
    int result = 0;
    do{
        result = 6 * i;
        cout << "6 * " << i << " = " << result << endl;
        i++;
    }while(i <= 10);

    return 0;
}

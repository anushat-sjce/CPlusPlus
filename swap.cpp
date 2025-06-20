#include <iostream>

using namespace std;

int sum(int a, int b){
    int c = a+ b;
    return c;
}

int swap1(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int swap2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5, b = 10;
    cout << "Enter two numbers: ";
   // cin >> a >> b;
    int result = sum(a, b);
    cout << "The sum is: " << result << endl;

    swap1(a, b);
    cout <<"A: "<< a << "B :" << b << endl;

    swap2(&a, &b);
    cout <<"A: "<< a << "B :" << b << endl;
    return 0;
}

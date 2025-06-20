#include <iostream>

using namespace std;

int factorial(int n){
    if ( n == 1 || n == 0){
        return 1;
    }
    
    if(n > 0){
        return n * factorial(n-1);
    }
}

int main(){
    int n = 10;
    int result = factorial(n);
    cout << "Factorial : " << result << endl;

    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0){
        return 0;
    }
    
    if (n== 1) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}


int main() {
    int n = 3;
    int result = fibonacci(n);
    cout << "Fib number : " << result << endl;
    return 0;
}

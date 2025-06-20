#include <iostream>

using namespace std;

inline int product (int a, int b){
    return a*b;
}

int sum(int a, int b){
    static int k = 0;
    k = k+1;
    int result = a + b + k;
    return result;
}

//Default arg should be at the end of the function.
int multiply(int sum, float interest= 1.04){
    return sum * interest;
}

void strlength(const char *p){
    int len = 0;

    while(*p != '\0'){
        len++;
        p++;
    }
    cout << "Len : " << len << endl;
}

int main(){
    int a = 10, b = 30;
    char *p = NULL;
    
    int result = product(a, b);
    cout << "Inline function, Product : " << result << endl;

    for(int i = 0; i < 3; i++){
        result = sum(a, b);
        cout << "Static variable k, Sum : " << result << endl;
    }

    //default arguments
    result = multiply(100000, 1.06);
    cout << "Passing argument, Result : " << result << endl;
    result = multiply(100000);
    cout << "Default argument , Result : " << result << endl;

    strlength("Wlcome home");
    return 0;
}

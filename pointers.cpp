#include <iostream>

using namespace std;
int main(){
    int a = 10;
    int* ptra;
    int** ptrb;

    ptra = &a;
    ptrb = &ptra;

    cout << "Value of a : " << a<< endl;
    cout << "A value : "<< *ptra << endl;
    cout << "Address of a : "<< &a << endl;
    cout << "Address of a : " << ptra << endl;
    cout << "Address of ptr : " << &ptra << endl;
    cout << "value of ptra : "<< *ptra << endl;

    //pointer to pointer
    cout << "value in **ptrb : "<< **ptrb << endl;
    cout << "Value in *ptrb: " << *ptrb << endl;
    cout << "Value in &ptrb: " << &ptrb << endl;

    return 0;
}

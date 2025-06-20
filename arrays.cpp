#include <iostream>

using namespace std;

int main(){
    int marks[4] = {98, 97, 99, 92};
    int* ptr ;

    ptr = &marks[0];
    for(int i = 0; i < 4; i++){
        cout << *(ptr + i) <<endl;
    }
    //cout << marks[2] << endl;;

    ptr = &marks[0];
    ++ptr;

    cout <<"Value pointed by *ptr: " <<*ptr <<endl;
    return 0;
}

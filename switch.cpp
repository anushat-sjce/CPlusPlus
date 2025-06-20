#include <iostream>

using namespace std;

int main (){
    int a = 0;
    cout << "eneter value for a:"<< endl;
    cin >> a;
    switch(a) {
        case 1:
            cout << "Welcome to program"<< endl;
            break;
        case 2:
            cout <<"doing well" << endl;
            break;
        default:
            cout <<"Invalid case entered" << endl;
            break;
    }
    return 0;
}

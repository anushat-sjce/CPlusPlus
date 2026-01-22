#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main(){
    // a)unique_pointer
    //   usage of move call
    //when we need exactly one object reference.
    auto a1 = std::make_unique<int>(10);
    auto a2 = move(a1);

    cout << *a2 << endl;

    // b)shared_pointer
    // can be shared 
    //when ownership needs to be shared amoung the resources
    auto a3 = make_shared<int>(20);
    auto a4 = a3;

    cout << *a3 << endl;
    cout << *a4 << endl;
    cout << a3.use_count() << endl;

    // c) weak pointer
    //to observe
    //to not let the object die.
    // to verify if the resource exists before using it.
    auto a5 = make_shared<int>(30);
    weak_ptr<int> c = a5;
    cout << a5.use_count() << endl;
    return 0;
}

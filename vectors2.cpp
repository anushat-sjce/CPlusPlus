#include <iostream>
#include <cstring>
#include <string>
#include <vector>

// STL - Standard Template library having generic functions and classes.
// Here we are reusing well tested components
// Time not wasted/ time saved.
// It contains : Containers, Algorithms, and Iterators.


//Containers : has stores data, uses template classes.

// Algorithm : set of procedures: searching, sorting, use template functions.= lIST, DQUEUE, DICTIONARY.DIRECT ACCESS, MAP, MULTIMAP, MULTISET, SET

//Iterators : it is an object and points to an element in a container. = STACL, QUEUES,
// It is handled just like pointers.
// Connects algo with containers.

//Containers - linear fashion.
//associative containers
//derived containers.

//Use STL, do not reinvent the wheel.

using namespace std;
template <class T>
void display(vector<T> &v){
    cout << "Elements are "<< endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}

int main(){
    vector<int> v1;
    vector<char> v2(2);
    vector<char> v3(v2);
    vector<int> v4(4,500);
    
    display(v4);
    cout<<v4.size()<< endl;
    
    v2.push_back('L');
    v2.push_back('K');
    display(v1);
    display(v2);
    display(v3);
    
    return 0;
}

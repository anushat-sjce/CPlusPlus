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

void display(vector<int> &v){
    cout << "Elements are "<< endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}

int main(){
    vector<int> v1;
    int size;
    int element;
    
    cout << "Enter the size" << endl;
    cin >> size;
    
    cout <<"Size is : " << size << endl;
    cout <<"Enter the elements" << endl;
    for(int i = 0; i < size; i++){
        cin >> element;
        v1.push_back(element);
    }
    
    vector<int> :: iterator ite = v1.begin();
    display(v1);
    v1.pop_back();
    v1.insert(ite+1, 5, 200);
    display(v1);
    return 0;
}

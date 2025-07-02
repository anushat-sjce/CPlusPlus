#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <map>

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

//MAPS are for key value pair.
//Map is an associative array

using namespace std;

void display(){

}

int main(){
 map <string, int> marksMap;
 marksMap["Anusha"] = 98;
 marksMap["Jayathirth"] = 98;
 marksMap["Ishaan"] = 99;
 
 map <string, int> :: iterator ite ;
 ite = marksMap.begin();
 marksMap.insert({"Anup", 97});
 for(ite = marksMap.begin(); ite != marksMap.end(); ite++){
     cout<< (*ite).first << ":" << (*ite).second << endl;
 }
 cout << "size is : " << marksMap.size()<< endl;
 //marksMap.insert({"Anup":77});
 
 return 0;
}

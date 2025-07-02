#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <list>

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

void display(list<int> &lst1){
    list <int> :: iterator it;
    for(it = lst1.begin(); it != lst1.end(); it++){
        cout <<*it<< endl;
    }
    
}

int main(){
  list <int> list1; //empty list of size 0;
  list <int> list2(3); // list of size 7 with no elements in it.
  
  list1.push_back(5);
  list1.push_back(60);
  list1.push_back(9);
  list1.push_back(12);
   cout << endl;
  display(list1); cout << endl;
 // list1.pop_back();
 // display(list1);
  cout << endl;
  //list1.pop_front();
 // display(list1);
   cout << endl;
   //list1.remove(9);
   //display(list1);
    cout << endl;
    
    
  //Sorting the list
  list1.sort();
  display(list1);
  cout << endl;
  
  list <int> :: iterator ite ;
  ite = list2.begin();
  *ite = 45;
  ite++;
  
  *ite = 50;
  ite++;
  
  *ite = 55;
  ite++;
  
  display(list2);
  list2.sort();
  //Merging the list
  list1.merge(list2);
  cout << "After merging "<< endl;
  display(list1);
  return 0;
}

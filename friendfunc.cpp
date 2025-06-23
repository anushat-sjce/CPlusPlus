#include <iostream>
#include <string>

using namespace std;

class Employee{
    int id;
    string name;
    
    public: void setId(int i){
        id = i;
        name = "Anusha";
    }
    friend void displayName(Employee e);
};

void displayName(Employee e){
    cout << e.id << endl;
    cout << e.name;
}

int main(){
  Employee e1;
  e1.setId(5);
 displayName(e1);
    return 0;
}

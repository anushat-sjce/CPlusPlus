include <iostream>
#include <string>

using namespace std;

//Base class
class Employee{
    int id;
    float salary;
    
    public :
    Employee(){
        cout << "Default constructor" << endl;
    }

    Employee(int inpId);
    
    void printEmployeeDetails(){
            id  = 1001;
            salary = 190000;
            cout << "Id : " << id << " salary : " << salary << endl;
    }
};

//Derived class
class Manager : public Employee{
    int languageCode = 9;
    public: 
        Manager();
};

Employee :: Employee(int inpId){
        id = inpId;
        salary = 34.0;
    }
    
Manager :: Manager(){
        cout << "Manager constructor invoked " << endl;
    }
    
int main(){
    Employee Anusha(5);
    Manager m1;
    m1.printEmployeeDetails();

    return 0;
}

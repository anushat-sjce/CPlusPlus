// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>

using namespace std;

class Test{
  int data;
  int data2;
  public:
  Test(int a, int b)  {
       data = a;
       data2 = (a + data);
      cout << "Constructor called " << endl;
      cout << "Value of data " << data << endl;
      cout << "Value of data2 " << data2 << endl;
  }
};

int main() {
    Test t1(10,20);

    return 0;
}

#include <iostream>

using namespace std;

class Shop{
    static int counter;
    int data;
    public : void setData();
            void getData();
            static void getCount(void){
                cout << "The value of count is " << counter << endl;
}
};

int Shop :: counter = 0; //default value is 0.

void Shop :: setData() {
    data = 10;
    counter++;
}

void Shop :: getData(void){
    cout << "Data is " << data << endl;
   // cout << "Counter is " << counter << endl;
}


int main(){
    Shop shp1, shp2;
    shp1.setData();
    shp2.setData();
    
   // Shop::getCount();
    shp1.getData();
    shp2.getData();
   
   Shop shp3;
   shp3.setData();
   shp3.getData();
   Shop::getCount();
    
    return 0;
}

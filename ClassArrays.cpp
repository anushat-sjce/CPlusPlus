#include <iostream>

using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public : 
    void initCounter(void) {counter = 0;}
    void displayPrice(void);
    void setPrice(void);
};

void Shop :: setPrice(void) {
    cout << "Enter Id of your item" << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void){
    for(int i = 0; i < counter ; i++){
        cout << "The Price of item with ID " << itemId[i] << " is "<<itemPrice[i];
        cout << endl;
    }
}

int main(){
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    cout << endl;
    dukaan.setPrice();
    cout << endl;
    dukaan.setPrice();
    cout << endl;
    dukaan.displayPrice();
    
    return 0;
}

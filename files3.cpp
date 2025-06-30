#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string s1 = "Hello Anupa hello welcome to this world where every step you take is of competition.no matter how intelligent you are .skill matters.";
    string s3 = "Welcome to world";
    
    ofstream out;
    out.open("Sample.txt");
    out << s1;
    out << endl;
    out << s3;
    out.close();

    ifstream in("Sample.txt");
    string s2;
    while(in.eof() == 0){
        getline(in, s2);
        cout << s2 << endl;
    } 
    in.close();

    return 0;
}

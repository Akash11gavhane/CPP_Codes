/* in c++ manipulators are used in the formatting the output
    the two most commonly used manipulators are the
    "endl"   and    "setw"
    endl = endl is used for line break or next line
    setw = setw is used to specify the width of the output */


#include <iostream>
#include<iomanip> // ***** 
using namespace std;

int main() {

    int a = 7, b=45, c= 1233;

cout<<"the value of a without setw is : "<<a<<endl;
cout<<"the value of b without setw is : "<<b<<endl;
cout<<"the value of c without setw is : "<<c<<endl;

cout<<endl;

cout<<"the value of a with setw is : "<<setw(4)<<a<<endl;     // it showing error here because setw is in #include <iomanip>
cout<<"the value of b with setw is : "<<setw(4)<<b<<endl;
cout<<"the value of c with setw is : "<<setw(4)<<c<<endl;

cout << endl;

cout<<"the value of a with setw is : "<<setw(5)<<a<<endl;     
cout<<"the value of b with setw is : "<<setw(5)<<b<<endl;
cout<<"the value of c with setw is : "<<setw(5)<<c<<endl;

return 0;
}
#include <iostream>
using namespace std;

int main(){
    float x=455;
    float &y=x; 

    int w = x;  

    char p = 'A'; 
    char &r = p;  
    cout<<x<<endl;
    cout<<y<<endl;
    cout << endl;
    cout << w ;
    cout << endl;
    cout<<p<<endl;
    cout<<r<<endl;

    return 0;
}

/*referance variable = means a variable x and we want to give a 2nd name to the 
                       x in that case refrance variable is used.
                       we use this as a  &y=x 
                       the value of x is copied into the y or assign in y 
                       and we have a new name for x is y */
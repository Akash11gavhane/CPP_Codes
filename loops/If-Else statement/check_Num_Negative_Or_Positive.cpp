#include<iostream>
using namespace std ; 

int main(){

    int n ; 
    cout << "enter the value of n : " ; 
    cin >> n ;

    if (n > 0 ){
        cout << n << " is positive."<<endl;
    }

    else if (n < 0)
    {
        cout << n << " is negative." << endl ; 
    }
    
    else
    {
        cout << "number is zero." << endl ; 
    }
    
}
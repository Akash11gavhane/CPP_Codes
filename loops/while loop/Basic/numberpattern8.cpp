/*

A B C
A B C
A B C

*/

#include <iostream>
using namespace std;

int main(){

    int i = 1 ;
    int n ; 
    cin >> n ;

    while (i <= n )
    {
        int j = 1 ;
        char ch = 'A' ;

        while (j <= n )
        {
            cout << ch << " ";
            j = j + 1 ;
            ch = ch + 1 ;

        }
        cout << endl;
        i = i + 1 ;
        

    }
    
}
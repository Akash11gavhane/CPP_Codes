#include <iostream>
using namespace std;

int main(){


    int n ; 
    cout << "enter the value of n : " ; 
    cin >> n ; 

    int i = 1 ; 
    
    while(i <= n){

        int space = n - i ;
        while(space){
            cout << "  " ;
            space = space - 1;
        }
        int j = 1 ;
        while(j <= i){
            cout << "* " ;
            j++ ;
        }
        cout << endl;
        i++ ;
    }
    
    

    return 0;
}


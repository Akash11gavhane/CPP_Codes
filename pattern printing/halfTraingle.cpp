#include <iostream>
using namespace std;

int main(){

    // int row , col ;
    // cout << "enter how many star rows you want to print. " << endl;
    // cin >> row;
    // cout << "enter how many columns you want to print. " << endl;
    // cin >> col;

   int n; 
   cout << endl;
   cin >> n;

   for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= i ; j++){

        cout << "* " ;
        

    }
    cout << endl;
   }




    return 0;
}
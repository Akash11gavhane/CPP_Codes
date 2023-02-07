#include <iostream>
using namespace std;

int main(){

    // int row , col ;
    // cout << "enter how many star rows you want to print. " << endl;
    // cin >> row;
    // cout << "enter how many columns you want to print. " << endl;
    // cin >> col;

   int a = 1 ;
   int b = 2 ;

   if (a-- > 0 && ++b > 2)
   {
    cout << "stage1 - inside if ";
   }
   else{
    cout << "Stage 2 - Inside else ";
   }

   cout << a << " " << b << endl;
   




    return 0;
}
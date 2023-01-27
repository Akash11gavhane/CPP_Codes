/*

1 1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 
4 4 4 
5 5 
6 
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n"<<endl;
    cin >> n;

   for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++){
           cout<<j<<" ";
       }
       cout<<endl;
   }

    return 0;
}
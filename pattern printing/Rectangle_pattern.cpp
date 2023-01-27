/* 
   * * * * * 
   * * * * *
   * * * * * 
   * * * * * 
*/


#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"enter row how much you want to print"<<endl;
    cin>>row;
    int col;
    cout<<"enter col how much you want to print"<<endl;
    cin>>col;

    for(int i = 1; i<=row; i++){
        for(int j = 1; j<=col; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
/*
  * * * * *
  *       * 
  *       *
  *       *
  * * * * *
*/

#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"enter row how much you want to print"<<endl;
    cin>>row;
    int col;
    cout<<"enter column how much you want to print"<<endl;
    cin>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row){
                cout<<"* ";
            }
            else if(j==1 || j==col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }  
        cout<<endl;
    }

    return 0;
}
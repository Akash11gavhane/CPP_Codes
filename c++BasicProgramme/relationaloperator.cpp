#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int m;
    cout<<"enter the value of  m"<<endl;
    cin>>m;

    if (n==m){
        cout<<"n is equal to m"<<endl;
    }
    else{
        cout<<"n is not equal to m"<<endl;
    }

    if (n!=m){
        cout<<"n is not equal to m"<<endl;
    }
    else{
        cout<<"n is equal to m"<<endl;
    }

    if (n>m){
        cout<<"n is greater than m"<<endl;
    }
    else{
        cout<<"n is less than m"<<endl;
    }

    if (n<m){
        cout<<"n is less than m"<<endl;
    }
    else{
        cout<<"n is greater than m"<<endl;
    }  

    if (n>=m){
        cout<<"n is greater than or equal to m"<<endl;
    }
    else{
        cout<<"n is not greater than or equal to m"<<endl;
    }

    if (n<=m){
        cout<<"n is less than or equal to m"<<endl;
    }
    else{
        cout<<"n is not less than or equal to m"<<endl;
    }



    

    return 0;
}

// find the maximum of three numbers

#include<iostream>
using namespace std;

int main() {

    int a, b, c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Enter the value of c"<<endl;
    cin>>c;

    if (a > b){
        if (a > c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }

    else {
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }

    return 0;
}

// Take number from user until it gives any negative number

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter any number"<<endl;
    cin>>n;

    do{
        cout<<n<<endl;
        cin>>n;
    }

    while(n>0);
    

    return 0;
}


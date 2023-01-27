/* Take Number from user until the user gets positive number if user gives negative number then
     (the loop is terminated) exit from loop */

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }

    return 0;
}

/* for loop is terminated when the given condition is met */
// print sum of n numbers

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number till you want to print sum : "<<endl;
    cin>>n;

    int sum = 0;

    for(int i=1; i<=n;i++){
        sum = sum + i;

    }
  cout<<"the sum of all n numbers is : "<<sum<<endl;
            
    return 0;
}
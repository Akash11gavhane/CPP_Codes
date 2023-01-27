#include <iostream>
using namespace std;

int main(){

    int i;
    cout<<"enter the number you want table"<<endl;
    cin>>i;
    cout<<"the table of "<<i<<" is "<< endl;

    int n=1;
    do{
        
        cout<<i*n<<endl;
        n++;
    }
    while(n<=10);

    return 0;
}
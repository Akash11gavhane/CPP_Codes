#include<iostream>
using namespace std;

int main() {

    int a;
    cout<<"enter a"<<endl;
    cin>>a;
    int b;
    cout<<"enter b"<<endl;
    cin>>b;

    for (int n=a; n<=b; n++) {
        int i;
        for(i=2;i<n;i++){
            if(n%i==0){
                break;
            }
        }
        cout<<n<<endl;
    }

    return 0;
}
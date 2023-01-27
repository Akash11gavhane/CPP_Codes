#include <iostream>
using namespace std;

int main() {
    int savings;
    cout<<"enter your savings"<<endl;
    cin>>savings;

    if (savings>=5000){
        if(savings>=10000){
            cout<<"you can go for trip with neha"<<endl;
        }
        else{
            cout<<"you can go for shopping"<<endl;
        }

             
    }
    else if (savings>=2000){
        cout<<"go with rashmi"<<endl;
        }

    else{
        cout<<"stay with friends"<<endl;
    }

    

    return 0; 

}
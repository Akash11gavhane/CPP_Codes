// implement a simple calculator by using switch case statement

#include <iostream>
using namespace std;

int main(){

    float n1;
    cout<<"enter the value of n1"<<endl;
    cin>>n1;
    float n2;
    cout<<"enter the value of n2"<<endl;
    cin>>n2;

    char op;
    cout<<"enter the action you want to perform an operators "<<endl;
    cin>>op;

    switch(op){

        case '+':
        cout<<"the addition of n1 and n2 is "<<n1+n2<<endl;
        break;

        case '-':
        cout<<"the substraction of n1 and n2 is "<<n1-n2<<endl;
        break;

        case '*':
        cout<<"the multiplication of n1 and n2 is "<<n1*n2<<endl;
        break;

        case '/':
        cout<<"the dividation of n1 and n2 is "<<n1/n2<<endl;
        break;

        default:
        cout<<"try diffrent operator"<<endl;
        cout<<"Eg : + , - , * , / ."<<endl;

    }

    return 0;

}

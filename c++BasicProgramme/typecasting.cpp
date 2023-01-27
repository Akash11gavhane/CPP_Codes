#include <iostream>
using namespace std;

int main(){

    int a=45;
    float b=45.46;

    cout<<"the value of float a is "<<(float)a<<endl;
    cout<<"the value of float a is "<<float(a)<<endl;

    cout<<"the value of float b is "<<(int)b<<endl;
    cout<<"the value of float b is "<<int(b)<<endl;

    int c=int(b);

    cout<<"The Expression is "<<a+b<<endl;
    cout<<"The Expression is "<<a+int(b)<<endl;
    cout<<"The Expression is "<<a+(int)b<<endl;


    return 0;
}

/* Typecasting can be defined as converting one datatype into another data type */
#include<iostream>
using namespace std;

int main(){

    int a;
    a=12;
    cout<<"size of int is = "<<sizeof(a)<<endl;

    float b = 3.1462;
    cout<<"size of float is ="<<sizeof(b)<<endl;

    char c = 'q';
    cout<<"size of char is = "<<sizeof(c)<<endl;

    bool d= false;
    bool e= true;
    cout<<"size of bool is = "<<sizeof(d)<<endl;
    cout<<"size of bool is = "<<sizeof(e)<<endl;

    double f = 1.354844548484496;
    cout<<"size of double is = "<<sizeof(f)<<endl;
    cout<<"size of double is = "<<sizeof(1.35)<<endl;



    return 0;
}
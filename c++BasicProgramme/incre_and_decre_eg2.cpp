#include <iostream>
using namespace std;

int main(){

    int i =10 , j = 20;
    int k;

    k = i-- - i++ + --j - ++j +  --i + j-- + ++i - j++;

    cout<<"k = "<<k<<endl;

    return 0;
}
// print the numbers 1 to 100 but the numbers divisible by 3 are not to print in output format

#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i < 100; i++){
        if(i%3==0){
            continue;
        }

        cout<<i<<endl;
    }

    return 0;
}
/* Do while loop print 1st time without checking the condition */

// print no from 1 to 40 using do-while loop

#include <iostream>
using namespace std;

int main(){

    int i=1;

    do{
        cout<<i<<endl;
        i++;
    }
    while(i<=40);

    return 0;
}
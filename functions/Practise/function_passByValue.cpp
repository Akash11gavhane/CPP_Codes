# include<bits/stdc++.h>
using namespace std;

// pass by refrence

void doSomething( int num){

    cout << num << endl;
    num += 5 ;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main(){
    int i = 10;

    

    doSomething(i);

    cout << i << endl;

    return 0 ;

}


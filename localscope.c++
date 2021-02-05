#include <iostream>
using namespace std;
int k;

void data(){
    int c =6 ;
    cout<<"the value of before k in data function \n"<<k<<"\n";
    int k;

    cout<<"the value of c in data function \n"<<c<<"\n";
    cout<<"the value of k in data function \n"<<k<<"\n";
    k = 10;
    cout<<"the value of k in data function \n"<<k<<"\n";
}

int main(){
    int c = 5;
    cout<<"the value of c in main \n "<<c<<"\n";
    data();
}
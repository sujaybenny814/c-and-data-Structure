#include<iostream>
using namespace std;

void calculation(int n){
  if(n>0){
    cout<<n;
    cout << "\n";
    calculation(n-1);
  }
}
int main(){
     calculation(5);
}
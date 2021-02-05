#include<iostream>
using namespace std;

int calculation(int n){
    static int x;
    if(n>0){
        x++;
        cout<<x<<" = value of x ";
       return calculation(n-1) + x ;
    }
    else
    {
        return 0;
    }
    

}

int main(){
   std::cout<<calculation(5)<<"\n";
   std::cout << calculation(10 ) << "\n";
}
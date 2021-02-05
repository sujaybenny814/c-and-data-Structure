#include<iostream>
#include<stdlib.h>
// using namespace std;
int main(){
    int *p,*q;
    // p=(int *)malloc(2*sizeof(int));
    p = new int;
    p[0]=5;
    p[1] = 5;
    p[2] = 5;
    p[3] = 5;
    p[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        std::cout<<i<<"\n";
    }
    
    return 0;
}
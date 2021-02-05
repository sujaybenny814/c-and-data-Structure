#include<iostream>
using namespace std;

void Tree(int n){
    if(n>0){
        cout<<"N value first :"<<n<<"\n";
        Tree(n-1);
        cout << "N value second :" << n << "\n";
        Tree(n-1);
        cout << "N value last :" << n << "\n";
    }


} 

int main(){
    Tree(5);
}
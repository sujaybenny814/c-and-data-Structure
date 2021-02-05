#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node * next;
} *first=NULL;


void createLinkList(int a[],int n){

    int i;
    struct Node *t,*last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data =a[0];
    first->next = NULL;
    last = first;
    for(i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next = NULL;
        last->next = t;
        last =t;
    }

}

void displayLinkList(struct Node *p){
    while (p!=NULL)
    {
        std::cout<<p->data<<"\n";
        p=p->next;
    }
    

}

int main(){

int A[]={3,5,7,9,11,13};

createLinkList(A, 6);

displayLinkList(first);

    return 0;
}


// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node *next;
// } *head =NULL;


// void createLinkList(int a[],int length){
//     int i;
//     struct Node *temp, *last;
//     temp = new Node;
//     temp->data=a[0];
//     temp->next = NULL;
//     for (i = 1; i < length; i++)
//     {
//         temp = new Node;
//         temp->data= a[i];
//         temp->next = NULL;
//         cout<<temp<<"\n";
//         last->next = temp;
//         last = temp;
//     }
// }

// int main(){

// int A[]={4,5,6,7,8,9,10,11,12};

// cout<<"size of Array A \n"<<sizeof(A[0])<<"\n";
// createLinkList(A,9);
// return 0;
// }

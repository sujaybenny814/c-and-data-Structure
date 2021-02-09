#include<istream>

struct Node{
    int data;
    Node * next;
}* head=NULL;



void createLinkList(int A[],int n){
    int i;
    Node *temp,*last;
    head = new Node;
    head->data = A[0];
    head->next =NULL;
    last =head;

    for(i=1;i<n;i++){
        temp = new Node;
        temp->data=A[i];
        temp->next = NULL;
        last->next =temp;
        last =temp;
    }

}


int main(){


    return 0;
}
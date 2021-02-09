#include<iostream>


struct Node{
    int data;
    Node * next;
};

Node * insertBeginning(Node *head,int Array[], int length)
{
    Node  *temp;
    for(int i=0;i<length;i++){
        temp =new Node;
        temp->data= Array[i];
        temp->next = head;
        // if(head!=NULL) temp->next=head;
        head = temp;
    }  
        return head;
    
}


void displayLinkList( Node *head){

    
    while (head!=NULL)
    {
        std::cout<<head->data<<"\n";
        head =head->next;
    }
    

}

int main(){

    Node *head = NULL;
    std::cout<<head<<"\n";
    std::cout<<&head;

    int Array[]={1,2,3,4,5,6,7,8,9,10};
    head = insertBeginning(head, Array, 10);
    // std::cout<<head;
    displayLinkList(head);
    return 0;

}
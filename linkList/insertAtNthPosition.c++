#include<iostream>

struct Node{
    int data;
    Node * next;
};


void insertAtThebeginning(Node **Head,int Array[]){
    Node * temp;
    for (int i = 0; i < 10; i++)
    {
        temp = new Node;
        temp->data = Array[i];
        temp->next = *Head;
        *Head = temp;   
    }
    
}

 void insertAtNthPosition(Node **Head,int position,int number){
    int count =0;
    std::cout<<*Head<<"data"<<"\n";
    Node * temp,*first=*Head;
    std::cout << first->data << "\n";
    while (first != NULL)
    {
        if(count==position){
            temp = new Node;
            temp->data = number;
            temp->next = first;
            first = temp;
        }
        // std::cout << first->data << "\n";
        count++;
        first = first->next;  
    }
}

void insertAtEnd(Node **Head,int Array[]){
    Node *temp,*first;
    for (int i = 0; i < 10; i++)
    {   
    temp = new Node;
    temp->data = Array[i];
    temp->next =NULL;
    if(*Head==NULL){ 
        *Head = temp;
        first =*Head;
     }
    if (*Head != NULL){
        first->next = temp;
        first =temp;
        }
    }
}

void displayLinkList(Node *head)
{
    while (head != NULL)
    {
        std::cout << head->data << "\n";
        head = head->next;
    }
}

int main(){
    Node * Head = NULL;
    int Array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // insertAtThebeginning(&Head,Array);
    insertAtEnd(&Head, Array);
    // insertAtNthPosition(&Head,4,5);
    insertAtNthPosition(&Head, 4, 500);
    displayLinkList(Head);

    return 0;
}



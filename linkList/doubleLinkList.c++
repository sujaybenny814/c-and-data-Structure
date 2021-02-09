#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
} *head = NULL;

void createDoubleLinkList(int A[],int length){
    Node *first=NULL,*temp;
    for (int i = 0; i < length; i++)
    {
        temp = new Node;
        temp->data =A[i];
        if(first==NULL){
            temp->prev =temp->next =NULL;
            first =temp;
        }
            else
            {
                
            }
            
    }
    

}

void displayLinkList(struct Node *p)
{
    // cout<<"p value \n"<<p;
    while (p != NULL)
    {

     std::cout<< p->data << "\n";
        p = p->prev;
    }
}

int main()
{
    int A[] = {4, 5, 6, 7, 8, 9, 10, 11, 12};

    createDoubleLinkList(A, 9);
    displayLinkList(head);
    return 0;
}
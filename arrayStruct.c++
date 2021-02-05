#include<iostream>
using namespace std;

struct Array
{
    int a[20];
    int size;
    int length;
};

void DisplayArray(struct Array arr){
    for (int i = 0; i < arr.length; i++)
    {
        
        cout<<arr.a[i]<<"\n";
        /* code */
    }
    
}
void AppendAtEnd(struct Array *arr,int insertNumber){
    if(arr->length<arr->size)
        arr->a[arr->length++] = insertNumber;
    else
        cout<<"array is full";
}
void insertAtAnyPostion(struct Array *arr, int insertNumber,int insertPostion)
{
    if (arr->length < arr->size){
        for (int i = arr->length++; i > insertPostion-1; i--)
        
                arr->a[i]=arr->a[i-1];
        
            arr->a[insertPostion] = insertNumber;
    }
    else
        cout << "array is full";
}

int main(){
    struct Array arr ={{2,5,69,7,99},20,5};
    // AppendAtEnd(&arr, 115);
    insertAtAnyPostion(&arr, 115, 1);
    DisplayArray(arr);
    return 0;
}

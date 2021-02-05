#include <iostream>

struct Array
{
    int a[20];
    int size;
    int length;
};

void display(struct Array *arr){
    std::cout<<"reverse array";
    for (int i = 0; i < arr->length; i++)
    {
        std::cout<<arr->a[i]<<"\n";
    }
    

}

void ReverseArray(struct Array *arr, int searchElement)
{
    struct Array reverseArray={{},20,arr->length};
   for(int j=arr->length-1;j>=0;j--){
       int count =0;
       reverseArray.a[count] =arr->a[j];
       std::cout<<reverseArray.a[count]<<"\n";
        count++;
   }
   display(&reverseArray);
}

int main()
{
    struct Array arr = {{2, 4, 6, 8, 10, 11, 23, 45, 46, 56}, 20, 10};
    ReverseArray(&arr, 8);
    return 0;
}
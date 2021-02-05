#include<iostream>

struct Array
{
   int a[20];
   int size;
   int length;
};



int binarySort(struct Array *arr,int searchElement){
    int low = 0 ;
    int height = arr->length - 1;
    int mid;
    while(low<=height)
    {
        mid = (low + height) / 2;
        if (arr->a[mid] > searchElement)
            height =mid-1;
        else if (arr->a[mid] < searchElement)
            low = mid + 1;
        else if (arr->a[mid] = searchElement)
            return mid;
    }
    return -1;
        
}


int main(){
    struct Array arr ={{2,4,6,8,10,11,23,45,46,56},20,10};
    std::cout<<binarySort(&arr,8)<<"\n";
    return 0;
}
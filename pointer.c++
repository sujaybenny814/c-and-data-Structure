#include <iostream>
#include <stdlib.h>
// int main()
// {
//     int number =10;
//     int newNumber =number;
//     // std::cout<<number<<"\n";
//     // std::cout << &newNumber << "\n";
    
// }

int main()
{
    int number = 10;
    int *newNumber = &number;
    std::cout << "new Number :"<<*newNumber << "\n";

    int *newNumber2 =&number;
    std::cout << "new Number 2 :" << *newNumber2 << "\n";

    *newNumber =7;
    std::cout << "new Number :" << *newNumber << "\n";

    std::cout << "new Number 2 :" << *newNumber2 << "\n";

    // std::cout<<number<<"\n";
}
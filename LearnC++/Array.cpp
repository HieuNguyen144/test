#include <iostream>

template <size_t n>
void findsize(int (&arr)[n])
{
    std::cout << "size of array: " << sizeof(int) * n;
}
int main()
{
    int a[30];
    std::cout << sizeof(a) << std::endl;
    findsize(a);

    return 0;
} 


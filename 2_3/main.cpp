#include <iostream>

template <typename T>
void print(T const i)
{
    std::cout << "Integer!\n";
}
void print(float const i)
{
    std::cout << "Floating point!\n";
}
int main()
{
    print(3.3);
}
#include <iostream>
#include <algorithm>

#define RandomAccessIterator typename
#define Integer typename
//#define simply changes the variable to what its being defined as
//for example, changing the arguments below from "RandomAcessIterator" and "Integer" to "typename" has the same effect as
//defining them as above. 

template <RandomAccessIterator I, Integer N>
void mark_sieve(I first, I last, N factor)
{
    //assert(first != last)
    *first = false;
    while (last - first > factor)
    {
        first = first + factor;
        *first = false;
    }
}

int main()
{
    std::cout << "Hello World!\n";
}

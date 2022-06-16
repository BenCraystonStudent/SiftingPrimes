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

template <RandomAccessIterator I, Integer N>
void sift0(I first, N n)
{
    std::fill(first, first + n, true);
    N i(0);
    N index_square(3);
    // invariant: index_square = 2i^2 + 6i + 3
    if (first[i]) //if candidate is prime
    {
        mark_sieve(first + index_square, first + n, i + i + 3);
    }
    ++i;
    index_square = 2 * i * (i + 3) + 3;
}

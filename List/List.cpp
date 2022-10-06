#include <iostream>
#include <list>
#include <random>
using namespace std;
template<class I>
void print(const I& start, const I& end)
{
    I it;
    for (it = start; it != end; ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}


int main()
{
    list <int> l1, l2;
    random_device random;
    mt19937 generator(random());
    uniform_int_distribution<> size(1, 10);
    uniform_int_distribution<> num(1, 100);
    int size1 = size(generator), size2 = size(generator);
    for (size_t i = 0; i < size1; i++)
    {
        l1.push_back(num(generator));
    }
    print(l1.begin(), l1.end());

    for (size_t i = 0; i < size2; i++)
    {
        l2.push_back(num(generator));
    }
    print(l2.begin(), l2.end());

    if (size1 % 2 == 0 && size2 % 2 == 0)
    {
        l1.swap(l2);
        print(l1.begin(), l1.end());
        print(l2.begin(), l2.end());
    }
    else cout << "Lists didn`t swap";
}
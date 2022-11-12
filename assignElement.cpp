// Assign the elements to the list (different methods)
// STL

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.assign({12, 33, 44, 55, 66, 77});
    list<int>::iterator it = l.begin();
    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}

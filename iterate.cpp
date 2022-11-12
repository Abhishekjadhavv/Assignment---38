// Iterate a list C++ STL


#include <iostream>
#include <list>
#include<iterator>
using namespace std;

int main()
{
    list<int> l{12,3,4,56,78,99};
    list<int>::iterator it = l.begin();
    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}
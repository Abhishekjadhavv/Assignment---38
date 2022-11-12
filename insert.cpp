// Insert the element at beginning and end of the list | C++ STL

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
    cout<<endl;
    
    l.push_front(100);
    l.push_back(200);

    it = l.begin();
    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}
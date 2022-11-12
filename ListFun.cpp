// List functions in C++ STL (Standard Template Library)
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l{12, 33, 44, 55, 66, 77, 88};
    list<int>l1{87,64,283,54};

    list<int>::iterator it = l.begin();
    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // cout << l.front() << endl;
    // cout << l.back() << endl;
    // l.push_back(90);
    // l.push_front(85);
    // l.pop_front();
    // l.pop_back();
    // l.assign({1,2,3,4});
    // l.remove(12);
    // l.sort();
    // l.reverse();
    // l.clear();
    // l.insert(l.begin(),23);
    // l.merge(l1);

    it = l.begin();
    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    return 0;
}
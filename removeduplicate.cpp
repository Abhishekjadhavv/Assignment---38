// Remove all consecutive duplicate elements from the list | C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main(){
    list<int>l{1,1,2,2,3,3,4,4,2};

    l.unique();

    list<int>::iterator it = l.begin();
    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}
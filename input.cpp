// Input and add elements to a list C++ STL
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    int element;

    cout << "Enter 5 elements" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cin >> element;
        l.push_back(element);
    }

    list<int>::iterator it = l.begin();

    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }

    return 0;
}
// 10. Merge two lists C++ STL
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l1{22,33,44,55};
    list<int>l2{55,66,77,88};
    
    list<int>::iterator it = l1.begin();
    while (it != l1.end())
    {
        cout << *it << " ";
        it++;
    }
    cout<<endl;

    l1.merge(l2);


    it = l1.begin();
    while (it != l1.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}
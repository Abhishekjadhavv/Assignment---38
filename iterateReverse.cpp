// Iterate a list in reverse order C++ STL

#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main(){
    list<int>l{23,45,66,77,88,99};
    
    for(auto it = l.rbegin();it!=l.rend();it++){
      cout<<*it<<" ";
    }

    return 0;
}
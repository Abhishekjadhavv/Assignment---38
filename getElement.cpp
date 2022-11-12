// Get the first and last element of the list C++ STL
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l{23,45,67,89};
    cout<<"First element is "<<l.front()<<endl;
    cout<<"Last element is "<<l.back()<<endl;
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"Capacity"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity"<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Capacity"<<v.capacity()<<endl;
    cout<<"Size->"<<v.size()<<endl;
    cout<<"Elements at 2nd Index is:"<<v.at(2)<<endl;
    cout<<"Front"<<v.front()<<endl;
cout<<"Back"<<v.back()<<endl;
}
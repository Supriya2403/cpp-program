#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main()
{
    int a;
    cout<<"Enter a:";
    cin>>a;
    int b;
    cout<<"Enter b:";
    cin>>b;
    cout<<sum(a,b);
}
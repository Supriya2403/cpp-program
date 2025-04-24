#include<iostream>
using namespace std;
int swap(int &a,int &b){
a=a+b;
b=a-b;
a=a-b;

    }
int main()
{
    int a;
    cout<<"Enter a "<<endl;
    cin>>a;
    int b;
    cout<<"Enter b"<<endl;
    cin>>b;
    swap(a,b);

cout<<"After swapping:"<<a<<endl;
cout<<"After swapping:"<<b<<endl;

    }


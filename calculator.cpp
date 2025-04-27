
#include<iostream>
using namespace std;
int main()
{
int a;
cout<<" Enter a :"<<endl;
cin>>a ;
int b;
cout<<" Enter b:"<<endl;
cin>>b;
int op;
cout<<"Enter the operation:"<<endl;
cin>>op;
switch(op){
    case '+':
    cout<<a+b<<endl;
    break;
    case '-':
    cout<<a-b<<endl;
    break;
case '*':
    cout<<a*b<<endl;
    break;
    case '/':
    cout<<a/b<<endl;
    break;
    case '%': cout<<a%b<<endl;
    break;

    default:cout<<"Invalid user choice:";
}
cout<<end;
}
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter user choice:"<<endl;
cin>>n;
switch(n){
case 1:cout<<" Hurray! You win"<<endl;
              break;
    case 2:cout<<"Give your best"<<endl;
break;
       case 3:cout<<"Sorry! Try again"<<endl;
break;
         default:cout<<"Invalid user choice"<<endl;

}
}
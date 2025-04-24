#include<iostream>
using namespace std;
int armstrong(int n){
int arm=0,r,c=n;
while(n>0)
{
 r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
}
    return arm;
}
int main(){
int  n,arm=0,r,c;
cout<<"Enter the number:";
cin>>n;

if(c==arm){
cout<<"The number is Armstrong"<<endl;
}
else{
cout<<"The number is not Armstrong"<<endl;
}
}




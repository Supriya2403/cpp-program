#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
     int product=0;

    while(n!=0){
    int ld=0;
     n=n%10;
     n=n/10;
     product*=ld;

}
cout<<product; 
}
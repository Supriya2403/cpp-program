#include<iostream>
using namespace std;
int evenodd(int n){
if(n%2==0)
    {
        cout<<"even number:";
    }
    else{
   
   
    cout<<"odd number";
    }
    return n;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    
    cout<<evenodd(n);
    
    }


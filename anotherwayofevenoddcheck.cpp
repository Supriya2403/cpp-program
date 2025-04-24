#include<iostream>
using namespace std;
bool evenorodd(int a)
{
    if( a & 1){
        return 0;
    }
    else{
        return 1;

    }
}
    int main()
    {
        int n;
        
        cin>>n;
        if(evenorodd( n)){
        cout<<"The number is even"<<endl;
    }
    else{
    cout<<"The number is odd"<<endl;
    }
}

#include<iostream>
#include<cmath>
using namespace std;
int pow(int a,int b)
{
    int res=1;
    for(int i=1;i<=b;i++)
    {
res=res*a;
    }
    return res;

}
int main()
{
    int a,b;
    cin>>a>>b;
     cout<<pow(a,b)<<endl;
}





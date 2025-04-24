#include<iostream>
using namespace std;
bool binarysearch(int arr[],int size,int elements)
{
for(int i=0;i<size;i++)
{
    if(arr[i]==elements){
        return 1;
    }
}
return 0;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
cout<<"Enter the elements:"<<endl;
int elements;
 cin>>elements;
bool found = binarysearch(arr,7,elements);
if(found)
{
    cout<<"The number is present in array"<<endl;
}
else{
    cout<<"The number is not present in array"<<endl;
}
}




















int main()
{











}
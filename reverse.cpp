#include<iostream>
using namespace std;
int reverse(int arr[],int n){
int start=0;
int end=n-1;
while(start<=end){

    swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
cout<<endl;
}
int main()
{
int arr[7]={1,2,3,4,5,6,7};
int brr[7]={2,4,6,8,0,12,14};
reverse(arr,7);
reverse(brr,7);
printArray(arr,7);
printArray(brr,7);
    }





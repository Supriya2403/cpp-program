#include<iostream>
using namespace std;
bool prime(int n){
for(int i=2;i<=n-1;i++){
    if(n%i==0){
        return 0;
    }
    return 1;
}
}



int main(){
int n;
    
    cin>>n;
    if(prime(n)){
        cout<<"The number is prime";
    }
    else{
    cout<<"The number is not prime";
}
}
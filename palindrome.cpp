#include<iostream>
using namespace std;
bool checkPalindrome(int n){
    int reverse = 0;
  int temp = n;
    while (temp != 0) {
        reverse = (reverse * 10)+(temp % 10);
        temp = temp / 10;
    }
   return (reverse == n);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if (checkPalindrome(n) == 1){
        cout <<"true"<<endl;
    }
    else {
        cout <<"false"<<endl;
    }
    return 0;
}

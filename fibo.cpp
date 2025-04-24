#include<iostream>
using namespace std;
int fibo(int n) {
    int a = 0, b = 1, c;
    if (n >= 1) cout << a << " "; 
    if (n >= 2) cout << b << " ";  
    for (int i = 3; i <= n; i++) {
        c = a + b;    
        cout << c << " ";  
        a = b;          
        b = c;          
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci : ";
    cin >> n;

    fibo(n);  
    return 0;
}

#include <iostream>
using namespace std;

int recSum(int n) {
    if (n == 1 || n == 0 )
    {
        return 1;
    }   
    else
    {
        return n + recSum(n - 1);
    }
}

int main() {
    //getting input
    int n;
    cin >> n;
    
    cout << recSum(n) << endl;    
    
    return 0;
}
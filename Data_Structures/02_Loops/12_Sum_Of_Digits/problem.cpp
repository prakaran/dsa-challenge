#include<iostream>
using namespace std;

int main(){
    long long n; 
    cin >> n;
    int len = to_string(n).length();
    int sum = 0;
    for(int i = 0; i<len; i++){
        sum += n%10;
        n /= 10;
    }
    cout << sum << endl;
}
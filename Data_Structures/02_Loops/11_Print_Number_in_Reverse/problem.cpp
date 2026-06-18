#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int len = to_string(n).length();
    string revNum = "";
    for(int i = 0; i<len; i++){
        revNum += to_string(n%10);
        n = n/10;
    }
    cout << revNum << endl;
    return 0;
}
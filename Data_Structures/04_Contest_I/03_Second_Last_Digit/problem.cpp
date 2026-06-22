#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int lastDigit;
    for(int i = 1; i<=2; i++){
        lastDigit = n % 10;
        n = n/10;
    }
    cout << lastDigit << endl;
    return 0;
}

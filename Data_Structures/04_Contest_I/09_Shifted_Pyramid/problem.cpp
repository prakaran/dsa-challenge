#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cout << setw(i);
        
        for(int j = 1; j<=i; j++){
            cout << "x";
        }
        cout << "\n";
    }
    return 0;
}

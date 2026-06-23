#include <iostream>
using namespace std;
void printFactors(int n){
    for(int i =1; i<=n; i++){
        if(n%i == 0){
            cout << i;
            if(i != n){
                cout << " ";
            }
        }
    }
    cout << "\n";
}
int main() {
    int n;
    cin >> n;
    printFactors(n);
    return 0;
}

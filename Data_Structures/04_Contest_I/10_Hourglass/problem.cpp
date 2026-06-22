#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = n; i>=1; i--){
        for(int k = 0; k<n-i; k++){
            cout << " ";
        }
        for(int j = i; j>=1; j--){
            if(i !=j){
                cout << " ";
            }
            cout << ".";
        }
        cout << endl;
    }
    for(int i = 2; i<=n; i++){
        for(int k = 1; k<=n-i; k++){
            cout << " ";
        }
        for(int j = 1; j<=i; j++){
            cout << ".";
            if(i != j){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

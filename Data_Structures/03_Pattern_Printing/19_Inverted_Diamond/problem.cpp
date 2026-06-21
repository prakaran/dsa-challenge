#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int space = 7;
    for(int i = 1; i<=n; i++){
        for(int j = n; j>=i; j--){
            cout << "*";
        }
        for(int k = 1; k <= i; k++){
            cout << " ";
            if(k!=i){
                cout << " ";
            }
        }
        for(int l = n; l>=i; l--){
            cout << "*";
        }
        cout << endl;
    }
    int temp = 2;
    for(int i = n-1; i>=1; i--){
        for(int j = 1; j<=temp; j++ ){
            cout << "*";
        }
        for(int k = i; k>=1; k-- ){
            if(i != k){
                cout << " ";
            }
            cout << " ";
        }
        for(int l = 1; l<=temp; l++ ){
            cout << "*";
        }
        temp++;
        cout << endl;
    }
    
    return 0;
}

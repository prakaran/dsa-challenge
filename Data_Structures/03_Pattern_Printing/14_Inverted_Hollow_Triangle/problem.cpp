#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = n; i>=1; i--){
        for(int k = n-i; k>=0; k--){
            cout << " ";
        }
        for(int j = i; j>=1; j--){

            if( i != j){
                cout << " ";
            }
            if(i == j || j == 1 || i == n ){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int l, b;
    cin >> l >> b;
    for(int i = 1; i<=l; i++){
        for(int j = 1; j<=b; j++){
            if(j == 1 || j == b || i == 1 || i == l){
                cout << "^" ;
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

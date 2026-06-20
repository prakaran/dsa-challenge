#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i =1; i<=n; i++){
        for(int k = n-i; k>=1; k-- ){
            cout << " ";
        }
        for(int j = 1; j<=i; j++){

            cout << "*";
            if(i != j){
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i = n-1; i>=1; i--){
        for(int k = 1; k<=n-i; k++){
            cout << " ";
        }
        for(int j = i; j>=1; j--){
            if(i != j){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
 
// int main() {
//     int n;
//     cin >> n;
 
//     for(int i = 1; i <= 2*n - 1; i++) {
//         int stars = (i <= n) ? i : 2*n - i;
//         int spaces = n - stars;
 
//         for(int s = 1; s <= spaces; s++)
//             cout << " ";
 
//         for(int k = 1; k <= stars; k++) {
//             cout << "*";
//             if(k < stars) cout << " ";
//         }
 
//         cout << endl;
//     }
 
//     return 0;
// }
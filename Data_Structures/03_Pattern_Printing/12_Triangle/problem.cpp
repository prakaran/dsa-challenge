// #include <iostream>
// #include<iomanip>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             if(j == 1){
//                 for(int k = n-i; k > 0; k-- ){
//                     cout << " ";
//                 }
//             }
//             cout << "*";
//             if( i != j){
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             if(j==1){
//                 cout << setw(n-i+1) << "*";
//             }else{
//                 cout << "*";
//             }
//             if(i != j){
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k<=n-i; k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
             cout << "*";
            if(i != j){
                cout << " ";
            }
        }
        cout << endl;
    }
}
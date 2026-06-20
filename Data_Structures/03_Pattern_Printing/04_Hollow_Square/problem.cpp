#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;


    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j <= n; j++){
    //         if(i == 1 || i == n){
    //             cout << "*";
    //         }else{
    //             if( j == 1 || j == n){
    //                 cout << "*";
    //             }else{
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }


    for(int i=0; i<n; i++){

        for(int j=0; j<n;j++){
            if(i == 0 || i == n-1 || j == 0 ){
                cout << "*";
            }else if(j == n-1){
                cout << setw(n-1) << "*"; 
            }
            
        }
        cout << endl;
    }
    return 0;
}

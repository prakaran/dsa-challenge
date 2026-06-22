#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int count = 0;
    int len = to_string(n).length();
    for(int i = 1; i<=len; i++){
        int lastDigit = n%10;
        if (lastDigit == 0){
            count++;
        }
        n = n/10;
    }
    cout << count << "\n";
    return 0;
}

//uisng while loop
// #include<iostream>
// using namespace std;
 
// int main(){
//     long long n;
//     cin >> n;
//     int numberOfZeros = 0;
//     if(n == 0){
//         numberOfZeros++;
//     }
//     while(n > 0){
//         int last = n%10;
//         if(last == 0) numberOfZeros++;
//         n = n/10;
//     }
//     cout << numberOfZeros << endl;
//     return 0;
// }
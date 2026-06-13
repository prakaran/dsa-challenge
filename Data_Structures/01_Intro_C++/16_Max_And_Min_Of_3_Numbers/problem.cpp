#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b && a > c && b > c){
        cout << "Min = " << c << endl;
        cout << "Max = " << a << endl;
    }else if(a > b && a > c && c > b){
        cout << "Min = " << b << endl;
        cout << "Max = " << a << endl;
    }else if ( b > a && b > c && a > c){
        cout << "Min = " << c << endl;
        cout << "Max = " << b << endl;
    }else if ( b > a && b > c && c > a){
        cout << "Min = " << a << endl;
        cout << "Max = " << b << endl;
    }else if ( c > a && c > b && a > b){
        cout << "Min = " << b << endl;
        cout << "Max = " << c << endl;
    }else if ( c > a && c > b && b > a){
        cout << "Min = " << a << endl;
        cout << "Max = " << c << endl;
    }
}



// #include<iostream>
// #include<algorithm>
 
// using namespace std;
 
// int main(){
//     int num1, num2, num3;
//     cin >> num1 >> num2 >> num3;
 
//     cout << "Min = " << min({num1, num2, num3}) << endl;
//     cout << "Max = " << max({num1, num2, num3}) << endl;
 
//     return 0;
// }
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int originalNum = n;
    int len = to_string(n).length();
    string rev = "";
    for(int i = 0; i < len; i++){
        rev += to_string(n%10);
        n /= 10;
    }
    if(to_string(originalNum) == rev){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
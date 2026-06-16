#include<iostream>

using namespace std;

int main(){
    int l, r;
    cin >> l >> r;
    if(l > r){
        for(int i = r; i<=l; i++){
            if(i+1>r){
                cout << i << "" << endl;
            }else{
                cout << i << " ";
            }
        }
    }else{
        for(int i = l; i<=r; i++){
            if(i+1>r){
                cout << i << "" << endl;
            }else{
                cout << i << " ";
            }
        }
    }
}
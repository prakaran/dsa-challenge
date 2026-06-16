#include<iostream>

using namespace std;

int main(){
    int n; 
    cin >> n;
    for(int i = n; i>0; i--){
        if(i != 1){
            cout << i << " ";
        }else{
            cout << i << endl;
        }
    }
}
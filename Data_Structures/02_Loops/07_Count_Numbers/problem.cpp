#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int positives = 0;
    int negatives = 0;
    int evens = 0;
    int odds = 0;
    for(int i = 0; i< n; i++){
        int a;
        cin >> a;
        if(a > 0) positives++;
        if(a < 0) negatives++;
        if(a % 2 == 0) evens++;
        if(a % 2 != 0) odds++;
    }
    cout << positives << endl;
    cout << negatives << endl;
    cout << evens << endl;
    cout << odds << endl;

}
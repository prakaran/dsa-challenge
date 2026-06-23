#include <iostream>
using namespace std;

void print(){
    cout << "I am learning functions\n";
}
int main() {
    int n;
    cin >> n;

    for(int i =1; i<=n; i++){
        print();
    }
    return 0;
}

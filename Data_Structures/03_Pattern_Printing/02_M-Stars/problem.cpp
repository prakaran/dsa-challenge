#include <iostream>
using namespace std;
int main() {
    int rows, stars;
    cin >> rows >> stars;
    for(int i = 0; i<rows; i++){
        for(int j=0; j<stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}

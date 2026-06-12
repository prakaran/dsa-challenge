# include <iostream>
# include <iomanip>
using namespace std;

int main(){
    int space = 4;
    for(int i = 5; i > 0; i--){
        if(i==1 || i==5){
            for(int j = 0; j<5; j++){
                cout << "*";
            }
        }else{
            cout << setw(space) <<"*";
            space--;
        }
        cout << endl;
    }
    return 0;
}
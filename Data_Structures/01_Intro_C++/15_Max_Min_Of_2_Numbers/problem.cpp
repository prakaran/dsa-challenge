# include<iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a-b > 0){
        cout << "Min = " << b << endl;
        cout << "Max = " << a << endl;
    }else if(a-b < 0){
        cout << "Min = " << a << endl;
        cout << "Max = " << b << endl;
    }else{
        cout << "Both are equal" << endl;
    }
}

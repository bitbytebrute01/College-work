#include<iostream>
using namespace std;
int main(){
    int a,b,c;

    cout << "Enter the 3 numbers : "<<endl;
    cin >> a >> b >> c;

    if(a > b) {
        if(a > c){
            cout << "A is Great";
        }
        else{
            cout << "C is great";
        }
    }

    if(b > a){
        if(b > c){
            cout << "B is Great";
        }
        else{
            cout << "C is Great";
        }
    }
    return 0;
}
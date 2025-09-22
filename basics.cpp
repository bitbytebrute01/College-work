#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int first = 0, second = 1 ,next;
    cout << first << " "<<second<<" ";
    for (int i = 1; i < n ;i++){
        next = first + second;
        first = second;
        second = next;
        cout << next << " ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int maxValue ( int a, int b){
    return (a > b) ? a : b;
}
int maxValue ( int a, int b, int c){
    return (maxValue(a,b),c);
}

int main(){
    cout << maxValue(20,40) << '\n';
    cout << maxValue(20,30,50) << '\n';
    return 0;
}
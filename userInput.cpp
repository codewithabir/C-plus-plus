#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    cout << "Sum = " << a + b << '\n';
    cout << "Difference = " << a - b << '\n';
    cout << "Product = " << a * b << '\n';
    
    if (b != 0 )
    {
        cout << "Quotient = " << a/b << '\n';

    }
    else{
        cout << "Dividing by zero is illegal :( " << '\n';
    }
    return 0;
}
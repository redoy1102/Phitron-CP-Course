#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *num = new int;
    // Dynamic memory will return a memory address. That's why i have created a pointer variable(*num) to store that memory address.
    *num = 10;  // storing a value in *num variable or dereferencing
    cout<<*num<<endl;   // printing the value
    cout<<num<<endl;    // memory address
}
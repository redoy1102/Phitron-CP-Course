#include<bits/stdc++.h>
using namespace std;
class Numbers{
    public:
    int complex;
    int prime;
    Numbers(int complex, int prime)
    {
        // this->complex = complex;
        // this->prime = prime;
    }
};

int main(){
    Numbers n(10, 20);
    cout<<n.prime<<endl<<n.complex<<endl;
    return 0;
}
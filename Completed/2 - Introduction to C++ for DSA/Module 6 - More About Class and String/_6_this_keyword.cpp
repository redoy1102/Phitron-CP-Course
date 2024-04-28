#include<bits/stdc++.h>
using namespace std;
class Check{
    public:
        string name;
        Check(string name)
        {
            this->name = name;
        }
};
int main(){
    Check c("Fuad");
    cout << c.name << endl;

    return 0;
}
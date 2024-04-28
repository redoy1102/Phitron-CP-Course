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
    Check *c1 = new Check("c1");
    Check *c2 = new Check("c2");

    *c2 = *c1;

    cout << c1->name << endl;
    cout << c2->name << endl;

    return 0;
}
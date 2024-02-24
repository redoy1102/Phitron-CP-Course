#include<bits/stdc++.h>
using namespace std;

void input(list<int> &l){
    while(true){
        int v;
        cin >> v;
        if(v != -1){
            l.push_back(v);
        }
        else{
            break;
        }
    }
}

int main(){
    list<int> l1;
    input(l1);
    l1.reverse();

    for(int v: l1){
        cout << v << " ";
    }

    return 0;
}
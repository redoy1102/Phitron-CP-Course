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

bool sameOrNot(list<int> l1, list<int> l2){
    if(l1.size() != l2.size()){
        return false;
    }
    auto it1 = l1.begin();
    auto it2 = l2.begin();

    while(it1 != l1.end())
    {
        if(*it1 != *it2){
            return false;
        }
        it1++;
        it2++;
    }
    return true;
}

int main(){
    list<int> l1;
    list<int> l2;
    input(l1);
    input(l2);

    if(sameOrNot(l1, l2)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
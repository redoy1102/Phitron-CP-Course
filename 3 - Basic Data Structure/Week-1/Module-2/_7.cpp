#include<bits/stdc++.h>
using namespace std;

int main(){
    //! 1
    // int n;
    // cin >> n;
    // // vector<string> v;
    // // for (int i = 0; i < n; i++){
    // //     string s;
    // //     cin >> s;
    // //     v.push_back(s);
    // // }
    // vector<string> v(n);
    // for (int i = 0; i < n; i++){
    //     cin >> v[i];
    // }

    // for(string i: v){
    //     cout << i << " ";
    // }



    int n;
    cin >> n;
    cin.ignore();

    vector<string> v(n);

    for (int i = 0; i < n; i++){
        getline(cin, v[i]);
    }
    for(string i: v){
        cout << i << endl;
    }

     

    return 0;
}
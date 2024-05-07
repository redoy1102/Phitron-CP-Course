#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char ch;
        int value;
};
bool cmp(Student a, Student b)
{
    return a.value < b.value;
}
int main(){
    Student s[26];
    string st;
    cin >> st;
    // initializing the objects
    for (int i = 0; i < 26; i++)
    {
        s[i].ch = char('a' + i);
        s[i].value = 0;
    }
    // setting the frequency of all the characters
    for(char c: st)
    {
        int index = c - 'a';
        s[index].value++;
    }

    sort(s, s + 26, cmp);

    // printing the output
    for (int i = 0; i < 26; i++)
    {
        if(s[i].value != 0)
        {
            while(s[i].value--)
            {
                cout << s[i].ch;
            }
        }
        // printing all the values
        // cout << s[i].ch << " " << s[i].value << endl;
    }
    
    return 0;
}
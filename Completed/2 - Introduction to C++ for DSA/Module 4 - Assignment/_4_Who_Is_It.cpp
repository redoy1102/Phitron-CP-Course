#include<bits/stdc++.h>
using namespace std;
class Students{
    public:
        int id;
        string name;
        char section;
        int tm;
        Students(int id, string name, char section, int tm)
        {
            this->id = id;
            this->name = name;
            this->section = section;
            this->tm = tm;
        }
};
int main(){
    int t;
    cin >> t;
    // t = 1;
    while(t--){
        int id1;
        string name1;
        char section1;
        int tm1;
        cin >> id1 >> name1 >> section1 >> tm1;
        Students s1(id1, name1, section1, tm1);

        int id2;
        string name2;
        char section2;
        int tm2;
        cin >> id2 >> name2 >> section2 >> tm2;
        Students s2(id2, name2, section2, tm2);

        int id3;
        string name3;
        char section3;
        int tm3;
        cin >> id3 >> name3 >> section3 >> tm3;
        Students s3(id3, name3, section3, tm3);

        int m1 = s1.tm; 
        int m2 = s2.tm; 
        int m3 = s3.tm; 

        if (m1 >= m2) 
        {
            if (m1 >= m3) 
            {
                cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.tm << endl;
            } 
            else {
                cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.tm << endl;
            }
        } 
        else if (m2 >= m1) 
        {
            if (m2 >= m3) {
                cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.tm << endl;
            } 
            else {
                cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.tm << endl;
            }
        } 
        else if (m3 >= m1)
        {
            if (m3 >= m2)
            {
                cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.tm << endl;
            }
            else {
                cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.tm << endl;
            }
        }
    }

    return 0;
}
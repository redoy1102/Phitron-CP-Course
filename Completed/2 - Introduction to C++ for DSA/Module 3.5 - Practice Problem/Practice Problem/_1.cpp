#include <iostream>
using namespace std;

class Students {
public:
    string name, section;
    int roll, math_marks, class_num; 

    Students(string name, string section, int roll, int math_marks, int class_num) {
        this->name = name;
        this->section = section;
        this->roll = roll;
        this->math_marks = math_marks;
        this->class_num = class_num; 
    }
};

int main() {
    string name1, section1;
    int roll1, math_marks1, class1;
    cin >> name1 >> section1 >> roll1 >> math_marks1 >> class1;
    Students s1(name1, section1, roll1, math_marks1, class1);

    string name2, section2;
    int roll2, math_marks2, class2;
    cin >> name2 >> section2 >> roll2 >> math_marks2 >> class2;
    Students s2(name2, section2, roll2, math_marks2, class2);

    string name3, section3;
    int roll3, math_marks3, class3;
    cin >> name3 >> section3 >> roll3 >> math_marks3 >> class3;
    Students s3(name3, section3, roll3, math_marks3, class3);

    int m1 = s1.math_marks; 
    int m2 = s2.math_marks; 
    int m3 = s3.math_marks; 

    if (m1 >= m2) {
        if (m1 >= m3) {
            cout << "Student-1 got the highest marks" << endl;
        } else {
            cout << "Student-3 got the highest marks" << endl;
        }
    } else if (m2 >= m1) {
        if (m2 >= m3) {
            cout << "Student-2 got the highest marks" << endl;
        } else {
            cout << "Student-3 got the highest marks" << endl;
        }
    } else if (m3 >= m1) {
        if (m3 >= m2) {
            cout << "Student-3 got the highest marks" << endl;
        } else {
            cout << "Student-2 got the highest marks" << endl;
        }
    }

    return 0;
}

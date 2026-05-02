
#include <iostream>
#include<vector>
#include<string>
#include <fstream>
#include "Student.h"
#include"StudentManager.h"

using namespace std;


 
int main()
{
    StudentManager sm;
    sm.loadFromFile();
    int choice;

    while (true) {
        cout << "\n1.添加学生\n2.显示学生\n3.删除学生\n4.查找学生\n5.修改学生\n6.按年龄排序\n0.退出\n" << endl;
        cin >> choice;
        if (choice == 1) sm.addStudent();
        else if (choice == 2) sm.showStudents();
        else if (choice == 3) sm.deleteStudent();
        else if (choice == 4) sm.findStudent();
        else if (choice == 5) sm.updateStudent();
        else if (choice == 6) sm.sortByAge();
        else if (choice == 0) {
            sm.saveToFile();
            break;
        }
    }
    return 0;
}

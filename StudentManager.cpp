
#include<string>
#include <algorithm>
#include"StudentManager.h"
#include"Student.h"
void StudentManager::addStudent() {
    int id, age;
    std::string name;

    std::cout << "请输入 id name age" << std::endl;
    std::cin >> id >> name >> age;

    Student s(id, name, age);
    students.push_back(s);

    std::cout << "添加成功" << std::endl;
}

void StudentManager::showStudents() {
    for (auto s : students) {
        std::cout << s.getId() << " " << s.getName() << " " << s.getAge() << std::endl;
    }
}

void StudentManager::deleteStudent() {
    int id;
    std::cout << "输入要删除的id: ";
    std::cin >> id;

    for (auto it = students.begin(); it != students.end(); it++) {
        if (it->getId() == id) {
            students.erase(it);
            std::cout << "删除成功\n";
            return;
        }
    }

    std::cout << "没找到该学生\n";
}

void StudentManager::findStudent() {
    int id;
    std::cout << "输入要查找的id: ";
    std::cin >> id;

    for (auto& s : students) {
        if (s.getId() == id) {
            std::cout << s.getId() << " " << s.getName() << " " << s.getAge() << std::endl;
            return;
        }
    }

    std::cout << "没找到\n";
}

void StudentManager::saveToFile() {
    std::ofstream ofs("students.txt");

    for (auto& s : students) {
        ofs << s.getId() << " " << s.getName() << " " << s.getAge() << std::endl;
    }

    ofs.close();
}

void StudentManager::loadFromFile() {
    std::ifstream ifs("students.txt");

    int id, age;
    std::string name;

    while (ifs >> id >> name >> age) {
        students.push_back(Student(id, name, age));
    }

    ifs.close();
}

void StudentManager::updateStudent() {
    int id;
    std::cout << "输入要修改的id: ";
    std::cin >> id;

    for (auto& s : students) {
        if (s.getId() == id) {
            std::string name;
            int age;

            std::cout << "输入新name和age: ";
            std::cin >> name >> age;

            s.setName(name);
            s.setAge(age);

            std::cout << "修改成功\n";
            return;
        }
    }

    std::cout << "没找到\n";
}

void StudentManager::sortByAge() {
    sort(students.begin(), students.end(),
        [](const Student& a, const Student& b) {
            return a.getAge() < b.getAge();  // 升序
        });

    std::cout << "按年龄排序完成\n";
}
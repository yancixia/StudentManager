#pragma once
#include <iostream>
#include<string>
#include <fstream>
#include<vector>
#include "Student.h" 
class StudentManager {
private:
    std::vector<Student>students;
public:

    void addStudent();

    void showStudents();

    void deleteStudent();

    void findStudent();

    void saveToFile();

    void loadFromFile();

    void updateStudent();

    void sortByAge();
};

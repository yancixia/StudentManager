
#include <iostream>
#include<string>
#include <fstream>
#include<vector>
#include "Student.h"
using namespace std;
Student::Student() {}
Student::Student(int id, string name, int age) {
    this->id = id;
    this->name = name;
    this->age = age;  
}
int Student::getId() const { return id; }
string Student::getName() const { return name; }
int Student::getAge() const { return age; }

void Student::setId(int id) { this->id = id; }
void Student::setName(string name) { this->name = name; }
void Student::setAge(int age) { this->age = age; }
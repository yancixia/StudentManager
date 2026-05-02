#pragma once

#include<string>

class Student {
private:
    int id;
    std::string name;
    int age;
public:

    Student();
    Student(int id, std::string name, int age);
    
    int getId() const;
    std::string getName() const;
    int getAge() const;

    void setId(int id);
    void setName(std::string name);
    void setAge(int age);
};

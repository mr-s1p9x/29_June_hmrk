#include "Student.h"

// Конструктор класса Student
Student::Student(const std::string &name, int course) : name(name), course(course) {}

// Функция для вывода информации о студенте
void Student::showInfo() const
{
    cout << "Student: " << name << ", Course: " << course << endl;
}
#ifndef INC_29_JUNE_HMWRK_STUDENT_H
#define INC_29_JUNE_HMWRK_STUDENT_H
#include <iostream>
#include <string>
using namespace std;

// Базовый класс Student
class Student {
protected:
    string name; // Имя студента
    int course; // Курс обучения

public:
    Student(const string& name, int course); // Конструктор для инициализации
    virtual void showInfo() const;           // Метод для вывода информации о студенте
    virtual ~Student() {}                    // Виртуальный деструктор
};

#endif //INC_29_JUNE_HMWRK_STUDENT_H

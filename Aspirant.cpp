#include "Aspirant.h"
#include <iostream>
using namespace std;

// Конструктор класса Aspirant
Aspirant::Aspirant(const std::string &name, int course, const string &thesisTopic) :
        Student(name, course), thesisTopic(thesisTopic) {}

// Функция для вывода информации об аспиранте
void Aspirant::showInfo() const
{
    Student::showInfo(); // Вызов базового метода для вывода общей информации
    cout << "Thesis topic: " << thesisTopic << endl; // Добавление специфической информации
}
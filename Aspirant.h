#ifndef INC_29_JUNE_HMWRK_ASPIRANT_H
#define INC_29_JUNE_HMWRK_ASPIRANT_H
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

// Класс Aspirant, производный от Student
class Aspirant : public Student
{
private:
    string thesisTopic; // Тема кандидатской работы

public:
    Aspirant(const string& name, int course, const string& thesisTopic);
    void showInfo() const override;  // Переопределение метода для вывода информации
};

#endif //INC_29_JUNE_HMWRK_ASPIRANT_H

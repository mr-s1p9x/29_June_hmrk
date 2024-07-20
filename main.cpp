#include <iostream>
using namespace std;
#include "Student.h"
#include "Aspirant.h"

int main() {
    Student s ("John Doe", 3);
    Aspirant a ("Jane Doe", 4, "Artificial Intelligence in Medicine");

    s.showInfo();
    a.showInfo();
    
    return 0;
}

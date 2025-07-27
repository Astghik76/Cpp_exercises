#include "StudentProfile.h"
#include <iostream>

int main() {
    std::vector<int> grades = {85, 90, 78, 92, 88};

    StudentProfile student("Astghik Jnainyan", 12345, 2008, grades);
    student.printProfile();

    std::cout << "Average Grade" << student.averageGrade() << "\n";

    return 0;
}


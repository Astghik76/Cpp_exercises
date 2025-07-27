#include "StudentProfile.h"
#include <iostream>
#include <numeric>

StudentProfile::StudentProfile(const std::string& name, int id, int birthYear, std::vector<int>& grades)
    : sName(name), nStudentID(id), nBirthYear(birthYear), vecOfGrades(grades) {}

void StudentProfile::printProfile() const {
 std::cout << " Student Profile:\n";
 std::cout << "Name: " << sName << "\n";
 std::cout << "ID: " << nStudentID << "\n";
 std::cout << "Birth Year: " << nBirthYear << "\n";
 std::cout << "Grades: ";
   for (int grade : vecOfGrades) {
 std::cout << grade << " ";
    }
 std::cout << "\n";
}

double StudentProfile::averageGrade() const {
  if (vecOfGrades.empty()) return 0.0;
    int sum = std::accumulate(vecOfGrades.begin(), vecOfGrades.end(), 0);
    return static_cast<double>(sum) / vecOfGrades.size();
}


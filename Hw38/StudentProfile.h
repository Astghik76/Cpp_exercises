#pragma once
#include <string>
#include <vector>

class StudentProfile {
private:
 const std::string sName;
 const int nStudentID;
  const int nBirthYear;
std::vector<int>& vecOfGrades;

public:
 StudentProfile(const std::string& name, int id, int birthYear, std::vector<int>& grades);
 void printProfile() const;
 double averageGrade() const;
};


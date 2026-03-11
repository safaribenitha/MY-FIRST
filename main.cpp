#include <iostream>
#include <string>
#include <vector>
#include <numeric>

struct Student {
    std::string name;
    std::string surname;
    std::vector<float> grades;

    float calculate_grade() {
        float sum = std::accumulate(grades.begin(), grades.end(), 0.0f);
        return sum / grades.size();
    }
};

int main() {
    Student student;
    student.name = "John";
    student.surname = "Doe";
    student.grades = {85.5f, 92.0f, 78.5f, 96.0f};

    std::cout << "Student: " << student.name << " " << student.surname << std::endl;
    std::cout << "Average Grade: " << student.calculate_grade() << std::endl;

    return 0;
}

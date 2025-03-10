#include "Student.h"
#include "Global Functions.h"

int main() {
    Student A1,B1;
    string TopStudent; float TopGrade;
    A1.rename("Andrew Jhonas");
    B1.rename("Mike Thomson");
    A1.SetEnglish(8.3);
    A1.SetMath(9.55);
    A1.SetHistory(7.99);
    B1.SetEnglish(10);
    B1.SetMath(10);
    B1.SetHistory(6);
    int result = Compare_Average_Grade(A1,B1)*4 + Compare_English_Grade(A1,B1) + Compare_Math_Grade(A1,B1) + Compare_History_Grade(A1,B1);
    if (result == 0)
        result = Compare_Name(A1,B1);
    if (result > 0) {
        TopStudent = A1.GetName();
        TopGrade = A1.GetAverage();
    }
    else {
        TopStudent = B1.GetName();
        TopGrade = B1.GetAverage();
    }
    printf("%s grade: %f", TopStudent.c_str(), TopGrade);
    return 0;
}
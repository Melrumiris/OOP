#pragma once
#include <string>
using namespace std;

struct grades{
  float math;
  float english;
  float history;
};

class Student {
    string Name;
    grades Grade = {0,0,0};
public:
    void rename(string name);
    string GetName();
    void SetEnglish(float x);
    void SetMath(float x);
    void SetHistory(float x);
    float GetEnglish();
    float GetMath();
    float GetHistory();
    float GetAverage();
};


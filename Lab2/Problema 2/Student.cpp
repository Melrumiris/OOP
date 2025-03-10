#include "Student.h"

void Student::rename(string name){
  this->Name = name;
  }

string Student::GetName(){
  return this->Name;
}

void Student::SetEnglish(float x){
  this->Grade.english = x;
}

void Student::SetMath(float x){
  this->Grade.math = x;
}

void Student::SetHistory(float x){
  this->Grade.history = x;
}

float Student::GetEnglish(){
  return this->Grade.english;
}

float Student::GetMath(){
  return this->Grade.math;
}

float Student::GetHistory(){
  return this->Grade.history;
}

float Student::GetAverage(){
  return (Grade.math + Grade.english + Grade.history) / 3;
}
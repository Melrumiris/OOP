#include "Global Functions.h"

int Compare_Name(Student a, Student b){
  if (a.GetName() > b.GetName())
    return 1;
  if (a.GetName() < b.GetName())
    return -1;
  return 0;
}

int Compare_English_Grade(Student a, Student b){
  if (a.GetEnglish() > b.GetEnglish())
    return 1;
  if (a.GetName() < b.GetName())
    return -1;
  return 0;
}

int Compare_Math_Grade(Student a, Student b){
  if (a.GetMath() > b.GetMath())
    return 1;
  if (a.GetMath() < b.GetMath())
    return -1;
  return 0;
}

int Compare_History_Grade(Student a, Student b){
  if (a.GetHistory() > b.GetHistory())
    return 1;
  if (a.GetHistory() < b.GetHistory())
    return -1;
  return 0;
}

int Compare_Average_Grade(Student a, Student b){
  if (a.GetAverage() > b.GetAverage())
    return 1;
  if (a.GetAverage() < b.GetAverage())
    return -1;
  return 0;
}
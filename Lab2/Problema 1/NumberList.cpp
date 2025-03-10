
#include "NumberList.h"
#include <iostream>

void NumberList::Init(){
  this->count = 0;
}

bool NumberList::Add(int x){
  if (this->count < 10){
    this->numbers[this->count] = x;
    this->count++;
    return true;
  }
  return false;
}

void NumberList::Sort(){
  bool sorted;
  do {
    sorted = true;
    for (int i = 1; i < this->count; i++)
      if (this->numbers[i] > this->numbers[i + 1]) {
        int aux = this->numbers[i];
        this->numbers[i] = this->numbers[i + 1];
        this->numbers[i + 1] = aux;
        sorted = false;
      }
  } while (!sorted);
}

void NumberList::Print(){
  for (int i = 0; i < this->count; i++)
    printf("%d ", this->numbers[i]);
}
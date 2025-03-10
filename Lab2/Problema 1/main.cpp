#include <iostream>
#include "NumberList.h"
using namespace std;

int main() {
  int i;
    NumberList list;
    list.Init();
    for (i = 9; i > 0; i--) {}
        list.Add(i);
    list.Sort();
    list.Print();
}
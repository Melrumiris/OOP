#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int Str_Int(char str[]) {
    int num = 0, digit=1;
    for (int i=strlen(str)-1; i>=0; i--){
        num += (str[i] - '0')*digit;
        digit*=10;
    }
    return num;
}

int main()
{   char number[100];
    int sum=0;
    FILE* file = fopen("ini.txt", "r");
    while (fgets(number, 100, file)) {
        sum+= Str_Int(number);
    }
    printf("The sum is %d \n", sum);
    fclose(file);
    return 0;
}

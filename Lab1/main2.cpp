#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char word[20][100], aux[100];
  int n=0, max=0;
    do{
      scanf("%s",word[n]);
      n++;
      }while(word[n-1][0]!='\0');
    n-=2;
    for(int i=0;i<n;i++){
      for(int j=i;j<n;j++)
        if(strlen(word[i])>strlen(word[max]))
            max = i;
      strcpy(aux,word[i]);
      strcpy(word[i],word[max]);
      strcpy(word[max],aux);
    }
  for(int i=0;i<n;i++){
    printf("%s\n",word[i]);
    }
   return 0;
}
#include <stdio.h>

int main(){
  char string1[] = "softwarica";
  char string2[] = "SOFTWARICA";
  int i, j;
  for (i=0; i<10; i++){
    for(j=0; j<=i; j++){
      if(i==2 || i==4 || i==6 || i==8){
        putchar(string1[i]);
        putchar('\t');
      }
      else{
        putchar(string2[j]);
        putchar('\t');
      }
    }
    putchar('\n');
  }
  return 0;
}
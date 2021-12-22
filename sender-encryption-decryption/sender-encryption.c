#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp1, *fp2;
  char a;
  fp1 = fopen("test.txt", "r");
  if (fp1 == NULL){
    puts("cannot open test.txt file.\n");
    exit(1);
  }
  fp2 = fopen("test1.txt", "w");
  if (fp2 == NULL){
    puts("Not able to open test1.txt file\n");
    fclose(fp1);
    exit(1);
  }
  a = fgetc(fp1);
  fprintf(fp2, "%c", a+3);
  while (a != EOF){
    a = fgetc(fp1);
    fprintf(fp2, "%c", a+3);
  }
  printf("test.txt if successfully encrypted and stored to test1.txt.\n");
  printf("test1.txt can be forwarded to destination.\n");
  fclose(fp1);
  fclose(fp2);
  return 0;
}
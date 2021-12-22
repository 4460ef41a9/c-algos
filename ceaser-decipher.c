#include <stdio.h>
#include <string.h>

void main(){
  char password[20];
  int i, len=0;
  printf("Enter your encrypted password: ");
  scanf("%s", password);

  len = strlen(password);
  printf("Your decrypted password is: ");

  for(i = 0; i<len; i++){
    printf("%c", password[i]-3);
  }
  printf("\n");
}
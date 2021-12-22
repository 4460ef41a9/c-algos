#include <stdio.h>
#include <string.h>

int main(){
  int i;
  char ch1, username[10], password[10];

  printf("Enter your Username: ");
  gets(username);

  printf("Enter your password: ");
  gets(password);

  if(strcmp(username, "student")==0 && strcmp(password, "stw001") == 0){
    printf("\n Welcome....\n MENU....Main Logic of Program..");
  }
  else{
    printf("Invalid Username/Password.\n");
  }
  return 0;
}
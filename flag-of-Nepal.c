#include <stdio.h>

void triangleShape(int n);
void flagPole(int n);

int main(){
  int row;
  printf("Enter number of rows: ");
  scanf("%d", &row);
  for (int a = 0; a < 2; a++) triangleShape(row);
  flagPole(row);
}

void triangleShape(int n){
  int i, j, a;
  for(i = 1; i<=n ; i++){
    for(j = 1; j<=i; j++){
      printf("* ");
    }
    printf("\n");
  }
}

void flagPole(int n){
  int i;
  for(i = 1; i<=n; i++){
    printf("*\n");
  }
}
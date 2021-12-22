#include <stdio.h>

// int number(int a){
//   switch (a){
//         case 1:
//         return 1;
//         case 3:
//         return 3;
//         case(5):
//         return 5;
//         case(7):
//         return 7;
//       }
// }

int main() {
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    m = n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m - 1; j++) {
            printf("|");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d", k);
        }
        m--;
        printf("\n");
    }
    return 0;
}

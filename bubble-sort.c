#include <stdio.h>

int * Sort(int []);

int main(){
	int arr[10] = {1,7,3,5,1,6,8,2,5,4};
	int *p = Sort(arr), i;
	printf("Printing the sorted array: \n");
	for (i = 0; i<10; i++){
		printf("%d\n", *(p + i));
	}
}

int * Sort(int a[]){
	int i, j, temp;
	for(i = 0; i < 10; i++){
		for(j = 1; j <10; j++){
			if(a[j] < a[i]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return a;
}
#include<stdio.h>
void sort_array(int* arr, int n) {
	int x;
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			if (*(arr + j) > * (arr + j + 1)) {
				x = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = x;
			}
		}
	}
}
int main() {
	int array1[999],n;
	printf("enter n ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &array1[i]);
	}
	sort_array(array1, n );
	printf("\n");
	for (int j = n-1; j >=0; j--) {
		printf("%d ", array1[j]);
	}
	return 0;
}
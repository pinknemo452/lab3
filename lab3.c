#include<stdio.h>
void sort_array(int* arr, int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((*arr <= 0) ) {
				arr++;
				if (*arr >= 0) {
					temp = *arr;
					arr--;
					int temp1 = *arr;
					*arr = temp;
					arr++;
					*arr = temp1;
				}
			}
			else {
				arr++;				
			}
		}
		arr -= n;
	}
}
int main() {
	int array[7] = { 1,-1,-2,-3,5,4,0 };
	sort_array(array,7 );
	for (int j = 0; j < 7; j++) {
		printf("%d ", array[j]);
	}
	return 0;
}
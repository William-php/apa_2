#include <stdio.h>
#include <stdlib.h>

void inputArray(int *array) {
	for (int i = 0; i < 10; i++) array[i] = rand();
	
	
}

void sort(int *array) {
	int arrayAux[10];
	for (int i = 0; i < 10; i++) {
		
		for (int j = i; j < 10; j++) {
			if (array[j] < array[i]) {
				arrayAux[i] = array[i];
				array[i] = array[j];
				array[j] = arrayAux[i];
			}
		}
	}
	
	
}

int main() {
	int array[10];
	inputArray(array);
	printf("test 1: \n");
	for (int i = 0; i < 10; i++) printf("%d\n\n", array[i]);
	
	printf("test 2: \n");
	sort(array);
	for (int i = 0; i < 10; i++) printf("%d\n\n", array[i]);
	return 0;	
}

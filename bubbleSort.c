#include <stdio.h>

void cambiar_pos(int *n1, int *n2){
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void bubbleSort(int vector_entrada[], int n){
	int i, j;
	for(i=0; i < n-1; i++){
		for(j=0; j < n-i-1; j++){
			if(vector_entrada[j] < vector_entrada[j+1])
				cambiar_pos(&vector_entrada[j], &vector_entrada[j+1]);
		}
	}
}

void printArray(int vector_entrada[], int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d ", vector_entrada[i]);
	}
	printf("\nFin del ordenamiento, saludos. \n");
}

int main(){
	int vector_entrada[] = {98, 87, 75, 12, 1, 5, 2};
	int n = sizeof(vector_entrada)/sizeof(vector_entrada[0]);
	bubbleSort(vector_entrada, n);
	printf("Array ordenado = ");
	printArray(vector_entrada, n);
	printf("\n");
	
	return 0;
}
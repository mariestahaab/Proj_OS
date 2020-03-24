#include<stdio.h>

int length;

void main()
{
	printf("Enter Length of Array: ");
	scanf("%d", &length);
	
	int i;
	int arr[length];
	
	printf("Enter %d Elements:\n", length);
	for(i=0; i<length; i++){
		scanf("%d", &arr[i]);
	}
	
	int sm = smallest(arr);
	printf("Index of Smallest Element = %d", sm);
}

int smallest(int x[]){
	int i, index=0, smallest=x[0];
	
	for(i=0; i<length; i++){
		if(x[i]<smallest){
			smallest = x[i];
			index = i;
		}
	}
	return index;
}

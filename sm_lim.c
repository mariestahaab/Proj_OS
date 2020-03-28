#include<stdio.h>

int length = 4;

void main()
{
//	printf("Enter Length of Array: ");
//	scanf("%d", &length);
	
	int i, arr[] = {0, 23, 13, 10};
	
//	printf("Enter %d Elements:\n", length);
//	for(i=0; i<length; i++){
//		scanf("%d", &arr[i]);
//	}

	printf("Smallest Element = %d", smallest_lim(arr, length-1));
	printf("\nGreatest Element = %d", greatest(arr));
}

int greatest(int x[]){
	int i, index=0, greatest=x[0];
	
	for(i=0; i<length; i++){
		if(x[i]>greatest){
			greatest = x[i];
			index = i;
		}
	}
	return greatest;
}

int smallest_lim(int x[], int limit){
	int i, index=0, smallest=greatest(x);
	
	for(i=0; i<=limit; i++){
		if(x[i] == 0){				//checks numbers other than 0
			x[i] = greatest(x);
		}
		if(x[i]<smallest){
			smallest = x[i];
			index = i;
		}
	}
	return smallest;
}

#include<stdio.h>

void main()
{
	int len_arr = 7;
	int arr[] = {8, 5, 2, 1, 3, 7, 6};
	int i, index, smallest;
	
	smallest = arr[0];
	index = 0;
	
	for(i=0; i<=5; i++){
		if(arr[i]<smallest){
			smallest = arr[i];
			index = i;
		}
	}
	printf("Smallest element = %d\nIndex = %d", smallest, index);
}

//this code makes use of a function "incomplete()" to determine the value of elements present in an array.
//it returns the value '0' if all the elements in the array are 0, and value'1' if the array contains even a single non-zero element.
//this function can be made use of to check if the burst time of every process is zero.

#include<stdio.h>
int n;

int main(){
	printf("Enter Length of Array: ");
	scanf("%d", &n);
	
	int i;
	int arr[n];
	
	printf("Enter %d Elements:\n", n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("\nResult - %d", incomplete(arr));
}

int incomplete(int x[]){
	int i, result = x[0];
	
	for(i=1; i<n; i++){
		result = result||x[i];
	}
	return result;
}

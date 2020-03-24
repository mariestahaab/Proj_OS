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

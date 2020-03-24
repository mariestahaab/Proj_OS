//It is important to note that this is the very first implementation of the scheduling algorithm the code is thus in its infancy.
//Minor or drastic changes in the code can be observed in the foreseeable future.

#include<stdio.h>

int n = 4;
int at[] = {0, 2, 4, 13};
int bt[] = {18, 23, 13, 10};
//int ct[], tat[], wt[];
float a_wt, a_tat;
int units=0;


void main()
{
	int i, temp[n];
	
	while(incomplete(bt)){
		
		
	}
}


int smallest(int x[]){
	int i, index=0, smallest=x[0];
	
	for(i=0; i<n; i++){
		if(x[i]<smallest){
			smallest = x[i];
			index = i;
		}
	}
	return index;
}

int incomplete(int x[]){
	int i, result = x[0];
	
	for(i=1; i<n; i++){
		result = result||x[i];
	}
	return result;
}

/*
void swap(int *x, int *y)
{
   int t;

    t = *y;
   *y = *x;
   *x = t;
}
*/

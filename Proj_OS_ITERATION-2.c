#include<stdio.h>

int n = 4;
int at[] = {0, 2, 4, 13};//needs to be in ascending order
int bt[] = {18, 23, 13, 10};
//int ct[], tat[], wt[];
float a_wt, a_tat;
int units=0;


void main()
{
	int i, temp[n];
	units = at[smallest(at)];
	
	//First Three Units: SJF Pre-emptive 
	bt[smallest(at)]=bt[smallest(at)]-3;
	units = units+3;
	
	//Next Six units: SJF Pre-emptive
	for(i=0; i<=n; i++){
		temp[i] = 0;
		if(at[i]<=units){
			temp[i] = at[i];
		}
	}
//	int pcs = smallest_lim(bt, temp[greatest(temp)]);
	bt[smallest_lim(bt, temp[greatest(temp)])] = bt[smallest_lim(bt, temp[greatest(temp)])]-6;
	units = units+6;
	
	//SJF Non Pre-emptive
	
	
	
/*	
	while(incomplete(bt)){
		
	}
*/
/*
	for(i=0; i<=n; i++){
		printf("\t%d", temp[i]);
	}
*/
	
//	printf("%d", bt[smallest_lim(bt, temp[greatest(temp)])]);
	printf("%d", bt[0]);
}


int greatest(int x[]){
	int i, index=0, greatest=x[0];
	
	for(i=0; i<n; i++){
		if(x[i]>greatest){
			greatest = x[i];
			index = i;
		}
	}
	return index;
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

int smallest_lim(int x[], int limit){
	int i, index=0, smallest=x[0];
	
	for(i=0; i<limit; i++){
		if(x[i]<smallest){
			smallest = x[i];
			index = i;
		}
	}
	return index;
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

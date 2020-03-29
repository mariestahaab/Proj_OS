#include<stdio.h>

int n = 4, units=0;
float a_wt = 0, a_tat = 0;

int at[] = {0, 2, 4, 13};		//needs to be in ascending order
int bt[] = {18, 23, 13, 10};

int bt_i[] = {18, 23, 13, 10};
int ct[] = {0, 0, 0, 0};
int tat[] = {0, 0, 0, 0};
int wt[] = {0, 0, 0, 0};

void main()
{
	int i, temp[n], pcs;	
	units = at[smallest(at)];
	
	//First Three Units: SJF Pre-emptive
	pcs = smallest(at); 
	bt[pcs]=bt[pcs]-3;
	units = units+3;
	
	//Next Six units: SJF Pre-emptive
	for(i=0; i<n; i++){
		temp[i] = 0;
		if(at[i]<=units){
			temp[i] = at[i];
		}
	}
	pcs = smallest_lim(bt, greatest(temp));
	bt[pcs] = bt[pcs]-6;
	units = units+6;
	
	//SJF Non Pre-emptive
		
	while(incomplete(bt)){
		
		for(i=0; i<n; i++){
			temp[i] = 0;
			if(at[i]<=units){
				temp[i] = at[i];
			}
		}
		
		pcs = smallest_lim(bt, greatest(temp));
		units = units + bt[pcs];
		bt[pcs] = 0;				//bt[pcs] = bt[pcs]-bt[pcs];
		ct[pcs] = units;
	}
	
	//Calculating TAT, WT, A_TAT, A_WT

	for(i=0; i<n; i++){
		tat[i]=ct[i]-at[i];
		a_tat = a_tat + tat[i];
		
		wt[i]=tat[i]-bt_i[i];
		a_wt = a_wt + wt[i];
	}
	a_tat = a_tat/n;
	a_wt = a_wt/n;


	//Displaying Results
	
	printf("\nProcess\t ArrivalTime\tBurstTime\tCompletionTime\t TurnAroundTime\t WaitingTime\n");
	
	for(i=0; i<n; i++){
		printf("\nP%d", i);
		printf("\t %d", at[i]);
		printf("\t\t%d", bt_i[i]);
		printf("\t\t%d", ct[i]);
		printf("\t\t %d", tat[i]);
		printf("\t\t %d", wt[i]);		
	}
	printf("\n\nAverage Turn Around Time - %f",a_tat);
	printf("\nAverage Waiting Time - %f", a_wt);

}


//Function Declaration

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

int smallest_lim(int x[], int limit){
	int i, index=0, smallest, temp[n];
	
	for(i=0; i<=limit; i++){
		temp[i] = x[i];
	}
	
	smallest = temp[greatest(temp)];
	
	for(i=0; i<=limit; i++){
		if(x[i] != 0){
			
			if(x[i]<=smallest){
				smallest = x[i];
				index = i;
			}
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


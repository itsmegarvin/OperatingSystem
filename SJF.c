#include<stdio.h>
void main(){
	int i, j, temp, process[5];
 
	printf("enter cpu burst time of th process\n");
	for(i=0; i<5; i++){
 
		scanf("%d", &process[i]);
	}
 
	printf("input burst time\n");
	for(i=0; i<5; i++){
		printf("process[%d]= ", i+1);
		printf("%d\n", process[i]);
	}
	printf("the sequence of process exeution in sjf scheduling acc to burst time:\n"); 
	for (i=0;i<5;i++){
		for(j=0;j<(5-1);j++){
			if(process[j] > process[j+1]){
				temp = process[j];
				process[j] = process[j+1];
				process[j+1] = temp;
			}		
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n", process[i]);
 
	}
 
}

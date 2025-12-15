#include <stdio.h>
int main() {
	int score;
	scanf("%d",&score);

	if (score<=100&&score>=0) {
		if(score>=85){
			printf("A");
		}
		else if(score>=75){
			printf("B");
		}
		else if(score >= 68){
			printf("C %d",75-score);
		}
		else if(score>=55){
			printf("D");
		}
		else{
			printf("F");
		}
	
		}
	
	
	else{
		
			printf("error score");
		}
	} 
		
	

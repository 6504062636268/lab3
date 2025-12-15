#include <stdio.h>
int main() {
	int score;
	scanf("%d",&score);

	if (score >= 68) {
		if(score>=85){
			printf("A");
		}
		else if(score>=75){
			printf("B");
		}
		else{
			printf("C %d",75-score);
		}
	
	// A B C
	} else{
		if(score>=55){
			printf("D");
		}
		else{
			printf("F");
		}
	// D F
	}
	
}

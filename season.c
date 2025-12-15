#include <stdio.h>
int main() {
	int month;
	printf("What month do you want to search? :\t");
	scanf("%d",&month);
	switch (month) { 
		case 1	: printf("Winter"); break;
		case 2	: printf("Summer"); break;
		case 3	: printf("Summer"); break;
		case 4	: printf("Summer"); break;
		case 5	: printf("Summer"); break;
		case 6	: printf("Spring"); break;
		case 7	: printf("Spring"); break;
		case 8	: printf("Spring"); break;
		case 9	: printf("Spring"); break;
		case 10	: printf("Spring"); break;
		case 11	: printf("Winter"); break;
		case 12	: printf("Winter"); break;
		default : printf("Invalid");
	}

return 0;
}

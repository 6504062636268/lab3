#include <stdio.h>
int main(){
	int h,m,s;
	int nexmi;
	int next= 0;
	scanf("%d:%d:%d",&h,&m,&s);
	printf("hour:%d\n",h);
	printf("minute:%d\n",m);
	printf("second:%d\n",s);
	printf("Next minutes :\t");
	scanf("%d",&nexmi);
	
	if(h==23){
		next = 1;	
	}
	else if(h<=22){
		if(m+nexmi<=60){
			next = 2;
		}
		else if(m+nexmi>=60){
			next =3;
		
	}}
	
	switch(next){
		case 1 : printf("hour : 1\n",h);
		         printf("minute : %d\n",m+nexmi-60);
		         printf("second:%d\n",s);
		case 2 : printf("hour : %d\n",h);
		         printf("minute : %d\n",m+nexmi);
		         printf("second:%d\n",s);
		case 3 : printf("hour : %d\n",h+1);
		         printf("minute : %d\n",m+nexmi-60);
		         printf("second:%d\n",s);
	}
	
}

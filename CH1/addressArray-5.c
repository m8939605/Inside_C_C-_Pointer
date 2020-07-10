#include <stdio.h>

int main ()
{
    int x[5];
    int i;
    
    for (i=0; i<5; i++) {
	    printf("Please input x[%d] value: ", i);
	    scanf("%d", &x[i]);	
	}
	
	for (i=0; i<5; i++) {
		printf("x[%d] = %d \n",i,x[i]);
	}
	printf("\n");

    for (i=0; i<5; i++) {
	    printf("Please input x[%d] value: ", i);
	    scanf("%d", x+i);	
	}
	
	for (i=0; i<5; i++) {
		printf("x[%d] = %d \n",i,x[i]);
	}
	printf("\n");
	
	getchar();
	return 0;
}

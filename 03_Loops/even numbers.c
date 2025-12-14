/*
WAP: Print all even numbers 1 to 100
Date:
*/

#include<stdio.h>

int main()
{
	int i=1;
	printf("The even numbers 1 to 100 is: \n");
	for(i=1; i<=100; i++){
		if(i%2==0){
			printf("%d\n", i);
		}
	}
	return 0;
}


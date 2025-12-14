/*
WAP: Pattern print Type 3
1
1 2
1 2 3
1 2 3 4
Date: 22-aug-2025
*/

#include<stdio.h>

int main()
{
	int i=1, j=1;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}


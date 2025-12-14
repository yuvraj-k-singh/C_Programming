/*
WAP: Pattern print Type 5
A
A B
A B C
A B C D
Date: 22-aug-2025
*/

#include<stdio.h>

int main()
{
	int i, j;
	
	for(i='A';i<='D';i++){
		for(j='A';j<=i;j++){
			printf("%c", j);
		}
		printf("\n");
	}
	return 0;
}


/*
WAP: Pattern print Type 6
A
B B
C C C
D D D D
Date: 22-aug-2025
*/

#include<stdio.h>

int main()
{
	int i, j;
	
	for(i='A';i<='D';i++){
		for(j='A';j<=i;j++){
			printf("%c", i);
		}
		printf("\n");
	}
	return 0;
}


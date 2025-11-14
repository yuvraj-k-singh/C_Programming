/*
WAP: Print AP 100, 97, 94,.....positive n
Date:
*/

#include<stdio.h>

int main()
{
	int i=1, a=100;
	for(i=1; i<=34; i++){
		printf("%d\n", a);
		a-=3;
	}
	return 0;
}

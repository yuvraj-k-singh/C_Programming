/*
WAP: Array of structure
Date: 18-nov-2025
*/

#include<stdio.h>

typedef struct book{
	char name[20];
	int price;
} book;

int main()
{
	book arr[3];
	int i;
	printf("Enter the details of book: \n");
	for(i=0; i<3; i++){
		printf("\n------Book %d------\n", i+1);
		printf("Enter the book name: ");
		scanf("%s", arr[i].name);
		printf("Enter the price: ");
		scanf("%d", &arr[i].price);
	}
	printf("\n--------Book details--------\n");
	printf("S.no\t Name\t\t\t Price\n");
	for(i=0; i<3; i++){
	    printf("%d\t %s\t\t\t %d\n", i+1, arr[i].name, arr[i].price);
	}
	return 0;
}


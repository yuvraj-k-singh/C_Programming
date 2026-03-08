/*
WAP: Book Structure Management
Date: 20-nov-2025
*/

#include<stdio.h>
#include<string.h>

struct Book{
	char title[30];
	char author[30];
	int price;
} book[3];

int main()
{
	int i;
	printf("Enter details for books: \n");
	for(i=0; i<3; i++){
		printf("\n----Book %d Details----\n", i+1);
		printf("Title: ");
		scanf("%s", book[i].title);
		printf("Author: ");
		scanf("%s", book[i].author);
		printf("Price: ");
		scanf("%d", &book[i].price);
	}
	
	int max_price = book[0].price, min_price = book[0].price;
	char max_book[30], min_book[30];
	strcpy(max_book, book[0].title);
	strcpy(min_book, book[0].title);
	
	for(i=0; i<3; i++){
		if(max_price<book[i].price){
			max_price = book[i].price;
			strcpy(max_book, book[i].title);
		}
		if(min_price>book[i].price){
			min_price = book[i].price;
			strcpy(min_book, book[i].title);
		}
	}
	
	printf("\n------Book Details------\n");
	printf("Max price: %d | Book title: %s\n", max_price, max_book);
	printf("Min price: %d | Book title: %s\n", min_price, min_book);
	return 0;
}


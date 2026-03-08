/*
WAP: Compare objects using function
Date: 19-nov-2025
*/

#include<stdio.h>
#include<string.h>

struct student{
	int rollno;
	char name[20];
	char dep[20];
	char course[20];
	int year_of_joining;
}s1, s2;

void check(struct student s1, struct student s2);

void check(struct student s1, struct student s2){
	if(strcmp(s1.dep, s2.dep) == 0){
		printf("%s and %s has same department!", s1.name, s2.name);
		return;
	} else{
		printf("%s and %s has not same department!", s1.name, s2.name);
		return;
	}
}

int main()
{
	s1.rollno = 1389;
	s1.year_of_joining = 2024;
	strcpy(s1.course, "BTECH");
	strcpy(s1.dep, "CSE");
	strcpy(s1.name, "Yuvraj Kumar");
	
	s2.rollno = 1228;
	s2.year_of_joining = 2024;
	strcpy(s2.course, "BTECH");
	strcpy(s2.dep, "CSE");
	strcpy(s2.name, "Payal Patidar");
	check(s1, s2);
	return 0;
}


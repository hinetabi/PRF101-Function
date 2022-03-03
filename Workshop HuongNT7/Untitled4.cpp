#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define NAMELEN 30
#define IDLEN 8
#define SIZE 2

struct Student{
	char id[IDLEN+1];
	char name[NAMELEN+1];
	int age;
};
void display (Student students[], int size);
void getstr(char msg[], char s[], int max);
int getInt(char msg[], int min, int max);
int main(){
	char s[10];
//	getstr("Enter string: ", s, 10);
//	printf("\ns = %s", s);
	Student students[SIZE];
	int i;
	for (i = 0; i < SIZE; i++){
		char id[IDLEN+1];
		char name[NAMELEN+1];
		int age;
		getstr("Enter Name: ", name, NAMELEN);		
		getstr("Enter ID: ", id, IDLEN);		
		age = getInt("Enter age: ", 10,30);
		strcpy(students[i].id, id);  
		strcpy(students[i].name, name);
		students[i].age = age;
	}
	display(students, SIZE);
	
	return 0;
}
void getstr(char msg[], char s[], int max){		
	char c;
	int i = 0;
	printf("%s", msg);

	while ((c = getchar()) != '\n')
		if (i<max)
			s[i++] = (char) c;
	s[i] = '\0';	
}

void display (Student students[], int size){
	int i =0;
	printf("List of student: \n");
	printf("%-16s%-12s%-5s\n", "Student Name", "ID", "Age");
	for (i = 0; i<size; i++){
		printf("%-16s%-12s%5d\n",students[i].name, students[i].id, students[i].age);
	}
}
int getInt(char msg[], int min, int max)
{
	int rc, result;
	char after;
	do
	{
		printf(msg);
		rc = scanf("%d%c", &result, &after);
		if(rc == 0) continue;
		else if(after != '\n')
		{
			continue;
		}
		else if(result < min || result > max)
		{
			continue;
		}
		else break;
	}while(true);
	return result;	
}


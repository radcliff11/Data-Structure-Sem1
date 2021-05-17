#include <stdio.h>
#include <string.h>
typedef struct{
char name[20];
int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
Person man[3], middle;
readData(man);
middle = findMiddleAge(man);
printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
return 0;
}
void readData(Person *p)
{
 /* Write your program code here */
 int i,x;
 char *token;
 char string[100][100];
	for (i=1;i<=3;i++){
	 printf("Enter person %d:\n",i);
	 scanf("%s %d", &p[i].name,&p[i].age);
     printf("%d %s %d \n",i,p[i].name,p[i].age);
	}

}
Person findMiddleAge(Person *p)
{
 /* Write your program code here */
}

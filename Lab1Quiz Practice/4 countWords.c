#include <stdio.h>
#include <string.h>
int countWords(char*s);
int main()
{
char str[50];
printf("Enter the string: \n");
gets(str);
printf("countWords(): %d", countWords(str));
return 0;
}
int countWords(char *s)
{
/* Write your code here */
int i=0;
int count;
if (s==NULL){return 0;}
while(*s){
    if(*s == ' '){count++;}
    s++;
}

return count;
}
//


#include <stdio.h>
int compareStr(char*s, char*t);
int main()
{
char a[80], b[80];
printf("Enter the first string: \n");
gets(a);
printf("Enter the second string: \n");
gets(b);
printf("compareStr(): %d\n", compareStr(a,b));
return 0;
}
int compareStr(char*s, char*t)
{
int i=0,x=0;/* Write your code here */
if((int)s[0] !=(int)t[0]){
   return ((int)s[0]-(int)t[0]);
}
else{
 while(t[x]!='\0'){x++;
 //printf("%d\n",x);
 }
   // printf("%d", (int)t[x-1]);
    return (int) t[x-1];
 }
}


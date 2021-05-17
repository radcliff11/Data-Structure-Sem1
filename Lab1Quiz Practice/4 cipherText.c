#include <stdio.h>
#include <string.h>
#include <ctype.h>


void cipher(char*s);
void decipher(char*s);
int main()
{
char str[80];
printf("Enter the string: \n");
gets(str);
printf("To cipher: %s -> ", str);
cipher(str);
printf("%s\n", str);
printf("To decipher: %s -> ", str);
decipher(str);
printf("%s\n", str);
return 0;
}
void cipher(char *s)
{
/* Write your program code here */
int i =0;
while(*s){
    if(isdigit(s[i])){

    }
    else{
    s[i]= ((char) ((int)s[i]+1) );
    }
    s++;
}
}
void decipher(char *s)
{
/* Write your program code here */
int i =0;
while(*s){
    if(isdigit(s[i])){

    }
    else{
    s[i]= ((char) ((int)s[i]-1) );
    }
    s++;
}
}

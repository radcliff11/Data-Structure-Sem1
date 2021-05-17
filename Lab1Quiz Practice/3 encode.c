#include <stdio.h>
#include <string.h>
typedef struct{
char source;
char code;
}Rule;
void encodeChar(Rule table[5], char *s, char *t);
int main()
{
char s[80], t[80];
Rule table[5] = {'a','d', 'b','z', 'z','a', 'd','b', '\0','\0'};
printf("Source string: \n");
gets(s);
encodeChar(table,s,t);
printf("Encoded string: %s\n", t);
return 0;
}

void encodeChar(Rule table[5], char *s, char *t)
{
 /* Write your program code here */
 int i;
 int x;
 int count =0;
 for (i=0;i<=(strlen(s));i++){
    for(x=0;x<5;x++){
        if(table[x].source == s[i]){
        t[i]=table[x].code;
        break;
        }
        else{
              t[i]=s[i];
        }
        }
    }

}

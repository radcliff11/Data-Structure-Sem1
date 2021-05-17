#include <stdio.h>
char *stringncpy(char *s1, char *s2, int n);
int main()
{
   char targetStr[40], sourceStr[40], *target;
   int length;   
   printf("Enter the string: \n");
   gets(sourceStr);
   printf("Enter the number of characters: \n");
   scanf("%d", &length);   
   target = stringncpy(targetStr, sourceStr, length);
   printf("stringncpy(): %s\n", target);
   return 0;
}
char *stringncpy(char *s1, char *s2, int n)
{
   int k, h;
    
   for (k = 0; k < n; k++)   {
      if (s2[k] != '\0') 
         s1[k] = s2[k];
      else 
         break;
   }
   s1[k] = '\0';
   for (h = k; h < n; h++) // may not be needed
      s1[h] = '\0';  		
   return s1;
}
/* another version - using pointer */
/*
char *stringncpy(char *s1, char *s2, int n)
{
   int k, h;
    
   for (k = 0; k < n; k++)   {
      if (*(s2+k) != '\0') 
         *(s1+k) = *(s2+k);
      else 
         break;
   }
   *(s1+k) = '\0';
   for (h = k; h < n; h++) 
      *(s1+h) = '\0';  		
   return s1;
}
*/
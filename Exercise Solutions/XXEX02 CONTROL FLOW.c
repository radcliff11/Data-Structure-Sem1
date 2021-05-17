#include <stdio.h>

int main()
{

   return 0;
}

void computeSeries(){
   int n, denominator = 1;
   float x, result = 1.0, numerator = 1.0;

   printf("Enter x: \n");
   scanf("%f", &x);
   for (n = 1; n <= 10; n++)  
   {
      denominator *= n;
      numerator *= x;
      result += numerator/denominator;
   }
   printf("Result = %.2f\n",  result);
}


void printPattern(){
   int row, col, height;
   int num = 0;
   printf("Enter the height: \n");
   scanf("%d", &height);
   printf("Pattern: \n");
  
   for (row = 0; row < height; row++) 
   {
      for (col = 0; col < row+1; col++) 	   // print numbers
         printf("%d",num+1);
      num = (num + 1) % 3;					// print up to number 3
      printf("\n");
   }

}


void printAverage(){
   int total, count, lines, input;
   double average;
   int i;
	
   printf("Enter number of lines: \n");
   scanf("%d", &lines);
   for (i = 0; i < lines; i++) {
      total=0; count=0;
      printf("Enter line %d (end with -1): \n", i+1);
      scanf("%d", &input);
      while (input != -1)
      {
         total += input;
         count++; 
         scanf("%d", &input);
      }
      average = (double)total/(double)count;
      printf("Average = %.2f\n", average);
   }
}

void computeGrade(){
   int studentNumber = 0, mark;		
	
   printf("Enter Student ID: \n");
   scanf("%d", &studentNumber);
   while (studentNumber != -1) 
   {
      printf("Enter Mark: \n");
      scanf("%d", &mark);
      switch ((mark+5) / 10) {
         case 10:
         case  9:
         case  8:	printf("Grade = %c\n", 'A');
            break;
         case  7:	printf("Grade = %c\n", 'B');
            break;
         case  6:	printf("Grade = %c\n", 'C');
            break;
         case  5:	printf("Grade = %c\n", 'D');
            break;
         default:	printf("Grade = %c\n", 'F');
      }
      printf("Enter Student ID: \n");
      scanf("%d", &studentNumber);		
   }
}

void computeNetPay(){
   int hours;
   float tax, grossPay, netPay;
		
   printf("Enter hours of work: \n");
   scanf("%d", &hours);	
   if (hours <= 40)	
      grossPay = hours*6;
   else 
      grossPay = 40*6 + (hours-40)*9;
   if (grossPay > 0 && grossPay <= 1000)
      tax = grossPay*0.1;
   else if (grossPay > 1000 && grossPay <= 1500)
      tax = 1000*0.1 + (grossPay-1000)*0.2;
   else 
      tax = 1000*0.1 + 500*0.2 + (grossPay-1500)*0.3;		
   netPay = grossPay - tax;		
   printf("Gross pay = %.2f\n", grossPay);
   printf("Tax = %.2f\n", tax);
   printf("Net pay = %.2f\n", netPay);	
}

void computeSalaryGrade(){
    int salary, merit;
               
   printf("Enter the salary: \n");
   scanf("%d", &salary);
   printf("Enter the merit: \n");   
   scanf("%d", &merit); 
   if (salary>799 || (salary>=700 && merit>=20))         
      printf("The grade: A\n");
   else if (salary>649||(salary>=600 && merit>=10))        
      printf("The grade: B\n");
   else if (salary>=500)
      printf("The grade: C\n");
}

void computeCarPrice(){
   int list, coe = 0, cat;
   double discounted, luxury = 0, gst, total;
            
   printf("Please enter the list price: \n");
   scanf("%d", &list);   
   printf("Please enter the category: \n");
   scanf("%d", &cat);   
   if (list <= 0) {
      printf("Invalid price.\n");
      return 0;
   }
   if (cat < 1 || cat > 4) {
      printf("Invalid category.\n");
      return 0;
   }   
   discounted = list * 0.9;
   if (discounted > 100000)
      luxury = discounted * 0.1;
   gst = discounted * 0.03;   
   switch (cat) {
      case 1:
         coe = 70000;
         break;
      case 2:
         coe = 80000;
         break;
      case 3:
         coe = 23000;
         break;
      case 4:
         coe = 600;
   }
   total = discounted + luxury + gst + coe;
   printf("Total price is $%.2f", total);
}

void countChars(){
   int ccount = 0, dcount = 0;
   char ch;
   printf("Enter your characters (# to end): \n");
   scanf("%c",&ch);
   while ( ch != '#') {
      if (ch >= '0' && ch <= '9')  
         dcount++;
      else if ((ch >= 'A' && ch <= 'Z')  ||  (ch >= 'a' && ch <= 'z'))
         ccount++;
      scanf("%c",&ch);
   }
   printf("The number of digits: %d\n", dcount);
   printf("The number of letters: %d\n", ccount);
}
























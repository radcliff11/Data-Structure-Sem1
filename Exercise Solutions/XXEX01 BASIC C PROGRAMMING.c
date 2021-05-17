
 #include <stdio.h>
#include <math.h>
int main() 
{
   return 0;
}

//V EASY
void linearSystem(){
   float a1,b1,c1,a2,b2,c2;
   float x,y;
      
   printf("Enter the values for a1, b1, c1, a2, b2, c2: \n");
   scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
//   if (fabs(a1*b2 - a2*b1) >=  0.0001)
//   {
      /* assuming (a1*b2 - a2*b1) != 0 */
   x = (b2*c1 - b1*c2) / (a1*b2 - a2*b1);
   y = (a1*c2 - a2*c1) / (a1*b2 - a2*b1);
   printf("x = %.2f and y = %.2f\n", x, y);
//   }
//   else
//      printf("Unable to compute - denominator is zero!");	
	
}


void temperature()}{
   float fahrenheit, celsius;

   printf("Enter the temperature in degree F: \n");
   scanf("%f", &fahrenheit);
   celsius = (5.0/9.0)*(fahrenheit - 32);
   printf("Converted degree in C: %.2f\n", celsius);
}

void power(){
   float current, resistance, power;
   
   printf("Enter the current: \n");
   scanf("%f", &current);
   printf("Enter the resistance: \n");
   scanf("%f", &resistance);
   power = current*current*resistance;
   printf("The power loss: %.2f\n", power);
   return 0;
}


void cylinder(){
	//#define PI 3.1416 define this first at the top
   float radius, height, volume, surfaceArea; 
        
   printf("Enter the radius: \n");
   scanf("%f", &radius);
   printf("Enter the height: \n");
   scanf("%f", &height);
   volume = PI * radius * radius * height;
   surfaceArea = 2.0 * PI * radius * (radius + height);
   printf("The volume is: %.2f\n", volume);
   printf("The surface area is: %.2f\n", surfaceArea);
}

void speed(){
	
   double speed, distance, time;
   
   printf("Enter distance (in km): \n");
   scanf("%lf", &distance);
   printf("Enter time (in sec): \n");
   scanf("%lf", &time);
   speed = distance/time;
   printf("The speed is %.2f km/sec\n", speed);
}

void distance(){
   double x1, y1, x2, y2, distance;

   printf("Enter first point x1 y1: \n");
   scanf("%lf", &x1);
   scanf("%lf", &y1);
   printf("Enter second point x2 y2: \n");
   scanf("%lf", &x2);
   scanf("%lf", &y2);
   distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
   printf("The distance is %.2f\n", distance);
}





#include <stdio.h>
#include <stdlib.h>

//this function returns circumference of a circle

float Circum_Ference ()
{
  float pi = 3.1456 ;
  float radius;
  float diameter;
  float circum;
  int digit =1000000;
  char c;

  printf("Enter radius of circle:\t");
  scanf("%f", &radius);
  diameter=(2* radius);
  circum=(pi* diameter);

  if (radius <=0)
  {
    printf("invalid value  entered\n");
    }
    
  else if (radius > digit)
  {
      printf("this value  %f is out of range\n",radius);
  }
  
    else if(radius <= digit)
    {
      printf("The circumfrence is %f\n",circum);
      return circum;
    }
  else 
  {
    printf("unapplicable value\n" );
  }
    
}

//main function starts here

int main(void) {

  
  
      Circum_Ference();
      
  printf("program terminated");
  
  
  
  return 0 ;
}
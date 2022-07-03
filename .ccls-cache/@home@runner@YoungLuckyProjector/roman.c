#include <stdio.h>
#include <string.h>

struct deci_Rom
  {
  
  int NumErals;
  char RoMaN[10];
  
  };


int main ()
{
  struct deci_Rom diGits1; //holds 1
  diGits1.NumErals = 1;
  strcpy(diGits1 .RoMaN,"I");

  struct deci_Rom diGits5;//holds 5
  diGits5.NumErals=5;
  strcpy(diGits5 .RoMaN,"V");

 
  struct deci_Rom diGits10;//holds 10
  diGits10.NumErals=10;
  strcpy(diGits10 .RoMaN, "X");

  struct deci_Rom diGits50;//holds 50
  diGits50.NumErals=50;
  strcpy(diGits50 .RoMaN, "L");
  
  struct deci_Rom diGits100;//holds 100
  diGits100.NumErals=100;
  strcpy(diGits100 .RoMaN, "C");

  struct deci_Rom diGits500;//holds 500
  diGits500.NumErals=500;
  strcpy(diGits500 .RoMaN, "D");

  struct deci_Rom diGits1000;//holds 1000
  diGits1000.NumErals=1000;
  strcpy(diGits1000 .RoMaN, "M");

  printf("%s\t",diGits1.RoMaN);
  printf("%d\n",diGits1.NumErals);

  printf("%s\t",diGits5.RoMaN);
  printf("%d\n",diGits5.NumErals);

  printf("%s\t",diGits10.RoMaN);
  printf("%d\n",diGits10.NumErals);

  printf("%s\t",diGits50.RoMaN);
  printf("%d\n",diGits50.NumErals);

  printf("%s\t",diGits100.RoMaN);
  printf("%d\n",diGits100.NumErals);

  printf("%s\t",diGits500.RoMaN);
  printf("%d\n",diGits500.NumErals);


  
  printf("%s\t",diGits1000.RoMaN);
  printf("%d\n",diGits1000.NumErals);




  return 0;
  }
      
      
  

  

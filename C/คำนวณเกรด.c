#include <stdio.h>
int main()
{
  int M;
  int F;
  int HW;
    printf("Mid-Term is  ");
    scanf("%d",&M);
    printf("Final is   ");
    scanf("%d",&F);
    printf("HomeWork is  ");
    scanf("%d",&HW);
  printf("Total = %d\n",(M*40/100)+(F*50/100)+(HW*10/100));
  int x;
 printf("Total is ");
 scanf("%d",&x); 
  {
    if  (90<=x)
    if  (x<=100)
      printf("Your Grad A");
  }
  {
    if  (85<=x)
    if  (x<90)
      printf("Your Grad B+"); 
  }
  {
    if  (80<=x)
    if  (x<85)
      printf("Your Grad B"); 
  }
  {
    if  (70<=x)
    if  (x<80)
      printf("Your Grad C+");     
  }
  {
    if  (60<=x)
    if  (x<70)
      printf("Your Grad C");      
  }
  {
    if  (55<=x)
    if  (x<60)
      printf("Your Grad D+");   
  }
  {
    if  (50<=x)
    if  (x<55)
      printf("Your Grad D");       
  }
  {
    if  (x<50) 
      printf("Your Grad F");  
  }    
}

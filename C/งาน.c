#include<stdio.h>

int main(void)
{
  printf(" \t\t\t      MENU \n");
  printf(" 1.Chicken Set     [A] \t\t\t  259 B\n");
  printf(" 2.Beef Set        [B] \t\t\t  359 B\n");
  printf(" 3.Fish Set        [C] \t\t\t  279 B\n");
  printf(" 4.Pork Set        [D] \t\t\t  259 B\n");
  printf(" 5.American Set    [E] \t\t\t  219 B\n");
  printf(" 6.Italian Set     [F] \t\t\t  229 B\n");
  printf(" 7.Thai Set        [G] \t\t\t  209 B\n");
  printf(" 8.Japan Set       [H] \t\t\t 2599 B\n");
  printf(" 9.Wagyu Beef(200g)[I] \t\t\t 3700 B\n");
  printf("10.God Set         [J] \t\t\t 9999 B\n\n");
  printf(" \t\t*********Free Water*********\n\n");
char menu;
int A=259;
int B=359;
int C=279;
int D=259;
int E=219;
int F=229;
int G=209;
int H=2599;
int I=3700;
int J=9999;
int M;
{printf("Food you want? > ");
menu=getchar();
{
  if(menu=='A'||menu=='a'){
  printf("\n\t1.Chicken Set 259 B\n\n");
  printf("\t-Steak Chicken BBQ Sauce\n");
  printf("\t-Salad\n");
  printf("\t-French Fries\n");
  printf("\nYour amount >  ");
  scanf("%d",&M);
  if(M<A)
  {
   printf("\nNot Enough Money!!"); 
  }
  if(M>=A)
  {
  printf("\nTorn > %d\n",M-A);
  printf("\nThank You");
  printf("\nPlease wait...");}
  }
  }
{
  if(menu=='B'||menu=='b'){
  printf("\n\t2.Beef Set 359 B\n\n");
  printf("\t-Tomahawk Steak \n");
  printf("\t-French Fries\n");
  printf("\t-Salad\n");
  printf("\nYour amount >  ");
  scanf("%d",&M);
  if(M<B)
  {
   printf("\nNot Enough Money!!"); 
  }
  if(M>=B)
  {
  printf("\nTorn > %d\n",M-B);
  printf("\nThank You");
  printf("\nPlease wait...");}
  }
  }
{
  if(menu=='C'||menu=='c'){
  printf("\n\t3.Fish Set 279 B\n\n");
  printf("\t-Steak Fish\n");
  printf("\t-Salad\n");
  printf("\t-French Fries\n");
  printf("\nYour amount >  ");
  scanf("%d",&M);
  if(M<C)
  {
   printf("\nNot Enough Money!!"); 
  }
  if(M>=C)
  {
    printf("\nTorn > %d\n",M-C);
    printf("\nThank You");
    printf("\nPlease wait...");}
  }
  }
{
  if(menu=='D'||menu=='d'){
  printf("\n\t4.Pork Set 259 B\n\n");
  printf("\t-Steak Pork\n");
  printf("\t-French Fries\n");
  printf("\t-Salad\n");
  printf("\nYour amount >  ");
  scanf("%d",&M);
  if(M<D)
  {
   printf("\nNot Enough Money!!"); 
  }
  if(M>=D)
  {
    printf("\nTorn > %d\n",M-D);
    printf("\nThank You");
    printf("\nPlease wait...");}
  }
  }
{
  if(menu=='E'||menu=='e'){
  printf("\n\t5.American Set 219 B\n\n");
  printf("\t-Corn dogs\n");
  printf("\t-Deep fried… anything\n");
  printf("\t-Red velvet cake \n");
  printf("\nYour amount >  ");
  scanf("%d",&M);
  if(M<E)
  {
   printf("\nNot Enough Money!!"); 
  }
  if(M>=E)
  {
  printf("\nTorn > %d\n",M-E);
  printf("\nThank You");
  printf("\nPlease wait...");}
  }
  }
{
  if(menu=='F'||menu=='f'){
  printf("\n\t6.Italian Set 229 B\n\n");
  printf("\t-Italian Pizza\n");
  printf("\t-Italian Pasta\n");
  printf("\t-Risotto\n");
  printf("\nYour amount >  ");
  scanf("%d",&M);
  if(M<F)
  {
   printf("\nNot Enough Money!!"); 
  }
  if(M>=F)
  {
    printf("\nTorn > %d\n",M-F);
    printf("\nThank You");
    printf("\nPlease wait...");}
  }
  }
{
  if(menu=='G'||menu=='g'){
  printf("\n\t7.Thai Set 209 B\n\n");
  printf("\t-Som Tum Tale Ruam Mid\n");
  printf("\t-Kai Opp \n");
  printf("\t-Ki Jiaw Size Big\n");
  printf("\nYour amount >  ");
  scanf("%d",&M);
  if(M<G)
  {
   printf("\nNot Enough Money!!"); 
  }
  if(M>=G)
  {
  printf("\nTorn > %d\n",M-G);
  printf("\nThank You");
  printf("\nPlease wait...");}
  }
  }
{
  if(menu=='H'||menu=='h'){
  printf("\n\t8.Japan Set 2599 B\n\n");
  printf("\t-King Crab\n");
  printf("\t-Udon Size Big\n");
  printf("\t-Premium Sushi\n");
  printf("\nYour amount >  ");
  scanf("%d",&M);
  if(M<H)
  {
   printf("\nNot Enough Money!!"); 
  }
  if(M>=H)
  {
  printf("\nTorn > %d\n",M-H);
  printf("\nThank You");
  printf("\nPlease wait...");}
  }
  }
{
  if(menu=='I'||menu=='i'){
  printf("\n\t9.Wagyu Beef(200g) 3700 B\n\n");
  printf("\t-Wagyu A5\n");
  printf("\nYour amount >  ");
  scanf("%d",&M);
  {
  if(M<I)
   printf("\nNot Enough Money!!"); 
  }
  if(M>=I)
  {
  printf("\nTorn > %d\n",M-I);
  printf("\nThank You");
  printf("\nPlease wait...");}
  }
  }
{
   if(menu=='J'||menu=='j'){
  printf("\n\t10.God Set 9999 B\n\n");
  printf("\t-Up To U\n");
  printf("\nYour amount >  ");
  scanf("%d",&M);
  {
  if(M<J)
   printf("\nNot Enough Money!!"); 
  }
  if(M>=J)
  {
  printf("\nTorn > %d\n",M-J);
  printf("\nThank You");
  printf("\nPlease wait...");}
  }
  }
}
}

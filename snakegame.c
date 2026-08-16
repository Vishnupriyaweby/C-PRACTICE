#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void draw(char ar[10][10],int head_i,int head_j,int fruit_i,int fruit_j){
  for(int i=0;i<10;i++){
    
    for(int j=0;j<10;j++){
      if(fruit_i==head_i && fruit_j==head_j)
         ar[i][j]='c';
       else if(i==head_i && j==head_j)
          ar[i][j]='H';
        else if(i==fruit_i && j==fruit_j)
          ar[i][j]='F';
        else
          ar[i][j]=' ';
      printf("|%c|",ar[i][j]);  
    }
    printf("\n");
  }}
 void fruitposition(int *fruit_i,int *fruit_j){
 *fruit_i=rand()%10;
  *fruit_j=rand()%10;
 }
 int main(){
  srand(time(0));
  char ar[10][10],move;
  int head_i=0,head_j=0,i,j,fruit_i=0,fruit_j=0,points=0;
   fruitposition(&fruit_i,&fruit_j);
  
  while(move!='s'){
    draw(ar,head_i,head_j,fruit_i,fruit_j);
   printf("Enter the direction to move the snake (r(right)/l(left)/d(down)/u(up)/s(stop)/n(new game)): ");
  scanf(" %c",&move);

  switch(move){
    case 'r':
      head_j++;
      break;
    case 'l':
      head_j--;
      break;
    case 'd':
      head_i++;
      break;
    case 'u':
      head_i--;
      break;
    case 's':
      printf("Game stopped by user.\n");
      break;
    case 'n':
    printf("\nStarting a new game...\n");
     fruitposition(&fruit_i,&fruit_j);
     head_i=0;
    default:
      printf("Invalid move!\n");
    }
      
   if(fruit_i==head_i && fruit_j==head_j){
        printf("\nYou ate the fruit! got 1 point\n");
        fruitposition(&fruit_i,&fruit_j);
         points++;
      }
   else if(head_i<0 || head_i>=10 || head_j<0 || head_j>=10){
      printf("Game Over! You hit the wall.\n");
      break;
    }
  }
  printf("Your score: %d\n", points);
   return 0;
 }
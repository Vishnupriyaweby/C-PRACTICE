#include<stdio.h>
#include<math.h>
void swap(int *a,int *b){
  *a^=*b;
  *b^=*a;
  *a^=*b;
  printf("%d %d",*a,*b);
} 
int main(){
int a=2;
int b=4;
swap(&a,&b);
return 0;
}
 
#include<stdio.h>
#include<stdio.h>
 int main(){
  int ar[]={1,10,3,7},t=0,s=0;
  for(int i=0;i<4;i++){
    if(ar[i]>t)
      t=ar[i];
     
    if(ar[i]<ar[0])
       s=ar[i];
    }
  printf("Maximum: %d\nMinimum: %d",t,s);
  return 0;

 }
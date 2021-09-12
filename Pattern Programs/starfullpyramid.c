#include<stdio.h>
int main(){
  int i,j,k,rows,sp;
  printf("Enter the no of rows:");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++){
    for(sp=rows-i;sp>=1;sp--){
      printf("  ");
    }
    for(k=1;k<=(i*2)-1;k++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}




OUTPUT:

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

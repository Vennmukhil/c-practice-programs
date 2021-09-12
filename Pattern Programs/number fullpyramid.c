#include<stdio.h>
int main(){
  int i,j,rows,sp,n,col;
  printf("Enter the no of rows: ");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++){
    for(sp=rows-i;sp>=1;sp--){
      printf("  ");
    }
    col=(i*2)-1;
    n=i;
    for(j=1;j<=col;j++){
      if(j<i){
        printf("%d ",n++);
      }else if(j==i){
        printf("%d ",n--);
      }else{
        printf("%d ",n--);
      }
    }
    printf("\n");
  }
  return 0;
}

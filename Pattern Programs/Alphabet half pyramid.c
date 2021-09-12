#include<stdio.h>
int main(){
  char i,j,lastalph;
  printf("Enter the last alph");
  scanf("%c",&lastalph);
  for(i='A';i<=lastalph;i++){
    for(j='A';j<=i;j++){
      printf("%c ",i);  // i for same alph in each row & j for incremented alph
    }
    printf("\n");
  }
  return 0;
}


OUTPUT:

A
B B
C C C
D D D D
E E E E E

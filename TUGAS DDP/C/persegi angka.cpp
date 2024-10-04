#include <stdio.h>
 
int main(void)
{
  printf("## Program Bahasa C Persegi Angka ## \n");
  printf("==================================== \n\n");
 
  int besar_persegi,i,j;
 
  printf("Input besar persegi: ");
  scanf("%d",&besar_persegi);
 
  printf("\n");
 
  for(i=1; i<=besar_persegi; i++) {
    for(j=1; j<=besar_persegi; j++) {
      printf("%d ",i);
    }
    printf("\n");
  }
 
  return 0;
}

#include <stdio.h>
 
int main(void)
{
  printf("## Program Bahasa C Belah Ketupat Bintang ## \n");
  printf("============================================ \n\n");
 
  int lebar_belah_ketupat,i,j,k;
 
  printf("Input lebar belah ketupat: ");
  scanf("%d",&lebar_belah_ketupat);
 
  printf("\n");
 
  for(i=1;i<=lebar_belah_ketupat;i++) {
 
    for(j=1;j<=lebar_belah_ketupat-i;j++) {
      printf(" ");
    }
 
    for(k=1;k<=i;k++) {
      printf(" *");
    }
    printf("\n");
  }
 
  for(i=1;i<lebar_belah_ketupat;i++) {
 
    for(j=1;j<=i;j++) {
      printf(" ");
    }
 
    for(k=1;k<=lebar_belah_ketupat-i;k++) {
      printf(" *");
    }
    printf("\n");
  }
 
  return 0;
}

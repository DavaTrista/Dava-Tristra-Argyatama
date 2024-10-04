#include <stdio.h>
 
int main(void)
{
  printf("## Program Bahasa C Menghitung Luas Persegi ## \n");
  printf("============================================== \n\n");
 
  float sisi_persegi, luas;
 
  printf("Input panjang sisi persegi: ");
  scanf("%f",&sisi_persegi);
 
  luas = sisi_persegi * sisi_persegi;
 
  printf ("Luas persegi = %.2f \n",luas);
 
  return 0;
}

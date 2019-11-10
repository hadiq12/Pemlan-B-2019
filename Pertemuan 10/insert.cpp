#include <stdio.h>
int main(){
  int array[10];
  int n, i, j, temp;
  printf("Masukkan jumlah banyaknya data (maks 10): ");
  scanf("%d", &n);
  printf("Masukkan %d angka : ", n);
  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
  for (i = 1; i <= n; i++){
    j = i;
    while(j > 0 && array[j-1] > array[j]){
      temp = array[j];
      array[j] = array[j-1];
      array[j-1] = temp;
      j--;
    }
  }
  
  printf("\n====================================\n");
  
  printf("Hasil dari sorting :\n");
  for (i = 0; i <= n-1; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
  
  return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



//Menggunakan fungsi Rekursif//

 
 int pangkat (int m,int n)
 {
 	if (n==0){
 		return 1 ;
	 }
	 else {
	 	return m * pangkat (m,n-1);
	 }
	 
}

	int main(int argc, char *argv[]) {
	int m,n;
	int hasil=1;
	int i=0;
	

	
	printf("Masukan bilangan yang ingin dipangkat :");
	scanf("%d",&m);
	printf("Masukan bilangan pangkat :");
	scanf("%d",&n);
	printf("Hasil dari bilangan %d pangkat %d cara rekursif adalah :  %d \n",m,n,pangkat (m,n));
	
	//menggunakan fungsi interatif//
	for (i=1; i<=n; i++){
		hasil=hasil*m;
	}

	printf("Hasil dari cara interatif adalah : %d\n",hasil );
	scanf("%d");
	

	return 0;
	
}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	char nama[15];
	char NPM[20];
	char jurusan[20];
	char tempat_lahir[20];
	char doswal[20];
	char semester[10];
	int sks;
	
	
	printf("Masukan Biodata Diri\n\n");

	printf("Nama : ");
	gets(nama);
	
	printf("NPM : ");
	gets(NPM);
	
	printf("Jurusan : " );
	gets(jurusan);
	
	printf("Tempat Lahir : " );
	gets(tempat_lahir);

	printf("Nama Dosen Wali : " );
	gets(doswal);
		
	printf("Semester : " );
	gets(semester);
	
	
	printf("Sks :");
	scanf("%d",&sks);
	
	
	system("cls");
	printf("Biodata saya :\n");
	printf("Nama 	: %s\n",nama);
	printf("NPM	: %s\n",NPM);
	printf("Jurusan	: %s\n",jurusan);
	printf("Tempat Lahir	: %s\n",tempat_lahir);
	printf("Nama Dosen Wali	: %s\n",doswal);
	printf("Semester	: %s\n",semester);
	printf("SKS	: %d\n",sks);
	
	
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa{
	char nama[20];
	float nilai[10];
	int matkulskrg[10];
	float ipk;
};

int main(int argc, char *argv[]){
 
	char nama_matkul[10][25]={"Statkom","Belneg","Metnum","Sisop"};
	char nilai_sks[10]={3,4,4,3,};
	struct mahasiswa mhs[10];

	int loop=1, loop2=0, menu, in_mk;
	int i=0, j=0, a=0, b=0;
	float total_IP=0;
	float total_sks=0;

	
	while (loop==1){
	printf("===================================\n");
	printf("            Data Mahasiswa         \n");
	printf("===================================\n\n");
		printf("Menu : \n");
		printf("1. Memasukan Data Mahasiswa \n");
		printf("2. Lihat Data Mahasiswa \n");
		printf("3. Reset tampilan \n");
		printf("Input : ");
		scanf("%d",&menu);
	
		
		switch(menu){
			case 1: 
			{
				j=0;
				loop2=0;
				printf("Input Nama Mahasiswa : ");
				scanf("%s",&mhs[i].nama);
				while(loop2<4){
					printf("Pilihan matkul ke - %d : ",j+1);
					printf("\n\t1.Stakom\n\t2.Belneg\n\t3.Metnum\n\t4.Sisop\n\t");
					scanf("%d",&mhs[i].matkulskrg[j]);	
					mhs[i].nilai[j] = rand() %3+2;
					j++;
					loop2++;
				}
				for(a=0;a<j;a++){
					total_IP		= total_IP+ ((mhs[i].nilai[a])*(nilai_sks[mhs[i].matkulskrg[a]]));
					total_sks		= total_sks+ nilai_sks[mhs[i].matkulskrg[a]];
				}
				mhs[i].ipk=total_IP/total_sks;
				i++;
				system("cls");
			}
				break;
			case 2: 
			{
				printf("Data Mahasiswa	 \n");
				for(a=0;a<i;a++){
					printf("Nama		: %s\n",mhs[a].nama);
					for(b=0;b<4;b++){
					printf("Mata kuliah %s Mendapatkan nilai : %f \n",nama_matkul[mhs[a].matkulskrg[b]-1],mhs[a].nilai[b]);
					}
					printf("IPK			: %f\n",mhs[a].ipk);
					
				}
				
			}
				break;
			default:
				system("pause");
				system("cls");
				break;
				
		}
		
	
	}
	
	
	
	
	
	
	
	return 0;
}

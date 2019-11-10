#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

main(){
	int data[10] ={1,3,5,7,9,11,13,15,17,19};
	int akhir, puncak, x, src, ketemu=0;
	float pos;
	int pilih;
	
	akhir=0;
	puncak=7;
	
	printf("Data yang Dicari : ");
		scanf("%i",&src);

do{
	pos=(float)((src-data[akhir])/(data[puncak]-data[akhir]))*(puncak-akhir)+akhir;
	x=floor(pos);
	if(data[x]==src){
		ketemu=1;
		break;
	}
	
	if(data[x]>src) puncak=x-1;
	else if(data[x]<src)
		akhir=x+1;

  }
  while(src>=data[akhir] && src<=data[puncak]);
  if(ketemu==1) printf("Data ada dalam urutan dan terdapat pada indeks ke-%d",x);
  else printf("Data tidak ada dalam urutan");
  

	getch();
}

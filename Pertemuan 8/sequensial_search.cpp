#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>

main(){ 
    int arr[10]={24,17,18,15,22,26, 13,21, 16, 28}; 
    int ketemu; 
    int cari; 
    int i; 
    printf("Masukkan data yang dicari = "); 
    scanf("%d",&cari); 
    i=0; 
    ketemu=0; 
    while (i<10 && ketemu!=1){ 
        if (arr[i]==cari){ 
        ketemu=1; 
        }else{ 
            i++; 
        } 
    } 
    if(ketemu==1){ 
        printf("Data %d terdapat pada kumpulan data\n",cari); 
    }else{ 
        printf("Data %d tidak terdapat pada kumpulan data\n",cari); 
    } 
}

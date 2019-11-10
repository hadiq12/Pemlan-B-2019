#include <stdio.h> 
#include <stdlib.h> 
    int main(){ 
    int arr[10] = {1,3,5,7,9,11,13,15,17,19}; 
    int i,j,k; 
    int cariData,flag; 
    printf("Masukkan data yang ingin dicari = "); 
    scanf("%d",&cariData); 
    i = 0; j = 9;flag = 0; 
        while((flag == 0) && (i<=j)){ 
            k = (int)(i + j) / 2; 
            if(arr[k] == cariData){ 
            flag = 1; 
        } 
        else{ 
            if(arr[k] > cariData){ 
                j = k - 1; 
            } 
            else{ 
                i = k + 1; 
            } 
        } 
    } 
    if(flag==1){ 
        printf("Data %d terdapat pada kumpulan data\n",cariData ); 
    }else{ 
        printf("Data %d tidak terdapat pada kumpulan data\n",cariData ); 
    } 
}

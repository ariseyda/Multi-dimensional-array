#include<stdio.h>

//Çok boyutlu array leri parametre olarak fonksiyona gönderme.
//Send a multi-dimensional array as a parameter to the function

void print_array(int matris[][5],int size);

int main(){
	
	int array1[3][5];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			scanf("%d",&array1[i][j]);
		}
		
	}
	
    print_array(array1,3);
	
	return 0;
	
}

void print_array(int matris[][5],int size){
	
	int i,j;
	
	for(i=0;i<size;i++){
		for(j=0;j<5;j++){
			printf("%d ",matris[i][j]);
		}
		
		printf("\n");
	}
	
}

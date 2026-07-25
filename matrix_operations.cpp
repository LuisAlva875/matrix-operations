#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	
	int n, m, aux, aux1;
	
	printf("Filas? ");
	scanf("%d",&n);
	
	printf("Columnas? ");
	scanf("%d",&m);
	
	int **A,**B, **C,**D, **E;
	int cont=0;
	
	A=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
	A[i]=(int*)malloc(m*sizeof(int));
	
	B=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
	B[i]=(int*)malloc(m*sizeof(int));
	
	C=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
	C[i]=(int*)malloc(m*sizeof(int));
	
	D=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
	D[i]=(int*)malloc(m*sizeof(int));
	
	E=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
	E[i]=(int*)malloc(m*sizeof(int));
	
	srand(time(NULL));
	
	for(int i=0; i<n;i++)
	for(int j=0; j<m;j++)
	A[i][j]=rand()%10;
	
	for(int i=0; i<n;i++)
	for(int j=0; j<m;j++)
	B[i][j]=rand()%10;
	
	printf("\n");
	printf("Matriz A : \n");
	
	for(int i=0; i<n;i++){
		printf("\n");
		for(int j=0; j<m;j++)
		printf("\t%d", A[i][j]);
	}
	
	printf("\n");
	printf("\n");
	printf("Matriz B : \n");
	
	for(int i=0; i<n;i++){
		printf("\n");
		for(int j=0; j<m;j++)
		printf("\t%d", B[i][j]);
	}
	printf("\n");	
	
	for(int i=0; i<n;i++)
	for(int j=0; j<m;j++)
	C[i][j]=A[i][j]+B[i][j];
	
	for(int i=0; i<n;i++)
	for(int j=0; j<m;j++)
	D[i][j]=A[i][j]-B[i][j];

	for(int i=0; i<n;i++)
	for(int j=0; j<m;j++){
		E[i][j]=0;
		for(int k=0; k<m;k++)
		E[i][j]=E[i][j]+(A[i][k]*B[k][j]);
	}
		
	printf("\n");
	printf("Suma de matriz A + B: \n");
	
	for(int i=0; i<n;i++){
		printf("\n");
		for(int j=0; j<m;j++)
		printf("\t%d", C[i][j]);
	}
	printf("\n");
	
	printf("\n");
	printf("Resta de matriz A - B: \n");

	for(int i=0; i<n;i++){
		printf("\n");
		for(int j=0; j<m;j++)
		printf("\t%d", D[i][j]);
	}
	printf("\n");
	
	printf("\n");
	printf("Multiplicacion de matriz A * B: \n");
	for(int i=0; i<n;i++){
		printf("\n");
		for(int j=0; j<m;j++)
		printf("\t%d", E[i][j]);
	}

}

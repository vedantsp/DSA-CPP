#include <stdio.h>

int main() {
	//code
	
	int A[3][4] ={{1,2,3,4},{2,4,6,8},{1,3,5,7,}};
	
	int *B[3];
	
	int **c;
	int i,j;
	
	B[0]=(int *)malloc(4*sizeof(int));
	B[1]=(int *)malloc(4*sizeof(int));
	B[2]=(int *)malloc(4*sizeof(int));
	
	c=(int **)malloc(3*sizeof(int*));
	c[0]=(int *)malloc(4*sizeof(int));
	c[1]=(int *)malloc(4*sizeof(int));
	c[2]=(int *)malloc(4*sizeof(int));
	
	for(i=0; i<3; i++)
	{
	    for(j=0; j<4; j++)
	    printf("%d ", c[i][j]);
	    printf("\n");
	}
	
}

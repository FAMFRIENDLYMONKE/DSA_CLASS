#include <stdio.h>
int main(){
    //program to store matrix as sparse matrix
    int r,c,i,j;
    printf("Enter Size of Matrix:");
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for(i = 0; i < r; ++i)
        for(j = 0; j<c; ++j)    scanf("%d",&arr[i][j]);
    
    int count=0;
    for(i = 0; i < r; ++i)
        for(j = 0; j<c; ++j)    if(arr[i][j] != 0)      count++;

    int sparse[3][count+1];
    sparse[0][0] = r;
    sparse[1][0] = c;
    sparse[2][0] = count;

    int k = 1;
    for(i = 0; i<r; i++)
        for(j = 0; j<c; j++){
                if(arr[i][j] != 0){
                    sparse[0][k] = i;
                    sparse[1][k] = j;
                    sparse[2][k] = arr[i][j];
                    ++k;
                }
        }
    printf("\nSPARSE MATRIX\n");
    for(i = 0; i < count+1; ++i){
        for(j = 0; j<3; ++j){
            printf("%d ", sparse[j][i]);
        }
        printf("\n");
    }    

    printf("Sizeof Sparse: %d bytes\n",sizeof(sparse));
    printf("Sizeof matrix: %d bytes\n",sizeof(arr));
}
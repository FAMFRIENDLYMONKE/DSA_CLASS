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

    int sparse[count+1][3];
    sparse[0][0] = r;
    sparse[0][1] = c;
    sparse[0][2] = count;

    int k = 1;
    for(i = 0; i<r; i++)
        for(j = 0; j<c; j++){
                if(arr[i][j] != 0){
                    sparse[k][0] = i;
                    sparse[k][1] = j;
                    sparse[k][2] = arr[i][j];
                    ++k;
                }
        }
    printf("\nSPARSE MATRIX\n");
    for(i = 0; i < count+1; ++i){
        for(j = 0; j<3; ++j){
            printf("%d ", sparse[i][j]);
        }
        printf("\n");
    }    

    printf("Sizeof Sparse: %d bytes\n",sizeof(sparse));
    printf("Sizeof matrix: %d bytes\n",sizeof(arr));
}
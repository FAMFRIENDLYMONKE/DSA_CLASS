#include <stdio.h>
#include <memory.h>

int main(){
    int a,i,j;
    printf("Enter The no of elements in each tuple:\n");    scanf("%d", &a);
    int sparse[a][3];
    printf("Enter the tuples of a sparse matrix:\n");
    for(i =0; i< a; i++)
        for(j = 0; j<3;j++)     scanf("%d", &sparse[i][j]);

    int arr[sparse[0][0]][sparse[0][1]];
    memset(arr,0,sizeof(arr));
    for(i =1; i< a; i++)
        arr[sparse[i][0]-1][sparse[i][1]-1] = sparse[i][2];

    printf(" Matrix:\n");
    for(i =0; i< sparse[0][0]; i++){
        for(j = 0; j< sparse[0][1];j++)     printf("%d ", arr[i][j]);
        printf("\n"); 
    }
}
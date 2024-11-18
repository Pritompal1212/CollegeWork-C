#include<stdio.h>
int main(){
int r,c;
printf("Enter row and column");
scanf("%d%d",&r,&c);
int matA[r][c],matB[r][c],Sum[r][c];

printf("Enter matrices elements\n");

for(int i = 0; i<r; i++){

for(int j=0; j<c; j++){
    scanf("%d",&matA[i][j]);
}

}
for(int i = 0; i<r; i++){

for(int j=0; j<c; j++){
    scanf("%d",&matB[i][j]);
}

}
for(int i = 0; i<r; i++){
    
for(int j=0; j<c; j++){
    printf("%d",Sum[i][j] = matA[i][j] + matB[i][j]);
}

}


return 0;
}
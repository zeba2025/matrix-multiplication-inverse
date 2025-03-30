#include<stdio.h>
int main(){
int row1,col1,row2,col2,i,j,k;
printf("Enter the number of row and column for 1st matrix:");
scanf("%d %d",&row1,&col1);
int arr[row1][col1];

printf("Enter the number of row and column for 2nd matrix:");
scanf("%d %d",&row2, &col2);
int arr2[row2][col2];

if(col1!=row2)
printf("Invalid selection.Please try again");

if(col1==row2){
printf("\nEnter elements of the 1st matrix");
for(i=0; i<row1; i++){
for(j=0; j<col1; j++){
printf("\nEnter the row element and then the column element arr[%d][%d]:",i,j);
scanf("%d",&arr[i][j] );
}
}
}
if(col1==row2){
printf("\nEnter elements of the 2nd matrix");
for(i=0; i<row2; i++){
for(j=0; j<col2; j++){
printf("\nEnter the row element arr2[%d][%d]:",i,j);
scanf("%d",&arr2[i][j]);
}
}
}
int mul[i][j];
for (i = 0; i < row1; i++) {
for (j = 0; j < col2; j++) {
mul[i][j] = 0;
}
}
if(col1==row2){
for (i = 0; i < row1; i++) {
for (j = 0; j < col2; j++) {
for (k = 0; k < col1; k++) {
mul[i][j] += arr[i][k] * arr2[k][j];
        }
    }
}
printf("\nThe multiplied value is:\n");
for (i = 0; i < row1; i++) {
for (j = 0; j < col2; j++) {
printf("%d  ", mul[i][j]);
}
printf("\n");
}
}
int det=0;
if(i==j){
printf("\nFinding inverse");
if(col1==2 && row2==2){
    det=(mul[0][0]*mul[1][1])-(mul[0][1]*mul[1][0]);
    if(det==0){
        printf("\ndeterminant is zero. no inverse");
    }

else if(det>=0){
    printf("\nThe determinant of 2x2 matrix is:%d",det);
    float inv[2][2];
    inv[0][0]=mul[1][1];
    inv[0][1]=-mul[1][0];
    inv[1][0]=-mul[0][1];
    inv[1][1]=mul[0][0];

float final_inv[2][2];
final_inv[0][0]=inv[0][0]/det;
final_inv[0][1]=inv[0][1]/det;
final_inv[1][0]=inv[1][0]/det;
final_inv[1][1]=inv[1][1]/det;

printf("\nThe inverse matrix is:");
printf("\n%f    %f", final_inv[0][0],final_inv[0][1]);
printf("\n%f    %f", final_inv[1][0],final_inv[1][1]);
}
else{
    printf("\nThe determinant of 2x2 matrix is:%d",(det*(-1)));

float inv[2][2];
    inv[0][0]=mul[1][1];
    inv[0][1]=-mul[1][0];
    inv[1][0]=-mul[0][1];
    inv[1][1]=mul[0][0];

float final_inv[2][2];
final_inv[0][0]=inv[0][0]/det;
final_inv[0][1]=inv[0][1]/det;
final_inv[1][0]=inv[1][0]/det;
final_inv[1][1]=inv[1][1]/det;

printf("\nThe inverse matrix is:");
printf("\n%f    %f", final_inv[0][0],final_inv[0][1]);
printf("\n%f    %f", final_inv[1][0],final_inv[1][1]);
}
}else if(col1==3 && row2==3){
det=((mul[0][0])*((mul[1][1]*mul[2][2])-(mul[1][2]*mul[2][1])))-((mul[0][1])*((mul[1][0]*mul[2][2])-(mul[1][2]*mul[2][0])))+(mul[0][2]*((mul[1][0]*mul[2][1])-(mul[1][1]*mul[2][0])));
   if(det>=0){
     printf("\nThe determinant of 3x3 matrix is:%d",det);
   }
   else if(det==0){
    printf("\ndeterminant is zero so inverse not found");
   }

   else
printf("\nThe determinant of 3x3 matrix is:%d",det*(-1));
}
}
else
    printf("\nThe result is not a square matrix so inverse cannot be found out");
return 0;
}

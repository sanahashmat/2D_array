#include <stdio.h>
int main() {
float a[2][2], det, inv[2][2];
int i, j, rank;

printf("Enter 2x2 matrix:\n");
for(i=0;i<2;i++)
    for(j=0;j<2;j++)
       scanf("%f",&a[i][j]);


det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
rank = (det != 0) ? 2 : ((a[0][0]==0 && a[0][1]==0 &&
a[1][0]==0 && a[1][1]==0)? 0:1);

printf("Trace = %.2f\n", a[0][0]+a[1][1]);
printf("Determinant = %.2f\n", det);
printf("Rank = %d\n", rank);


if(det != 0) { 
inv[0][0] = a[1][1]/det; inv[0][1] = -a[0][1]/det;
inv[1][0] = -a[1][0]/det; inv[1][1] = a[0][0]/det;

printf("Inverse:\n");
for(i=0;i<2;i++) {
    for(j=0;j<2;j++)
        printf("%.2f ",inv[i][j]);
    printf("\n");
}
}
else {
printf("Inverse does NOT exist\n");
}
return 0;
}
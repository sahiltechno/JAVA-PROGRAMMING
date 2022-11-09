#include <stdio.h>
#include <conio.h>
int main(){
/* 2D array declartion*/
int disp[2][3];
/*counter variables for the loop*/
int i, j;
for (i=0;i<2;i++){
for (j=0;j<3;j++){
printf ("enter value for disp[%d][%d]",i,j);
scanf("%d",&disp [i][j]);
}
}
//displaying array element
printf("Two dimensional array element:\n");
for(i=0;i<2;i++){
   for (j=0;j<3;j++){
     printf("%d",disp[i][j]);
     if (j==2){
      printf("\n");
}
}
} 
return 0;
}


#include <stdio.h>
#include "my_mat.h"



int main(){
   char choose;
   int a, b;
   int x,y;


   while(choose!='D'){
     scanf("%c",&choose);

  switch (choose){

    case 'A':
      makeMat();
      break;

    case 'B':
      scanf(" %d %d",&a, &b);
      isPath(a,b);
      break;

    case 'C':
      scanf(" %d %d",&x, &y);
      shortPath(x,y);
      break;
}
   }
}

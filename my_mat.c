#include <stdio.h>
#include <limits.h>
#include "my_mat.h"

#define false 0
#define true 1


int mat[10][10];


int makeMat(){
  int y;
    for(int i=0;i<10;i++){
      for (int j=0; j<10;j++) {
        (scanf(" %d",&y));
        // if(y==0){
        //   y=INT_MAX;
        // }
        mat[i][j]=y;
      }
    }
    //   for(int i = 0; i < 10; ++i)
    //   {
    //     for(int j = 0; j < 10; ++j)
    //       printf("%d ", mat[i][j]);
    //
    //     printf("\n");
    //
    //
    // }
    return 0;
}



int min(int a,int b){
    if(a==0){
      return b;
    }
    if(b==0){
      return a;
    }
    if(a<b){
      return a;
    }else{
      return b;
    }

}


int isPath(int i,int j){
if(i==j){
  printf("False\n");
  return 0;
}
  for(int k=0;k<10;k++){
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
          if(mat[i][k]!=0 && mat[k][j]!=0){
            mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
          }
      }
    }
  }
  if(mat[i][j]==0){
    printf("False\n");
  }else{
    printf("True\n");
  }return 0;
}


int shortPath(int i,int j){
  if(i==j){
    printf("-1\n");
    return 0;
  }
  for(int k=0;k<10;k++){
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        if(mat[i][k]!=0 && mat[k][j]!=0){
            mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
          }
      }
    }
  }
  if(mat[i][j]==0){
    mat[i][j]=-1;
  }
  printf("%d\n", mat[i][j]);

  return mat[i][j];
}

// int isPath(int i,int j){
//   if(shortPath(i,j)==0){
//     printf("False\n");
//
//   }else{
//     printf("True\n");
//
//   }return 0;
// }

#include <stdio.h>
int main(){
    int arr[7][2]={0};
    int i=0,j=0;
    for(i=0;i<7;i++){
            scanf("%d %d",&arr[i][0],&arr[i][1]);
        }

     for(i=0;i<7;i++){
        for(j=0;j<2;j++){
           if(arr[i][j]>10||arr[i][j]<0){
               return 0;
           }
        }
    }
    int max=arr[0][0]+arr[0][1];
    int n=0;
     for(i=0;i<7;i++){
           if(max<arr[i][0]+arr[i][1]){
               max=arr[i][0]+arr[i][1];
               n=i;
           }
        }
    printf("%d",n);
    return 0;
}

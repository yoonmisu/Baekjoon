#include <stdio.h>
int main(){
    int arr[9];
    for(int i=0; i<9; i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int index = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int j=1; j<n; j++){
        if(arr[j] > max){
            max=arr[j];
            index=j;
        }
    }
    printf("%d\n",max);
    printf("%d",index + 1);
}
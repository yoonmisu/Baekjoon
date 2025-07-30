#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[1000];
    scanf("%d",&arr[0]);
    int m = arr[0];
    for (int i = 1; i < n; i++){
        scanf("%d",&arr[i]);
        if (arr[i] > m)
            m = arr[i];
    }
    double result[1000];
    double sum = 0;
    for (int j = 0; j < n; j++){
        result[j] = (double)arr[j] / m * 100;
        sum += result[j];
    }
    printf("%f",sum / n);
    return 0;
}
#include<stdio.h>
int main(){
    int a[10];
    int max = -1;
    for (int i = 0; i <= 9; i++)
    {
        printf("Write a number: ");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= 9; i++){
        if (max<a[i]){
            max = a[i];
        }
    }
    printf("%d is the maximum number",max);
    return 0;
}
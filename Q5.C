#include<stdio.h>
int main(){
    int a[10];
    int min = a[0];
    for (int i = 0; i <= 9; i++)
    {
        printf("Write a number: ");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= 9; i++){
        if (min>a[i]){
            min = a[i];
        }
    }
    printf("%d is the minimum number",min);
    return 0;
}
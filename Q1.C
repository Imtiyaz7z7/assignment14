#include<stdio.h>
int main(){
    int a[10];
    int sum = 0;
    printf("Enter the values: ");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("sum is %d",sum);
    return 0;
}
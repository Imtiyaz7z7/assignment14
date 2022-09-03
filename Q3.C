#include<stdio.h>
int main(){
    int a[10];
    int sum1 = 0;
    int sum2 = 0;
    int i;
    printf("Enter the values: ");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            sum1 = sum1 + a[i];
        }else{
            sum2 = sum2 + a[i];
        }
    }
    printf("\nSum of all the even numbers are %d",sum1);
    printf("\nSum of all the odd numbers are %d",sum2);
    return 0;
}
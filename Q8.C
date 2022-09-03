#include<stdio.h>
int main(){
    int a[10];
    int max = a[0];
    int temp;
    int smax;
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        if (max>a[i])
        {
            smax=max;
            max=a[i];
        }
    }
    printf("\n%d is the SMALLEST and %d is second SMALLEST",max,smax);
}
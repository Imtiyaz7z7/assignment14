#include<stdio.h>
int main(){
    float a[10];
    float sum = 0;
    float avg;
    printf("Enter the values: ");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%f",&a[i]);
        sum = sum + a[i];
    }
    avg = sum/10;
    printf("Total average is %f",avg);
    return 0;
}
#include<stdio.h>
int main(){
    int a[10];
    int min = a[0];
    int temp;
    for (int i = 0; i <= 9; i++)
    {
        printf("Write a number: ");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= 8; i++){
        for (int j = i+1; j <= 9; j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
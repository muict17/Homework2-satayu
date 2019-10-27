#include<stdio.h>

int main()
{
    int num, n=0, i, j, check;
    printf("Input the number : ");
    scanf("%d",&num);
    check = num;
    while(check>0)
    {
        check = check/10;
        n++;
    }
    int armcheck[n];
    int sum = 0;
    int mul;
    check = num;
    for(i=0;i<n;i++)
    {
        mul = 1;
        armcheck[i] = check%10;
        check = check/10;
        for(j=0;j<n;j++)
        {
            mul = mul * armcheck[i];
        }
        sum = sum + mul;
        if(i<n-1) printf("%d+",mul);
        else printf("%d",mul);
    }
    printf("=%d\n",sum);
    if(sum==num)
    {
        printf("This is Armstong Number\n");
    }
    else
    {
        printf("This is not Armstrong Number\n");
    }
    return 0;
}
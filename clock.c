#include<stdio.h>

int main()
{
    int hour, minute, degree, change;
    printf("Input Hour Hand : ");
    scanf("%d",&hour);
    printf("Input Minute Hand : ");
    scanf("%d",&minute);
    if(minute==12)
    {
        if(hour<7)
        {
            degree = hour*30;
        }
        else
        {
            degree = (12-hour) *30;
        }
    }
    else
    {
        if(hour<minute && minute-hour<=6)
        {
            degree = minute*30 - (hour*30 + minute*30/12); 
        }
        else if(hour>=minute && minute-hour<=6)
        {
            degree = (hour*30 - minute*30/12) - minute*30;
        }
        else if(hour<minute && minute-hour>6)
        {
            degree = 360 - (minute*30 - (hour*30 + minute*30/12));
        }
        else
        {
            degree = 360 - ((hour*30 - minute*30/12) - minute*30);
        }
        
    }
    printf("%d\n",degree);
    return 0;
}
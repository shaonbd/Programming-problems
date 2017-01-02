#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main ()
{
    int b,n,i=0,r,digit,p,count=0;
    char a[100];
    int arr[100];
    int sum=0;
    int x,y,z;
    printf("\nEnter a number:\n");
    scanf("%d",&n);
    printf("\nWhich base is it in??\n");
    scanf("%d",&x);
    printf("\nEnter the base to be converted:\n");
    scanf("%d",&b);
    p = n;
    y = n;

    if(x==2)
    {
        while(y>0)
        {
            z = y % 10;
            arr[i]=z;
            y = y/10;
            i++;
            count++;
        }
        printf("\n");
        for(i = 0 ; i < count ; i++)
        {
            sum = sum + (arr[i] * pow(x,i));
        }
        printf("\nbase %d equivalent number is %d.",b,sum);

    }

if(x>2)
{

  do
    {
        r=p%b;
        digit='0'+r;

        if(digit>'9')
            digit=digit+7;

        a[count]=digit;
        count++;
        p=p/b;
    } while(p!=0);


    printf("\nFor base %d equivalent of num %d is ",b,n);
    for(i=count-1;i>=0;--i)
    printf("%c",a[i]);
    printf(".\n");
}

  return 0;
}

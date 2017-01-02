#include<stdio.h>
#include<math.h>
int main()
{
    int T,t; // test cases
    int count = 0;
    int e=0,f=0,g=0,h=0; // co-efficiant
    int E=0,F=0,G=0,H=0; // another object
    int sum=0,total=0,final=0,result=0;
    int i,j,k,l; // loop
    int a,b,c,d,A,B,C,D; // input
    scanf("%d",&T);
    for(t = 1; t<=T ; t++)
    {
        scanf("%d.%d.%d.%d",&A,&B,&C,&D);
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);

        for(i=0;i<a;i= i * a)
        {
        E = a%10 * pow(2,e++);
        a = a/10;
        sum = sum + E;
        }

        for(j=0;j<b;j= j * b)
        {
        F = b%10 * pow(2,f++);
        b = b/10;
        total = total + F;
        }

        for(k=0;k<c;k= k * c)
        {
        G = c%10 * pow(2,g++);
        c = c/10;
        final = final + G;
        }

        for(l=0;l<d;l= l * d)
        {
        H = d%10 * pow(2,h++);
        d = d/10;
        result = result + H;
        }

        if(A==sum)
        {
            if(B==total)
            {
                if(C==final)
                {
                    if(D==result)
                    count = 0;
                    else
                    count++;
                }
                else
                count++;
            }
            else
            count++;
        }
        else
        count++;

        if(count==0){
        printf("Case %d: Yes\n",t);
        e=0,f=0,g=0,h=0;
        E=0,F=0,G=0,H=0;
        sum=0,total=0,final=0,result=0;
        }
        else if(count>0){
        printf("Case %d: No\n",t);
        e=0,f=0,g=0,h=0;
        E=0,F=0,G=0,H=0;
        sum=0,total=0,final=0,result=0;
        }
    }
    return 0;
}




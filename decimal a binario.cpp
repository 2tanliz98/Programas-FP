#include <stdio.h>
#include <conio.h>
#include <math.h>
int num,q=2,r,res, s[36],i=0;
main ()
{
    printf("Dame el numero ");
    scanf("%d",&num);
    while (num>0)
    {
        r=num%q;
        num=num-r;
        num=num/q;
        s[i]=r;
        
        printf("s[%d]= %d\n", i, r);     
    }
    
    for(i;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
    getch();
}



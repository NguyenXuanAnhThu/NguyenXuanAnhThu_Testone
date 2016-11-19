#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a,b,c;
    float x1,x2,denta,x;
    printf ("nhap a,b,c = \n");
    scanf ("%d%d%d",&a,&b,&c);
    denta=b*b-(4*a*c);
    if(denta<0)
        printf("phuong phuong trinh vo nghiem");
    else
    {
        if(denta>0)
          {
             x1=(-b+sqrt(denta))/(2*a);
             x2=(-b-sqrt(denta))/(2*a);
             printf("phuong trinh co hai nghiem phan biet x1=%f,x2=%f",x1,x2);
          }
        else
          {
            x=-b/(2*a);
            printf("phuong trinh co nghiem kep x=%0.1f",x);
          }
    }
}

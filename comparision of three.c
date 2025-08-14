#include <stdio.h>

int main()
{
int a,b,c;
printf("ënter first number:");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);
printf("Enter third number");
scanf("%d",&c);
if(a>b && b>c)

printf("%d is greator than %d and %d",a,b,c);

else if(b>a && b>c)

    printf("%d is greator than %d and %d",b,a,c);
    else
        printf("%d is greator than %d and %d",c,a,b);

return 0;
}

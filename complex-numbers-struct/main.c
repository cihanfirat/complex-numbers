#include <stdio.h>
#include <stdlib.h>


struct complex_numbers
{
    float a,b;
};
int main()
{
    struct complex_numbers n1,n2,result;
    char op;
    printf("Choose an Operator (+,-):");
    scanf("%c",&op);

    printf("First Complex Number:\n");
    scanf("%f%f",&n1.a,&n1.b);

    printf("Second Complex Number:\n");
    scanf("%f%f",&n2.a,&n2.b);

    if(op=='+')
    {
        result.a=n1.a+n2.a;
        result.b=n1.b+n2.b;
    }
    else if(op=='-')
    {
        result.a=n1.a-n2.a;
        result.b=n1.b-n2.b;
    }
    else
    {
        printf("Invalid Operator!");
    }
        printf("Result:\n");
        printf("%.2f",result.a);

        if(result.b>=0)
        {
            printf("+ %.2f i",result.b);
        }
        else
        {
            printf("%.2f i",result.b);
        }

    return 0;
}

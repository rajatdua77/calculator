#include <stdio.h>
#include <stdlib.h>

int main()
{
     char choice;
    int a,b,c;
    //operation= addition subtraction mutltiply division modulus//
    printf("\nWhich operation do you want?-->");
    scanf("%c",&choice);
    printf("Enter two num's-");
    scanf("%d%d",&a,&b);
    switch(choice)
    {

    case '+':
          c=a+b;
        printf("\nAddition of two no.'s are-->%d",c);
        break;
    case '-':
        c=a-b;
        printf("\nSubtraction of two no.s are-->%d",c);
        break;
    case '*':
        c=a*b;
        printf("\nMultiplication of two no.s are-->%d",c);
        break;
    case '/':
        c=a/b;
        printf("\nDivision of two no.s are-->%d",c);
        break;
    case '%':
        c=a%b;
        printf("\nModulus of two no.s are-->%.2f",c);
        break;
    default:
        printf("Sorry");
    }
}

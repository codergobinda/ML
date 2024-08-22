//Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include<stdio.h>
int v1()
{
    int a,b,c;
    printf("Enter sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
            {
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }
return 0;
}

int main() //Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
{
    int a,b,c;
    printf("Enter sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
return 0;
}

int sir()
{
    int a,b,c;
    printf("Enter lengths of sides of a traingle");
    scanf("%d%d%d",&a,&b,&c);
    if(a>0&&b>0&&c>0 && a+b>c && a+c>b && b+c>a)
        printf("Valid Traingle");
    else
        printf("Invalid Triangle");
    printf("\n");
    return 0;
}
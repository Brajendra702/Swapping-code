#include<stdio.h>
main()
{
    int a=10,b=20,c;
    //declare variable and initialize with 10,20
    c=a;
    a=b;
    b=c;
    //swapping code
    printf("\nAfter Swapping :a=%d,b=%d",a,b);
    //print swapped value of variable
    return 0;
}

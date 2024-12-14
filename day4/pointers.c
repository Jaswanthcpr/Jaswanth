#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    printf("before increament");
    printf("%d\n",age);
    printf("%p\n",&age);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    ptr++;
    printf("after increament");
    printf("%d\n",age);
    printf("%p\n",&age);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
}

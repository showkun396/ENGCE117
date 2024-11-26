#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0 ;
    float a,b=3, bool_1=0 ;
    printf("%f", bool_1) ;

    if(1!=0)
    {
        printf("ok ") ;   
    }
    else if(i<=5)
    {
        printf(" not-okey-%d ",i) ;
    }  
    for(i=3;i<10;i+=1)
    {
        if( i%2==0)
        {
            printf("see see");
            printf("haha") ;
        } 
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , sum = 0 ,sol = 0 ;
    scanf("%i" , &n);
    int probs [n * 3] ;

    for(int i = 0 ; i < n * 3 ; i ++)
    {
        scanf("%i" , &probs[i]);
    }
    for(int i = 0 ; i < n * 3 ; i ++)
    {
        if(probs[i] == 1)
        {
            sum ++ ;
        }
        if((i + 1) % 3 == 0)
        {
            if(sum >= 2)
            {
                sol ++ ;
            }
            sum = 0 ;
        }
    }
    printf("%i" , sol) ;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    scanf ("%i" , &n) ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%i" , &arr[i]);
    }
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n - 1 ; j ++)
        {
            if(arr[j] > arr[j + 1])
            {
                int a = arr[j] ;
                arr[j] = arr[j + 1] ;
                arr[j + 1] = a ;
            }
        }
    }
    for(int i = 0 ; i < n ; i ++)
    {
        printf("%i " , arr[i]);
    }

}

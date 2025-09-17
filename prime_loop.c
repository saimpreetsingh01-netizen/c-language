// for loop prime no or not
#include <stdio.h>

int main() {
    int n,a,f=0;
    printf( "enter the number");
    scanf("%d",&n);
    if (n<=1)
    printf("Auto Bots Not Ready");
    else
{
    for (a=2;a<n;a++)
{   
    if(n % a == 0)
    {
        f=1;
        break;
    }
}
   if(f==0)
     printf(" prime");
     else
     printf("Megatron");
 
}

#include<stdio.h>
#include<math.h>

/// 1 to N Print Palindrome Numbers
int main()
{
    int num,i,sum,j,r,temp;
    scanf("%d",&num);
    temp = 0;

    for(i=1;;i++)
    {
            sum=0;
            j=i;
            while(j>0)
            {
                r=j%10;
                sum = sum*10+r;
                j=j/10;
            }
            if(sum==i)
            {
                printf("%d, ",i);
                temp++;
            }
            if(temp==num)
            {
                break;
            }


    }


    return 0;
}

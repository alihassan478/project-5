#include <stdio.h>
#include <math.h>

int main(void)
{
    int num[5] = {};
    int res1,res2,res3,res4,res5,sum;

    printf("Enter the number : ");
    scanf("%d" , &num[0]);
    scanf("%d" ,&num[1]);
    scanf("%d" ,&num[2]);
    scanf("%d" ,&num[3]);
    scanf("%d" ,&num[4]);

    res1 = num[4]*pow(2,0);
    res2 = num[3]*pow(2,1);
    res3 = num[2]*pow(2,2);
    res4 = num[1]*pow(2,3);
    res5 = num[0]*pow(2,4);

    sum = res1+res2+res3+res4+res5;
    printf("%d" ,sum);

}
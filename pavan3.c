#include<stdio.h>
int main() {
    int n,sum=0;
    printf("enter the natural number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    printf("the sum of the first%d natural numbers is :%d\n",n,sum);
    return 0;
}


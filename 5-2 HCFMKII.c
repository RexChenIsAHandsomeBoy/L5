#include <stdio.h>
#include <stdlib.h>
int HCF(int a,int b)
{
    for(int i=1;i<=b;i++){
        if(a%i==0&&b%i==0){
            int A=a/i,B=b/i;
            return HCF(A,B);
        }
    }
    return a;
}
int HCFO(int a,int b)
{
    if(a<b){
        int c=a;
        a=b;
        b=c;
    }
    int ans=a/HCF(a,b);
    return ans;
}
int main()
{
    int a,b;
    printf("請輸入第一個數:");
    scanf("%d",&a);
    printf("請輸入第二個數:");
    scanf("%d",&b);
    int opt=HCFO(a,b);
    printf("最大公因數為:%d\n",opt);
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b)
{
    int r;
    r=a%b;//�e���Oa����>=b
    if(r==0)
        return b;
    return GCD(a,r);//���׿�(D)
}
int main()
{
    int ans=GCD(10,8);
    printf("%d\n",ans);
    system("pause");
    return 0;
}

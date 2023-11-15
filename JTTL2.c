#include<stdio.h>
#include<stdlib.h>
void main()
{
    int Z=1;
    printf("***********鸡兔同笼**********\n");
    while(Z)
    {
        int x,y;
        int feet,head;
        printf("请输入头的数量：");
        scanf("%d",&head);
        printf("请输入脚的数量：");
        scanf("%d",&feet);
		y=(feet-2*head)/2;
		x=head-y;
        printf("鸡的数量为：%d\n兔的数量为：%d\n",x,y);
        printf("结束程序请按0，再次计算请按1\n");
        scanf("%d",&Z);
        system("CLS");
    }
}

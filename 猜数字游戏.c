//1.猜数字游戏
//2.猜数字
//a> 猜大了，提醒猜大了，继续猜
//b> 猜小了，提醒猜小了，继续猜
//c> 猜对了，恭喜你猜对了，结束游戏
//3.玩完一把不过瘾继续玩，不退出程序，重新开始
#include<stdio.h>
#include<stdlib.h>//rand头文件
#include<time.h>
void menu ()
{
    printf("\n***********猜数字游戏***********\n");
    printf("*********play    over*********\n");
    printf("***********杨馨悦专属***********\n");
}
void game()
{
    RAND_MAX;
    int input = 0;
    int random_num = rand()%100+1;
    //生成random—_num（随机数），范围是0-32767
    while(1)
    {
        printf("请输入一个数字:");
        scanf("%d",&input);
        if(input>random_num)
        {
            printf("输大了\n");
            continue;
        }
        else if(input<random_num)
        {
            printf("输小了\n");
            continue;
        }
        else if(input==random_num)
        {
            printf("恭喜你猜对了\n");
            break;
        }
    } 
} 
int main ()
{
    int n = 0;
    srand((unsigned)time(NULL));
    //使用rand之前需要用srand函数,rand是生成随机数，srand是设置随机数的生成起点
    //要给srand传递一个变化的值，计算机的时间是时刻变化的
    //time函数可以返回一个时间戳
    do
    {
        menu();
        printf("\n1-开始游戏   0-结束游戏\n");
        scanf("%d",&n);
        switch (n)
        {
            case 1: 
            printf("开始了哦:\n");
            game();
            break;
            case 0:
            printf("切,不玩拉倒!\n"); 
            break; 
            default:
            printf("死狗,虾呀,让你输1和2\n");
            break;
        }
    }while(n);
    return 0;
}

#include <stdio.h>   //输入输出函数头文件
#include <stdlib.h>  //rand头文件
#include <time.h>    //time头文件
#define Line  5  //宏定义line为3
#define Row 5    //宏定义row为3
//初始化棋盘
void Board_1(char ch[Line][Row],int line,int row)
{
    int i = 0;
    int j = 0;
    for(i=0;i<line;i++)
    {
        for(j=0;j<row;j++)
        {
            ch[i][j] = ' ';   //给每一个数组中的元素赋值个空格
        }
    }
}
//打印棋盘
void Board_2(char ch[Line][Row],int line,int row)
{
    int i = 0;
    int j = 0;  
    for(i=0;i<line;i++)
    {
        for(j=0;j<row;j++)
        {
            if(j<row-1)
            {
                printf(" %c |",ch[i][j]);
            }
            else
            printf(" %c ",ch[i][j]);
        }
        printf("\n");
        if(i<line-1)
        {
            for(j=0;j<row;j++)
            {
                if(j<row-1)
                {
                    printf("---|");
                }
                else
                printf("---");
            }
            printf("\n");  
        }
    }
}
//玩家下棋
void People(char ch[Line][Row],int line,int row)
{
    
    int i = 0;
    int j = 0;
    while(1)
    {
        printf("玩家下棋:>\n");
        scanf("%d %d",&i,&j);
        if((i>=1&&i<=line)&&(j>=1&&j<=row))
        {
            if(ch[i-1][j-1]!=' ')
            {
                printf("输入的坐标被占用,请重新输入:\n");
                continue;
            }
            else
            {
                ch[i-1][j-1] = '*';
                Board_2(ch,Line,Row);
                break;
            }
        }      
        else
        {
            printf("输入坐标错误,请重新输入:\n");
            continue;
        }
    }
}
//电脑下棋
void Computer(char ch[Line][Row],int line,int row)
{

    printf("电脑下棋:> \n");
    int x = 0;
    int y = 0;
    while(1)
    {
        x = rand()%line;   //随机数生成
        y = rand()%row;
        if(ch[x][y]== ' ')
        {
            ch[x][y] = 'a';
            Board_2(ch,Line,Row);
            break;
        }
    }
}
//判断是否下满，下满了就平局
int Is_full(char ch[Line][Row],int line,int row)
{
    int i = 0;
    int j = 0;
    for(i=0;i<line;i++)
    {
        for(j=0;j<row;j++)
        {
            if(ch[i][j]==' ')
            {
                return 1;
            }
        }
    }
    return 0;
}
//判断输赢
char Win_or(char ch[Line][Row],int line,int row)
{
    int i = 0;
    int j = 0;
    int flag3 = 0;
    int flag4 = 0;
    int flag5 = 0;

    for(i=0;i<line;i++) //行
    {
        int flag1 = 0;
        for(j=0;j<row-1;j++)
        {
            if(ch[i][j]!=ch[i][j+1])
            {
                flag1 = 1;
                break;
            }
        }
        if(flag1==0)
        {
            if(ch[i][0]==' ')
            {
                continue;
            }
            else
            return ch[i][0];
        }
    }

    for(j=0;j<row;j++)//列
    {
        int flag2 = 0;
        for(i=0;i<line-1;i++)
        {
            if(ch[i][j]!=ch[i+1][j])
            {
                flag2 = 1;
                break;
            }
        }
        if(flag2==0)
        {
            if(ch[0][j]==' ')
            {
                continue;
            }
            else
            return ch[0][j];
        }
    }
    
    for(i=0,j=0,flag3=0;i<line-1;i++,j++)//对角线左上右下
    {
        if(ch[i][j]!=ch[i+1][j+1])
        {
            flag3 = 1;
            break;
        }
    }
    if(flag3==0)
    return ch[0][0];

    for(i=line-1,j=row-1,flag4=0;i>0;i--,j--)//对角线左下右上
    {
        if(ch[i][j]!=ch[i-1][j-1])
        {
            flag4 = 1;
            break;
        }
    }
    if(flag4==0)
    return ch[0][0];

    int full = Is_full(ch,Line,Row);
    if(full==1)
    {
        return 'C';
    }
    return 'Q';

}
void Game ()
{
    char ret = 0;
    char ch[Line][Row] = {0};
    Board_1(ch,Line,Row);//初始化棋盘
    Board_2(ch,Line,Row);//打印棋盘
    while(1)
    {
        People(ch,Line,Row);//玩家下棋
        ret = Win_or(ch,Line,Row);//比较比赛战况
        if(ret != 'C')
        break;
        Computer(ch,Line,Row);//电脑下棋
        ret = Win_or(ch,Line,Row);
        if(ret != 'C')
        break;
    }
    if(ret == '*')
    printf("恭喜你赢得比赛 (*^o^*)\n");
    if(ret == 'a')
    printf("你输了 ╮(￣▽￣"")╭\n");
    if(ret == 'Q')
    printf("平局,不分伯仲\n");
}
//菜单
void Menu()
{
    int a = 0;
    do
    {
        printf("*********************\n");
        printf("********1.play*******\n");
        printf("********0.exit*******\n");
        printf("*********************\n");
        printf("1-开始游戏  0-退出游戏 \n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("开始比赛!!!\n");
            Game();
        }
        else if(a==0)
        {
            printf("退出游戏成功!!!\n");
            break;
        }
        else
        {
            printf("输入错误,请重新输入:> ");
            continue;
        }
    } while (a);
    
}
int main ()
{
    srand((unsigned int)time(NULL));//写rand之前要写这个
    Menu();
    return 0;
}
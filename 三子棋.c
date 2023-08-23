#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define line 3  //定义行
#define row 3   //定义列
//打印棋盘
void Chessboard(char arr[line][row])
{
    int i = 0;
    for(i=0;i<line;i++)
    {
        int j = 0;
        for(j=0;j<row;j++)
        {
            printf(" %c ",arr[i][j]);
            if(j<row-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if(i<line-1)
        {
            for(j=0;j<row;j++)
            {
                printf("---");
                if(j<row-1)
                printf("|");
            }
            printf("\n");
        }
    }
}
//初始化棋盘
void Scanf_(char arr[line][row])
{
    int i = 0;
    for(i=0;i<line;i++)
    {
        int j = 0;
        for(j=0;j<row;j++)
        {
            arr[i][j] = ' ';
        }
    }
}
//玩家下棋
void Player(char arr[line][row])
{
    int i = 0;
    int j = 0;
    while(1)
    {
        printf("请输入坐标\n");
        scanf("%d %d",&i,&j);
        if((i>=1&&i<=line)&&(j>=1&&j<=3))
        {
            if(arr[i-1][j-1]!=' ')
            {
                printf("输入的坐标被占用,请重新输入:\n");
                continue;
            }
            else
            {
                arr[i-1][j-1] = '*';
                Chessboard(arr);
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
void Computer(char arr[line][row])
{
    int x = 0;
    int y = 0;
    printf("电脑下棋:\n");
    while(1)
    {
        x = rand()%line;
        y = rand()%row;
        if(arr[x][y]==' ')
        {
            arr[x][y] = '#';
            Chessboard(arr);
            break;
        }
    }
}
int ISfull(char arr[line][row])
{
    int i = 0;
    int j = 0;
    for(i=0;i<line;i++)
    {
        for(j=0;j<row;j++)
        {
            if(arr[i][j]==' ')
            return 1;
        }
    }
    return 0;
}
char determine(char arr[line][row])
{
    //赢
    int i = 0;
    int j = 0;
    for(i=0;i<line;i++)
    {
        if((arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2])&&(arr[i][0]!=' '))
        {
            return arr[i][0];
        }
    }
    for(i=0;i<row;i++)
    {
        if((arr[0][i]==arr[1][i]&&arr[1][i]==arr[2][i])&&(arr[0][i]!=' '))
        {
            return arr[0][i];
        }
    }
    if(((arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])&&(arr[0][0]!=' '))||((arr[2][0]==arr[1][1]&&arr[1][1]==arr[2][2])&&(arr[1][1]!=' ')))
    {
        return arr[0][0];
    }
    //平局和继续比赛
    if(ISfull(arr)==1)
    {
        return 'C';
    }
    else
    return 'Q';
}
//游戏配置
void game ()
{
    char ret = 0;
    char arr[line][row] = {0};
    Scanf_(arr);    //初始化棋盘
    Chessboard(arr); //打印棋盘
    while(1)
    {
        Player(arr);    //玩家下棋
        ret = determine(arr);       //判断比赛输赢/平局/继续比赛
        if(ret!='C')
        {
            break;
        }
        Computer(arr);  //电脑下棋
        ret = determine(arr);     //判断比赛输赢/平局/继续比赛
        if(ret!='C')
        {
            break;
        }                      
    }
    if(ret=='*')
    printf("玩家赢\n");
    else if(ret=='#')
    printf("电脑赢\n");
    else
    printf("平局\n");
}
//主菜单
void menu()
{
    int input = 0;
    do
    {
        printf("************************\n");
        printf("*******1.play 0.exit****\n");
        printf("************************\n");
        printf("请输入数字:>");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
        printf("开始游戏:\n");
        game();   //游戏设计
        break;
        case 0:
        printf("退出游戏成功!欢迎再来\n");
        break;
        default:
        printf("输入错误,请重新输入1/0\n");
        break;
        }
    }while(input);   
}
//主函数
int main ()
{
    char ret = 0;
    srand((unsigned int)time(NULL));
    menu();     //打印主菜单
    return 0;
}
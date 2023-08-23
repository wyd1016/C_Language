/*打印1000年到2000年之间的闰年
#include<stdio.h>
int main()
{
    int a = 1000;
    while(1000 <= a && a <= 2000)
    {
        if(a % 2 == 0)
        printf("%d ",a);
        a++;
    }
    return 0;
}
 //打印100~200之间的素数（指的是“大于1的整数中，只能被1和这个数本身整除的数）
#include<stdio.h>
int main()
{
    int a = 0,i = 2,b;
    for(a = 101 ;a > 100 && a <= 200 ;a++)
    {
        for(i = 2;i < a;i++)
        {
            b = a % i;
            if(b == 0)
            {
                break;
            }
        }
        if(a == i)
        {
            printf("%d ",a);
        }
    }
    return 0;
}

else跟最近的if匹配
#include<stdio.h>
int main()
{
    int a=2;
    switch (a)
    {
        case 1:
        printf("666");
        case 2:
        printf("333");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a=1;
    while(a>0)
    {
        printf("我爱杨馨悦 ");
        a++;
    }
    return 0;
}

*///给定两个数，求这两个数的最大公约数
/*#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int i = 1;
    scanf("%d %d",&a,&b);
    if(a % b != 0)

    return 0;
}
写代码将三个整数数按从大到小输出。
例如：
输入：2 3 1
输出：3 2 1

#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d",&a,&b,&c);
    if( a < b )
    {
        int d = a;
        a = b;
        b = d;
    }
    if( a < c )
    {
        int d = a;
        a = c;
        c = d;
    }
    if( b < c)
    {
        int d = b;
        b = c;
        c = d;
    }
    printf("%d %d %d ",a,b,c);
    return 0;
}

#include <stdio.h>
int main ()
{
    int i = 1;
    int n = 0;
    long long ret = 1;
    scanf("%d",&n)==1;
    
        for( i = 1 ; i <=n ; i++)
        {
            ret = ret * i; 
        }
        printf("%lld\n",ret);  
    return 0;
}
#include<stdio.h>
int main()
{
    int i = 1;
    int ret = 1;
    int sum = 0;
    for(i=1;i<=10;i++)
    {
        ret = ret * i;
        sum = sum + ret;
    }
printf("%d\n",sum);
return 0;

}

#include <stdio.h>

int main() 
{
    int a = 0;
    int b = 0;
    int c = 0; 
    scanf("%4d%02d%02d",&a,&b,&c);
    printf("year=%d\n",a);
    printf("month=%2d\n",b);
    printf("date=%2d\n",c);
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 1234;
    printf("%16d\n",a);
    return 0;
}

#include <stdio.h>

int main() 
{
    int n = 0;
    int m;
    scanf("%d",&n);
    while(n!=0)
    {
        m = n % 10;
        n = n / 10;
        printf("%d",m);
        
    }
    
    return 0;
}

#include <stdio.h>
int main() 
{
    int a = 0;
    int b = 0;
    int c ;
    scanf("%d %d",&a,&b);
    c = a + b;
    if(c<100)
    printf("%d\n",c);
    else if(c>=100)
        {
            c = c % 100;
            printf("%d\n",c);
        }
    else    
    return 0;
}

//打印1000年到2000年之间的闰年,"能被4整除却不能被100整除或能被400整除的年份是闰年
#include <stdio.h>
int main ()
{
    int  year = 1000;
    for( year = 1000; year <= 2000; year++)
    {
        if(year % 4 == 0)
        {
            if(year % 100 != 0 || year % 400 == 0)
            {
                printf("%d ",year);
            }
        }
    }
    return 0;
}
#include  <stdio.h>
int main ()
{
    int i = 0;
    for(i = 0; i <= 9; i++)
    {
        printf("%d ",i);
    }
    return 0;
}
#include <stdio.h>
int main ()
{
    int i = 1;
    while(i<=10)
    {
        if(i == 5)
            continue;
        printf("%d ",i);
        i = i+1;
    }
    return 0;
}
#include <stdio.h>
int main ()
{
    int i = 1;
    int a = 1;
    int n = 0;
    while(scanf("%d",&n)==1)
    {
    getchar();
    for(i=1;i<=n;i++)
    {
        a = a*i;
    }
    printf("%d",a);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main ()
{
    char arr1[] = "welcome to bit!!!!!";
    char arr2[] = "###################";
    //             0 1 2 3 4 5 6 7 8 9 a b c d e f g h i(17)
    int left = 0;
    int right = strlen(arr1)-1;
    while(left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        //Sleep(1000);//使计算机编程休眠1000毫秒 但是这个需要头文件#include<windows.h>,在win系统使用
        //system("cls");system函数可以执行系统命令，cls是清理屏幕；
        left++;
        right--;
    }
    return 0;
}

在屏幕上输出9*9乘法口诀表

#include <stdio.h>
int main ()
{
    int i = 1;
    int j = 1;
    int x = 0;
    printf("乘法口诀表：\n");
    for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            x = i * j;
            printf("%d*%d=%d  ",i,j,x);
        }
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int i = 1;
    int n = 0;
    while(scanf("%d",&n)==1)
    {    
        int a = 1;
        for(i=1;i<=n;i++)
        {
            a = a*i;
        }
        printf("%d",a);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[10];
    int i = 0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d",arr[i]);
    }
    return 0;
}

//求10 个整数中最大值
#include <stdio.h>
int main ()
{
    int arr[10];
    int i = 0;
    printf("请输入十个整数：\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int left = 0;
    int right = sizeof(arr)/sizeof(arr[i]);
    while(left<=right)
    {
        if(arr[left]>arr[right])
            {
                right = right - 1;
                continue;
            }
        if (arr[left]<arr[right])
            {
                left = left + 1;
                continue;
            }    
        if ((arr[left]==arr[right])&&(left != right))
            {
                right = right - 1;
                continue;
            }
        if((arr[left]==arr[right])&&(left == right))
            {
                printf("最大值为%d\n",arr[left]);
                break;
            }
        
    }
    return 0;
}

//计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 …… + 1/99 - 1/100 的值，打印出结果
#include <stdio.h>
int main ()
{
    int i = 1;
    float a = 0;
    float sum1 = 0;
    float sum2 = 0;
    for(i=1;i<101;i++)
    {
        a = 1.0 / i;
        if(i%2==0)
        {
            sum1 = sum1 - a;
        }
        if(i%2!=0)
        {
            sum2 = sum2 + a;
        }
    }
    printf("%f\n",sum1+sum2);
    return 0;
}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
#include <stdio.h>
int main ()
{
    int i = 0;
    int j = 0;
    int a = 1;
    int k = 0;
    while(a<=100)
    {
        if(a%10==0)
        {
            j = j + 1;
        }
        if(a>=90&&a<100)
        {
            i = i + 1;
        }
        a++;
    }
    k = i + j;
    printf("一共出现%d次数字9\n",k);
    return 0;
} 

//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
#include <stdio.h>
int main()
{
    int k = 0;
    while(scanf("%d",&k)!=EOF)
    {
        int arr[8] = {1,2,3,4,5,6,7,8};
        int sz = sizeof(arr)/sizeof(arr[0]);
        int left = 0;
        int right = sz - 1;
        int flag = 0;
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(arr[mid]<k)
            {
                left = mid + 1;
                continue;
            }
            if(arr[mid]>k)
            {
                right = mid - 1;
                continue;
            }
            if(arr[mid]==k)
            {
                printf("找到了，数组下标是%d\n",mid);
                flag = 1;
                break;
            }
        } 
        if(flag==0)
        {
        printf("找不到了\n");
        }
        
    }
    return 0;
}

//十个整数最大值
#include<stdio.h>
int main ()
{
    int arr[10];
    int i = 0;
    int max = 0;
    printf("请输入十个整数\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }  
    printf("这十个整数最大值是%d\n",max);
    return 0;
}
//1.猜数字游戏
//2.猜数字
//a> 猜大了，提醒猜大了，继续猜
//b> 猜小了，提醒猜小了，继续猜
//c> 猜对了，恭喜你猜对了，结束游戏
//3.玩完一把不过瘾继续玩，不退出程序，重新开始
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu ()
{
    printf("\n*************猜数字游戏*************\n");
    printf("*********1.play    2.over*********\n");
    printf("*************杨馨悦专属*************\n");
}
void game()
{
    int input = 0;
    int random_num = rand()%10000+1;
    while(1)
    {
        printf("老婆,说个数字:");
        scanf("%d",&input);
        if(input>random_num)
        {
            printf("输大了,护臂哈哈哈哈哈哈\n");
            continue;
        }
        else if(input<random_num)
        {
            printf("输小了,死狗\n");
            continue;
        }
        else if(input==random_num)
        {
            printf("恭喜老婆,猜对啦,太厉害啦～\n");
            break;
        }
    } 
} 
int main ()
{
    int n = 0;
    srand((unsigned)time(NULL));
    do
    {
        menu();
        printf("\n1-开始游戏   2-结束游戏\n");
        scanf("%d",&n);
        switch (n)
        {
            case 1: 
            printf("开始了哦:\n");
            game();
            break;
            case 2:
            printf("切,不玩拉倒!\n"); 
            break; 
            default:
            printf("死狗,虾呀,让你输1和2\n");
            break;
        }
    }while(n);
    return 0;
}

//两个数的最大公约数
#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        while(1)
        {
            int k = a % b;
            if(k!=0)
            { 
                a = b;
                b = k;
                continue;
            }
            if(k==0)
            {
                printf("最大公约数是%d\n",b);
                break;
            } 
        }
    }
    return 0;
}

#include<stdio.h>
int main ()
{
    int m = 0;
    int n = 0;
     int k = 0;
    printf("请输入两个数:\n");
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        while(k = m%n)
        {
            m = n;
            n = k;
        }
        printf("最大公约数是%d\n",n);
    }
    return 0;
}

#include <stdio.h>
int main() 
{
    int n = 0;
    long long sum = 0;
    scanf("%d",&n);
    for(;n>=1;n--)
    {
        sum = sum + n;
    }
    printf("%lld\n",sum);
    return 0;
}
#include <stdio.h>

int main() 
{
    int arr[4];
    int i = 0;
    for(i=0;i<4;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0]);
    while(left<=right)
    {
        if(arr[left]>arr[right])
        {
            right = right - 1;
        }
        if(arr[left]<arr[right])
        {
            left = left + 1;
        }
        if((arr[left]==arr[right])&&(left!=right))
        {
            right = right - 1;
        }
        if((arr[left]==arr[right])&&(left==right))
        {
            printf("%d\n",arr[left]);
            break;
        }
    }

    return 0;
}

#include <stdio.h>
int main()
{
    char ch = '0';
    int num = 0;
    while(scanf("%c",&ch)!=EOF)
    {
        getchar();
        num=(int)ch;
        if((num>64)&&(num<91))
        {
            printf("%c is an alphabet.\n",ch);
        }
        else if((num>96)&&(num<123))
        {
            printf("%c is an alphabet.\n",ch);
        }
        else 
        {
            printf("%c is not an alphabet.\n",ch);
        }    
    }
    return 0;
}

#include <stdio.h>
int main() 
{
    float price = 0;
    int month = 0;
    int date = 0;
    int yh = 0;
    scanf("%f %2d %2d %d", &price, &month, &date, &yh);
    if (month == 11 && date == 11) 
    {
        if (yh == 1)
        {
            price = 0.7 * price - 50;
        } else if (yh == 0) 
        {
            price = 0.7 * price;
        }
    } else if (month == 12 && date == 12) 
    {
        if (yh == 1) 
        {
            price = 0.8 * price - 50;
        } else if (yh == 0)
        {
            price = 0.8 * price;
        }
    }
    if(price<0)
    {
        price = 0;
    }
    printf("%.2f\n",price);
    return 0;
}
#include <stdio.h>
// m/h
int main() 
{
    int n = 0;
    int h = 0;
    int m = 0;
    int i = 0;
    while(scanf("%d %d %d",&n,&h,&m)!=EOF)
    {
        if(m%h!=0)
        {
            i = n - (m/h+1);
        }
        if(m%h==0)
        {
            i = n -(m/h);
        }
        printf("%d\n",i);
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float AVG = (a+b+c+d+e)/5.0;
    printf("%.1f",AVG);
    return 0;
}
#include <stdio.h>
int main() 
{
    int arr[5];
    int i = 0;
    int sum = 0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    float avg = sum/5.0;
    printf("%.1f\n",avg);
    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    int b;
    int sum = 0;
    scanf("%x %o",&a,&b);
    printf("%d\n",a+b);
    return 0;
}

#include<stdio.h>
int main ()
{
     int c ;
    scanf("%x",&c);
    printf("%#x\n",c);
    printf("%d\n",c);
    return 0;
}

#include <stdio.h>
int main() 
{
    float m = 0;
    float kg = 0;
    scanf("%f %f",&kg,&m);
    float bim = kg/(m*m);
    if((bim>=18.5)&&(bim<=23.9))
    {
        printf("%f\n",bim);
        printf("Normal\n");
    }
    else 
    {
        printf("%f\n",bim);
        printf("Abnormal\n");
    }
    
    return 0;
}

#include <stdio.h>
int main() 
{
    int num = 10000;
    for(num=10000;num<100000;num++)
    {
        if(num==(num/10000)*(num%10000)+(num/1000)*(num%1000)+(num/100)*(num%100)+(num/10)*(num%10))
        {
            printf("%d ",num);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    printf("您好！\a\a\a\a\a\a\a\a\a\a\n");
    return 0;
}

#include<stdio.h>
int main()
{
    puts("ABCDE");
    printf("ABCDE\n");
}

#include<stdio.h>
int main ()
{
    float a = 123.567;
    printf("%-27.20f",a);
    return 0;
}

#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int max = (a>b)?a:b;
        printf("%d\n",max);
    }  
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[] = "helloworld";
    char arr2[20] = "world!";
    strcpy(arr1,arr2);//将arr2赋值给arr1,且arr2的长度要小于arr1
    printf("%s\n",arr1);
    return 0;
}

//写一个函数，找出两个整数的最大值
#include<stdio.h>
int MAX(int x,int y)
{
    int max = (x>y?x:y);
    return max;
}
int main()
{
    int a = 0;
    int b = 0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int c = MAX(a,b);
        printf("%d\n",c);
    }
    return 0;
}

//写一个函数交换俩个整型变量的内容
//以下是错误程序
#include<stdio.h>
void exc(int x,int y)//x,y为形式参数
{
    int m = 0;
    m = y;
    y = x;
    x = m;
}
int main ()
{
    int a = 0;
    int b = 0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        printf("交换前a=%d b=%d\n",a,b);
        exc(a,b);
        //a,b是实际参数
        //形参是实参的一份临时拷贝
        //所以对实参的改变不会影响实参
        printf("交换后a=%d b=%d\n",a,b);
    }
    return 0;
}

//写一个函数交换俩个整型变量的内容
#include<stdio.h>
void Swap(int *pa,int *pb)//pa和pb存储的是a和b的地址
                          //int* pa=&a，int* pb=&b
                          //从地址中取a，b的值
{
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
int main()
{
    int a = 0;
    int b = 0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        printf("交换前a=%d b=%d\n",a,b);
        Swap(&a,&b);
        printf("交换后a=%d b=%d\n",a,b);
    }
    return 0;
}

//函数实参可以是变量，常量，表达式，函数
#include<stdio.h>
int MAX(int x,int y)
{
    int max = (x>y?x:y);
    return max;
}
int main()
{
    int a = 0;
    int b = 0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int c = MAX(a,b);//变量
        int d = MAX(8,4);//常量
        int e = MAX(a-b,a+b);//表达式
        int f = MAX(a,MAX(7,8));//函数的参数---函数调用
        printf("%d\n",c);
        printf("%d\n",d);
        printf("%d\n",e);
        printf("%d\n",f);
    }
    return 0;
}

//写一个函数可以判断一个数是否为素数
#include<stdio.h>
int SH(int x)
{
    int i = 0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    if(i==x)
    {
        return 1;
    }
}
int main ()
{
    int a = 0;
    while(scanf("%d",&a)!=EOF)
    {
        if(SH(a)==1)
        {
            printf("%d是素数\n",a);
        }
        else if(SH(a)==0)
        {
            printf("%d不是素数\n",a);
        }
    }
    return 0;
}
 
//写一个函数判断是否为闰年(四年一润，百年不润，四百年一润)
#include<stdio.h>
int is_run (int y)
{
    if((y%4==0)&&(y%100!=0))
    {
        return 1;
    }
    else if(y%400==0)
    {
        return 1;
    }
    else
    return 0;
}
int main ()
{
    int year = 0;
    while(scanf("%d",&year)!=EOF)
    {
        if(is_run(year)==1)
        {
            printf("%d是闰年\n",year);
        }
        else if(is_run(year)==0)
        {
            printf("%d不是闰年\n",year);
        }
    }
    return 0;
}

//写一个函数，实现一个整形有序数组的二分查找。
#include<stdio.h>
int is_find(int k,int arr[],int sz)
{
    int left = 0;
    int right = sz - 1;
    while(left<=right)
    {
        //int mid = (left+right)/2;
        int mid = left + (right - left)/2; //新的写法
        if(arr[mid]<k)
        {
            left = mid + 1;
        }
        if(arr[mid]>k)
        {
            right = mid - 1;
        }
        if(arr[mid]==k)
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int k = 0;
    while(scanf("%d",&k)!=EOF)
    {
        int sz = sizeof(arr)/sizeof(arr[0]);
        int ret = is_find(k,arr,sz);
        if(ret==(-1))
        printf("没找到\n");
        else
        printf("找到了 下标是%d!\n",ret);
    }
    return 0;
}

#include <stdio.h>
void print_char()
{
    printf("******************\n");
    printf("  How do you do !\n");
    printf("******************\n");
}
int main()
{
    print_char();
    return 0;
}

#include<stdio.h>
float MAX(int x,int y)
{
    return (x>y?x:y);
}
int main ()
{
    int a = 0;
    int b = 0;
    printf("输入两个数>\n");
    scanf("%d %d",&a,&b);
    float max = MAX(a,b);
    printf("较大数是%f\n\n",max);
    return 0;
}      

//最大公约数，最小公倍数
#include<stdio.h>
int MAX_g(int a,int b)
{
    while (a%b!=0)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return b;
}
int MIN_b(int x,int y)
{
    int z = y;
    y = x / MAX_g(x,y);
    x = z /MAX_g(x,z);
    return z*y;
}
int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d",&num1,&num2);
    int max_g = MAX_g(num1,num2);
    int min_b = MIN_b(num1,num2);
    printf("最大公约数是%d\n",max_g);
    printf("最小公倍数是%d\n",min_b);
    return 0;
}

#include<stdio.h>
#include<math.h>
float result1(int a,int b,int c,int disc)
{
    return ((-b)+sqrt(disc))/(2*a);
}
float result_1(int a,int b,int c,int disc)
{
    return ((-b)-sqrt(disc))/(2*a);
}
float result2(int a,int b,int c,int disc)
{
    return -b/(2*a);
}
void result3(int a,int b,int c)
{
    printf("没有实数根\n");
}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    float x1 = 0;
    float x2 = 0;
    int disc = (b*b)-(4*a*c);
    scanf("%d %d %d",&a,&b,&c);
    if(disc>0)
    {
        x1 = result1(a,b,c,disc);
        x2 = result_1(a,b,c,disc);
        printf("x1=%f x2=%f",x1,x2);
    }
    if(disc==0)
    {
        x1 = x2 = result2(a,b,c,disc);
        printf("x1=%f x2=%f\n",x1,x2);
    }
    if(disc<0)
    {
        result3(a,b,c);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
void fan(char str[])
{
    int i = 0;
    int j = 0;
    for(i=0,j=strlen(str);i<(strlen(str)/2);i++,j--)
    {
        char t =str[i];
        str[i] = str[j-1];
        str[j-1] = t;
    }
}
int main ()
{
    char str[100] = "\0";
    printf("输入字符串:\n");
    scanf("%s",str);
    fan(str);
    printf("反向输出为\n%s\n",str);
    return 0;
}
//随机输入十个整数从小到大输出
#include<stdio.h>
int main()
{
    int arr[10] = {0};
    int i = 0;
    printf("输入十个整数:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j = 0;
    for(j=0;j<10;j++)
    {
        int k = j + 1;
        while(k<10)
        {
            if(arr[j]>arr[k])
            {
                int t = arr[j];
                arr[j] = arr[k];
                arr[k] = t;
            }
            k++;
        }
    }
    printf("从小到大排序为:");
    for(int n=0;n<10;n++)
    {
        printf("%d ",arr[n]);
    }
    return 0;
}

//一行，输出成绩最高的前五个，用空格分隔。
#include <stdio.h>
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int arr[50] = {0};
    int i = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a = 0;
    for(a=0;a<n;a++)
    {
        int b = a + 1;
        for(b=a+1;b<n;b++)
        {
            if(arr[a]<arr[b])
            {
                int tmp = arr[a];
                arr[a] = arr[b];
                arr[b] = tmp;
            }
        }
    }
    printf("前五名为: ");
    for(int k=0;k<5;k++)
    {
        printf("%d ",arr[k]);
    }    
    return 0;
}

//4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。
#include <stdio.h>
int add_num(int num)
{
    return num = num + 1;
}
int main()
{
    int num = 0;
    scanf("%d",&num);
    int j = 0;
    scanf("%d",&j);
    for(int i=0;i<j;i++)
    {
        num = add_num(num);
    }
    printf("%d\n",num);
    return 0;
}

#include<stdio.h>
int main()
{
    int i = 0;
    int j = 1;
    for(i=1;i<12;i=i+2)
    {
        j = j * i;
    }
    printf("%d\n",j);
    return 0;
}

#include<stdio.h>
int main()
{
    int n = 5;
    int arr[5] = {0};
    int i = 0;
    for(i=1;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<5;i++)
        {
            if(arr[i]>80)
            {
                printf("%d ",arr[i]);
            }    
        }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int i = 1;
    float j = 1.0;
    float sum = 0;
    for(j=1;j<101;j++)
    {
        sum = sum + pow((-1),(j-1))*(i/j);
    }
    printf("%f\n",sum);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    float r = 0.07;
    int n = 10;
    double p = pow(1+r,n)*100;
    printf("增长%lf个百分比\n",p);
    return 0;
}

#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    float x = 0;
    float y = 0;
    char c1 = 0;
    char c2 = 0;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&x,&y);
    getchar();
    scanf("%c",&c1);
    getchar();
    scanf("%c",&c2);
    printf("%d %d\n",a,b);
    printf("%f %f\n",x,y);
    printf("c1=%c c2=%c\n",c1,c2);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char str[20] = "China";
    int left = 0;
    for(left=0;left<strlen(str);left++)
    {
        str[left] = str[left] + 4; 
    }
    printf("%s\n",str);
    puts(str);
    return 0;
}

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float r = 0;
    float h = 0;
    scanf("%f %f",&r,&h);
    printf("圆周长是%.2f\n",2*PI*r);
    printf("圆面积是%.2f\n",PI*pow(r,2));
    printf("圆球表面积是%.2f\n",4*PI*pow(r,2));
    printf("圆球体积%.2f\n",(3.0/4.0)*PI*pow(r,3));
    printf("圆柱体积是%.2f\n",PI*pow(r,2)*h);
    return 0;
}

#include<stdio.h>
int main ()
{
    int c1 = 0;
    int c2 = 0;
    c1 = getchar();
    getchar();
    c2 = getchar();
    putchar(c1);
    putchar('\n');
    putchar(c2);
    putchar('\n');
    printf("%d\n",c1);
    printf("%d\n",c2);
    return 0;
}

#include<stdio.h>
#include<math.h>
#define M 1000
int main()
{
    float num = 0;
    while(1)
    {
        printf("请输入一个小于%d的正数\n",M);
        scanf("%f",&num);
        if(0<num&&num<1000)
        {
            printf("%.0f\n",sqrt(num));
        }
        else
        printf("输入错误:\n");
        continue;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    float x = 0;
    float y = 0;
    while(scanf("%f",&x)!=EOF)
    {
        if(x<1)
    {
        y = x;
    }
    else if(x>=1&&x<10)
    {
        y = 2 * x - 1;
    }
    else if(x>=10)
    {
        y = 3 * x - 11;
    }
    printf("%f\n",y);
    }
    return 0;
}

#include<stdio.h>
int main ()
{
    float score = 0;
    while(scanf("%f",&score)!=EOF)
    {
        if(score<60)
        printf("'E'\n");
        else if(score>=60&&score<70)
        printf("'D'\n");
        else if(score>=70&&score<80)
        printf("'c'\n");
        else if(score>=80&&score<90)
        printf("'B'\n");
        else if(score>=90&&score<=100)
        printf("'A'\n");
        else
        printf("输入错误\n");
        continue;
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    float score = 0;
    char grade = 0;
    printf("请输入学生成绩:\n");
    scanf("%f",&score);
    while(score<0||score>100)
    {
        printf("输入错误，请重新输入：\n");
        scanf("%f",&score);
    }
    if(score>=0&&score<=100)
    {
        switch((int)(score/10))
        {
            case 10:          
            case 9:
            grade = 'A';
            break;
            case 8:
            grade = 'B';
            break;
            case 7:
            grade = 'C';
            break;
            case 6:
            grade = 'D';
            break;
            case 5:
            case 4:           
            case 3:           
            case 2:      
            case 1:
            case 0:
            grade = 'E';
            break;
        }
    printf("学生的成绩为%.1f,成绩等级为%c\n",score,grade);
    } 
    
    return 0;
}

#include<stdio.h>
#include<string.h>
void print_1(char str[],int *i)
{
    if(strlen(str)==1)
    {
        *i = 1;
    }
    else if(strlen(str)==2)
    {
        *i = 2;
    }
    else if(strlen(str)==3)
    {
        *i = 3;
    }
    else if(strlen(str)==4)
    {
        *i = 4;
    }
}
void print_2(char str[],int i)
{
    int j = 0;
    for(j=0;j<i;j++)
    {
        printf("%c\n",str[j]);
    }
}
void print_3(char str[],int i)
{
    int k = i - 1;
    for(k=i-1;k>=0;k--)
    {
        printf("%c\n",str[k]);
    }

}
int main()
{
    char str[20] = "\0";
    int i = 0;
    printf("请输入一个不多于5位的正整数:\n");
    scanf("%s",str);
    print_1(str,&i);
    printf("你输入了%s\n它是%d位数\n",str,i);
    printf("分别输出每一个数字:\n");
    print_2(str,i);
    printf("按照逆序输出各位数字:\n");
    print_3(str,i);
    return 0;
}

//输入4个整数，小到大
#include<stdio.h>
int main()
{
    int arr[4] = {0};
    int i = 0;
    printf("请输入四个整数:\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a = 0;
    for(a=0;a<4;a++)
    {
        int j = 0;
        for(j=a+1;j<4;j++)//外部循环，从arr[0]开始
        {
            if(arr[a]>arr[j])//内部循环，arr[0]进入时跟arr[1,2,3]比较
                             //当0>1时，将1的值传给0
                             //当0>2时，将2的值传给0
                             //以此类推保证arr[0】是最小的，以此类推arr[1,2,3]
            {
                int tmp = arr[a];
                arr[a] = arr[j];
                arr[j] = tmp;
            }
            else
            continue;
        }
    printf("%d ",arr[a]);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100] = "\0";
    int zm = 0;
    int k = 0;
    int num = 0;
    int other = 0;
    printf("输入一行字符: ");
   gets_s(str,100);
    int i = 0;
    for(i=0;i<strlen(str);i++)
    {
        if(((int)str[i]>64&&(int)str[i]<91)||((int)str[i]>96&&(int)str[i]<123))
        {
            zm++;
        }
        else if((int)str[i]==32)
        {
            k++;
        }
        else if((int)str[i]>47&&(int)str[i]<57)
        {
            num++;
        }
        else
        other++;
    }
    printf("输入英文字符的个数为%d\n",zm);
    printf("输入空格的个数为%d\n",k);
    printf("输入数字的个数为%d\n",num);
    printf("输入其他字符的个数为%d\n",other);
    return 0;
}

#include <stdio.h>
int main ()
{
    float a = 0;
    printf("请输入一个数字: ");
    scanf("%f",&a);
    int n = 0;
    printf("请输入该数字的最大位数: ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + a;
        a = a*10 + 2;
    }
    printf("最后的结果是%d\n",sum);
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 1;
    double m = 1;
    double sum = 0;
    for(n=1;n<21;n++)
    {
        m = n * m;
        sum = sum + m;
    }
    printf("%e\n",sum);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int k = 0;
    long sum = 0;
    double m = 0;
    for(int i=1;i<101;i++)
    {
        k = k + i;
    }
    for(int j=1;j<51;j++)
    {
        sum = sum + pow(j,2);
    }
    for(int g=1;g<11;g++)
    {
        m = m + (1.0/g); 
    }
    printf("%d\n",k);
    printf("%ld\n",sum);
    printf("%lf\n",m);
    printf("%lf\n",k+sum+m);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main ()
{
    int n = 100;
    printf("输出所有水仙花数: ");
    for(n=100;n<1000;n++)
    {
        int m = 0;
        m = pow(n/100,3) + pow((n%100)/10,3) + pow((n%100)%10,3);
        if(n==m)
        {
            printf("%d ",n);
        }
    }
    return 0;
}

#include<stdio.h>
int main ()
{
    int m = 0;
    int i = 0;
    for(m=2;m<1000;m++)
    {
        int s = 0;
        for(i=1;i<m;i++)
        {
            if((m%i)==0)
            s = s + i;   
        }
        if(m==s)
        {
            printf("%d ",m);
        }
    }
    return 0;
}

#include<stdio.h>
void test(int*p)
{
    (*p)++;
}
int main()
{
    int num = 0;
    int i = 0;
    scanf("%d",&i);
    for(int j=1;j<i+1;j++)
    {
        test(&num);
    }
    printf("%d\n",num);
    return 0;
}

#include<stdio.h>
#include"add.h"
int main()
{
    int a = 0;
    a = Add(3,5);
    printf("%d\n",a);
    return 0;
}

#include<stdio.h>
void new_line()
{
    printf("我爱杨馨悦\n");
}
void three_line()
{
    int i = 0;
    for(i=0;i<3;i++)
    {
        new_line();
    }
}
int main ()
{
    three_line();
    return 0;
}

//接受一个整型值（无符号），按顺序打印每一位
#include<stdio.h>
void put_1(unsigned int num)
{
    if(num>9)
    {
        put_1(num/10);
    }
    printf("%d ",num%10);
}
int main ()
{
    unsigned int num = 0;
    scanf("%d",&num);
    printf("按照顺序打印每一位为:\n");
    put_1(num);
    printf("\n");
    return 0;
}

//求字符串长度
#include<stdio.h>
int long_th(char*p)
{
    if(*p == '\0')
    {
        return 0;
    }
    else
    return 1 + long_th(p+1);
}
int main ()
{
    char str[100] = "\0";
    scanf("%s",str);
    int leng = long_th(str);
    printf("字符串长度是%d\n",leng);
    return 0;
}

#include <stdio.h>
/// @brief 
/// @param n 
/// @return 
double fac(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    return n*fac(n-1);
}
int main ()
{
    int n = 0;
    printf("请输入一个数:\n");
    scanf("%d",&n);
    double m = 0;
    m = fac(n);
    printf("这个数的阶乘是%e\n",m);
    return 0;
}

//F(0)=1，F(1)=1, F(n)=F(n - 1)+F(n - 2)
#include<stdio.h>
int FS(int n)
{
    if(n<=2)
    return 1;
    else
    return FS(n-1)+FS(n-2);
}
int main ()
{
    int n = 0;
    while(scanf("%d",&n)!=EOF)
    {
        int fs = 0;
        fs = FS(n);
        printf("第%d个斐波那契数是%d\n",n,fs);
    }
    return 0;
}

#include<stdio.h>
void exc(int*x,int*y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int main ()
{
    int x = 0;
    int y = 0;
    printf("请输入两个整数:\n");
    scanf("%d%d",&x,&y);
    exc(&x,&y);
    printf("交换后得到:\n");
    printf("%d %d\n",x,y);
    return 0;
}

//函数判断闰年
#include<stdio.h>
int leap_year(int year)
{
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    return 1;
    else
    return 0;

}
int main ()
{
    int year = 0;
    int flag = 0;
    printf("请输入一个年份:\n");
    scanf("%d",&year);
    flag = leap_year(year);
    if(flag==0)
    printf("%d不是闰年\n",year);
    else
    printf("%d是闰年\n",year);
    return 0;
}

//利用上面实现的函数打印100到200之间的素数。
#include <stdio.h>
int prime(int num)
{
    int i = 0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    if(i==num)
    return 1;
}
int main ()
{
    int num = 0;
    printf("100到200之间的素数是:\n");
    for(num=101;num<=200;num=num+2)
    {
        int flag = prime(num);
        if(flag==1)
        printf("%d ",num);
    }
    return 0;
}

实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。

#include<stdio.h>
void table(int i,int j)
{
    for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            int k = i * j;
            printf("%d*%d=%d ",i,j,k);
        }
    }
}
int main ()
{
    int i = 1;
    int j = 1;
    printf("9*9乘法表:\n");
    table(i,j);
    return 0;
}

//F[n]=F[n-1]+F[n-2](n>=2,F[0]=1,F[1]=1)
#include <stdio.h>
int fib(int n)
{
    if(n<3)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main ()
{
    int n = 0;
    while(scanf("%d",&n)!=EOF)
    {
    int m = 0;
    m = fib(n);
    printf("第%d个斐波那契数是%d\n",n,m);
    }
    return 0;
}

//递归实现n的k次方
#include <stdio.h>
double pow_p(float n,float k)
{
    if(k==1)
    {
        return n;
    }
    else
    {
        return n*(pow_p(n,k-1));
    }
}
int main ()
{
    float n = 0;
    float k = 0;
    while(scanf("%f%f",&n,&k)!=EOF)
    {
        double m = 0;
        m = pow_p(n,k);
        printf("乘方的结果是:%e\n",m);
    }
    return 0;
}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//输入：1729，输出：19
#include <stdio.h>
unsigned int DigitSum(unsigned int num)
{
    if(num/10==0)
    {
        return num;
    }
    else
    {
        return num%10 + DigitSum(num/10);
    }
}
int main ()
{
    printf("请输入一个非负整数:\n");
    unsigned int num = 0;
    while(scanf("%u",&num)!=EOF)
    {
        unsigned int sum = 0;
        sum = DigitSum(num);
        printf("%u的组成数字之和是%u\n",num,sum);
    }
    return 0;
}

//递归方式实现打印一个整数的每一位
#include<stdio.h>
void print_(int num)
{
    if(num/10>0)
    {
    print_(num/10);
    printf("%d ",num%10);
    }
    else
    printf("%d ",num);
}
int main ()
{
    int num = 0;
    printf("输入一个整数:\n");
    scanf("%d",&num);
    print_(num);
    return 0;
}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
#include <stdio.h>
double fac(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
       return n*fac(n-1);
}
int main ()
{
    int n = 0;
    printf("请输入一个数:\n");
    scanf("%d",&n);
    double m = 0;
    m = fac(n);
    printf("%d的阶乘是%e\n",n,m);
    return 0;
}

#include <stdio.h>
double fac(int n)
{
    double k = 1;
    for(;n>=1;n--)
    {
        k = k * n;
    }
    return k;
}
int main ()
{
    int n = 0;
    printf("请输入一个整数:\n");
    scanf("%d",&n);
    double m = 0;
    m = fac(n);
    printf("%d的阶乘是%e\n",n,m);
    return 0;
}

//递归和非递归分别实现strlen
#include <stdio.h>
int strlen_s(char *str)
{
    if(*str=='\0')
    {
        return 0;
    }
    else
    {
        return 1 + strlen_s((str + 1));
    }
}
int main ()
{
    char str[100] = "\0";
    printf("输入一个字符串:\n");
    scanf("%s",str);
    int length = 0;
    length = strlen_s(str);
    printf("该字符串长度是%d\n",length);
    return 0;
}

#include <stdio.h>
int strlen_s(char str[])
{
    int i = 0;
    int j = 0;
    for(i=0;str[i]!='\0';i++)
    {
        j++;
    }
    return j;
}
int main ()
{
    char str[100] = "\0";
    printf("输入一个字符串:\n");
    scanf("%s",str);
    int length = 0;
    length = strlen_s(str);
    printf("该字符串长度是%d\n",length);
    return 0;
}

//字符串逆序
#include <stdio.h>
void Reverse_order(char*str)
{
    if(*str!='\0')
    {
        Reverse_order(str+1);
        printf("%c",*str);
    }
}
int main ()
{
    char str[100] = "\0";
    printf("请输入一个字符串:\n");
    scanf("%s",str);
    printf("倒序得到:\n");
    Reverse_order(str);
    printf("\n");
    return 0;
}

//非递归分别实现求第n个斐波那契数
#include <stdio.h>
double fib(int n)
{
    if(n<3)
    {
        return 1;
    }
    else
    {
        int a = 1;
        int b = 1;
        int c = 1;
        while(n>=3)
        {
            a = b;
            b = c;
            c = a + b;
            n--;
        }
        return c;
    }
}
int main ()
{
    int n = 0;
    scanf("%d",&n);
    double m = fib(n);
    printf("第%d个斐波那契数%e\n",n,m);
    return 0;
}

#include <stdio.h>
int MAX(int x,int y)
{
    return x>y?x:y;
}
int main ()
{
    int a = 0;
    int b = 0;
    printf("输入不同的两个整数\n");
    scanf("%d %d",&a,&b);
    int c = 0;
    c = MAX(a,b);
    printf("%d和%d中较大的数是%d\n",a,b,c);
}

#include <stdio.h>
void print_f()
{
    printf("大家都是好孩");
}
int main()
{
    print_f();
    return 0;
}

#include <stdio.h>
int MAX(float x,float y)
{
    int c = x>y?x:y;
    return c;
}
int main ()
{
    float num1 = 2.6;
    float num2 = 3.3;
    float max = MAX(num1,num2);
    printf("%f\n",max);
    return 0;
}

#include <stdio.h>
float fib(float num1,float num2)
{
    int i = 1;
    float sum = 0;
    for(i=1;i<=20;i++)
    {
        float a = num1 + num2;
        float b = num1;
        num1 = a;
        num2 = b;
        float c = a / b;
        sum = sum + c;
    }
    return sum;
}
int main ()
{
    float num1 = 1.0;
    float num2 = 1.0;
    int i = 1;
    float num = fib(num1,num2);
    printf("该数列前20项的和是%f\n",num);
    return 0;
}

#include <stdio.h>
int main ()
{
    float h = 100;
    int i = 1;
    float sum = 0;
    for(i=1;i<=10;i++)
    {
        sum = sum + h*2;
        h = h / 2.0;
    }
    sum = sum - h - 100;
    printf("第十次落地共经过%f米,第十次反弹%f米高\n",sum,h);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main ()
{
    float a = 1.0; //a是分子
    int i = 1.0;   //i是分母
    double j = 0;  //j是a/i
    int k = 1;
    double sum = 0.0;
    for(i=1.0,k=1;1;i=i+2,k++)
    {
        j = a / i;
        if(j>=1e-6)
        {
            sum = sum + pow(-1,k+1)*j;  
        }
        else
        break;
    }
    printf("pai的近似值大约是%lf\n",4*sum);
    return 0;   
}

#include <stdio.h>
int main() 
{
    int Chinese = 0;
    int math = 0;
    int English = 0;
    scanf("%d %d %d",&Chinese,&math,&English);
    int max1 = Chinese>math?Chinese:math;
    int max2 = English>max1?English:max1;
    printf("%d\n",max2);
    return 0;
}
#include <stdio.h>
int main() 
{
    int num = 0;
    while(scanf("%d",&num)!=EOF)
    {
        if(num%2==0)
        printf("Even\n");
        else
        printf("Odd\n");
    }  
    return 0;
}
#include <stdio.h>
int main() 
{
    int score = 0;
    while(scanf("%d",&score)!=EOF)
    {
        if(score>=60)
        printf("Pass\n");
        else
        printf("Fail\n");
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    int score = 0;
    while(scanf("%d",&score)!=EOF)
    {
        if(score>=90&&score<=100)
        printf("Perfect\n");
        else
        continue;;
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[3] = {0};
    int i = 0;
    int j = 0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
        for(i=0,j=i+1;j<3;j++)
        {
            if(arr[i]<arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    printf("%d\n",arr[0]);
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[10] = {0};
    int i = 0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{8,9,10,11}};
    int i = 0;
    for(i=0;i<3;i++)
    {
        int j = 0;
        for(j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//冒泡排序
#include <stdio.h>
void bubble_sort(int arr[10])
{
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int j = 0;
    for(i=0;i<sz-1;i++)
    {
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
int main ()
{
    int arr[10] = {0};
    int i = 0;
    int j = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    printf("输入十个整数分别为:\n");
    for(i=0;i<sz;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(&arr,sz);//冒泡排序
    printf("从小到大排序为:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }  
    printf("\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int MAX(int x,int y);
    int x = 1;
    int y = 2;
    int c = MAX(x,y);
    printf("%d\n",c);
    return 0;
}
int MAX(int x,int y)
{
    return x>y?x:y;
}

//找出四个整数中最大的数。
#include <stdio.h>
int MAX2(int x,int y)
{
    return x>y?x:y;
}
int MAX4(int n1,int n2,int n3,int n4)
{
    int x = MAX2(n1,n2);
    int y = MAX2(x,n3);
    int z = MAX2(y,n4);
    return z;
}
int main ()
{
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int a = MAX4(num1,num2,num3,num4);
    printf("%d\n",a);
    return 0;
}

#include <stdio.h>
int MAX(int x,int y)
{
    return x>y?x:y;
}
int main ()
{
    int x = 1;
    int y = 2;
    int z = 3;
    int a = MAX(z,MAX(x,y));
    printf("%d\n",a);
    return 0;
}

//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：输入：1234，输出 1 2 3 4
#include <stdio.h>
void print(int num)    //无需返回值，用void
{
    if(num>10)
    {
        print(num/10);
    }
    printf("%d ",num%10);
}
int main ()
{
    int num = 0;   //初始化
    scanf("%d",&num);    //输入一个整数
    print(num);    //用自定义函数print进行顺序输出
    return 0;
}

#include<stdio.h>
int age (int n)
{
    int c = 0;
    if(n==1)
    {

        c = 10;
    }
    else
    c = age(n-1) + 2;
    return c;
}
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int age5 = age(n);
    printf("%d\n",age5);
    return 0;
}

#include <stdio.h>
int fac(int n)
{
    if(n>1)
    {
        return n * fac(n-1);
    }
    else
    return 1;
}
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int Fac = 0;
    Fac = fac(n);
    printf("%d\n",Fac);
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[] = {1,2,(3,4,5)};
    printf("%d\n", sizeof(arr));
    return 0;
}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include <stdio.h>
void exc(int arrA[],int arrB[])
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    for(i=0,j=0;i<10;i++,j++)
    {
        tmp = arrA[i];
        arrA[i] = arrB[j];
        arrB[j] = tmp;
    }
}
int main ()
{
    printf("请输入两个数组(数组大小为10)\n");
    int arrA[10] = {0};
    int arrB[10] = {0};
    int i = 0;
    printf("arrA[10]=");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arrA[i]);
    }
    int j = 0;
    printf("arrB[10]=");
    for(j=0;j<10;j++)
    {
        scanf("%d",&arrB[j]);
    } 
    exc(arrA,arrB);  
    printf("交换后得到:\n");
    printf("arrA[10]=");
    for(i=0;i<10;i++)
    {
        printf("%d ",arrA[i]);
    }
    printf("\n");
    printf("arrB[10]=");
    for(j=0;j<10;j++)
    {
        printf("%d ",arrB[j]);
    }
    return 0;
}

//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
#include <stdio.h>
void print(int arr[])
{
   int i = 0;
   for(i=0;i<10;i++)
   {
    printf("%d ",arr[i]);
   } 
   printf("\n");
}
void reverse(int arr[])
{
    int i = 0;
    int j = 9;
    int tmp = 0;
    for(i=0,j=9;i<=5;i++,j--)
    {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    print(arr);
}
void init(int arr[])
{
    int i = 0;
    for(i=0;i<10;i++)
    {
        arr[i] = 0;
    }
    print(arr);
}
int main ()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("打印数组的每个元素:\n");
    print(arr);
    printf("讲数组元素逆置得到:\n");
    reverse(arr);
    printf("初始化数组为:\n");
    init(arr);
    return 0;
}

//实现一个对整形数组的冒泡排序
#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    for(i=0;i<sz-1;i++)
    {
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
int main ()
{
    int arr[10] = {0};
    printf("请输入十个整数: ");
    int i = 0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sz = 0;
    sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr1[2][3] = {{1,2,3},{4,5,6}};
    int arr2[3][2] = {0};
    int i = 0;
    int j = 0;
    int k = 0;
    int tmp = 0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            arr2[j][i] = arr1[i][j];         
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    char ch = 0;
    while(scanf("%c",&ch)!=EOF)
    {
        getchar();
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            printf("Vowel\n");
        }
        else 
        printf("Consonant\n");
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    char ch = 0;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch>='A'&&ch<='Z')
        {
            ch = ch + 32;
            printf("%c\n",ch);
        }
        else if(ch>='a'&&ch<='z')
        {
            ch = ch - 32;
            printf("%c\n",ch);
        }
        else 
        continue;
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    int a = 0;
    int b = 0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a>b)
        printf("%d>%d\n",a,b);
        else if (a<b)
        printf("%d<%d\n",a,b);
        else
         printf("%d=%d\n",a,b);
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    int t = 0;
    while (scanf("%d",&t)!=EOF)
    {
        if(t>0)
        printf("1\n");
        else if(t<0)
        printf("0\n");
        else
        printf("0.5\n");
    }
    return 0;
}

#include <stdio.h>
#include <math.h>
int main() 
{
    float kg = 0;
    float cm = 0;
    while(scanf("%f %f",&kg,&cm)!=EOF)
    {
        double bim = 0;
        cm = cm / 100;
        printf("%f\n",cm);
        printf("%f %f",kg,cm);
        bim = kg / pow(cm,2);
        printf("%lf\n",bim);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>
int main() 
{
    float a = 0;
    float b = 0;
    float c = 0;
    float der = 0;
    float x1 = 0;
    float x2 = 0;
    while(scanf("%f %f %f",&a,&b,&c)!=EOF)
    {
        if(a==0)
        {
            printf("Not quadratic equation\n");
        }
        else 
        {
            der = pow(b,2)-(4*a*c);
            x1 = (-b-sqrt(der))/(2*a);
            x2 = (-b+sqrt(der))/(2*a);
            if(der==0)
            {
                if(b==0&&c==0)
                {
                    printf("x1=x2=0.00");
                }
                else
                {
                    printf("x1=x2=%.2f\n",x2);
                }
                
            }
            else if(der>0)
            {
                if(x1==0)
                printf("x1=0.00;x2=%.2f",x2);
                else if(x2==0)
                printf("x1=%.2f;x2=0.00",x1);
                else
                printf("x1=%.2f;x2=%.2f\n",x1,x2);
            }
            else
            {
                if(-b/(2*a)==0)
                {
                    float a = sqrt(-der)/(2*a);
                    printf("x1=0.00-%.2fi;x2=0.00+%.2fi\n",a,a);
                }
                else
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",-b/(2*a),sqrt(-der)/(2*a),-b/(2*a),sqrt(-der)/(2*a));
            }
        }
    } 
    return 0;
}

#include <stdio.h>
int main() 
{
    int arr1[] = {1,3,5,7,8,10,12};
    int arr2[] = {4,6,9,11};
    int year = 0;
    int month = 0;
    while(scanf("%d %d",&year,&month)!=EOF)
    {
        int i = 0;
       for(i=0;i<7;i++)
       {
        if(arr1[i]==month)
        {
            printf("31\n");
        }
       }
       int j = 0;
       for(j=0;j<4;j++)
       {
        if(arr2[j]==month)
        {
            printf("30\n");
        }
       }
       if(month==2)
       {
        if(((year%4==0)&&(year%100!=0))||(year%400==0))
        printf("29\n");
        else
        printf("28\n");
       }
    }
    return 0;
}

#include <stdio.h>
void print(int num)
{
    if(num>1)
    print(num-1);
    printf("*");
}
int main() 
{
    int num = 0;
    char ch = 0;
    while(scanf("%d",&num)!=EOF)
    {
        print(num);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main() 
{
    int num = 0;
    while(scanf("%d",&num)!=EOF)
    {
        int i = 0;
        int j = 0;
        for(i=0;i<num;i++)
        {
            for(j=0;j<num;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
#include <stdio.h>

int main() 
{
    int num = 0;
    while(scanf("%d",&num)!=EOF)
    {
        int i = 0;
        int j = 0;
        for(i=0;i<num;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>

int main() 
{
    int num = 0;
    while(scanf("%d",&num)!=EOF)
    {
        int i = num;
        int j = 0;
        for(i=num;i>0;i--)
        {
            for(j=0;j<i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

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
    if(((arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])&&(arr[0][0]!=' '))||((arr[2][0]==arr[1][1]&&arr[1][1]==arr[2][2])&&(arr[0][2]!=' ')))
    {
        return arr[0][0];
    }
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

#include <stdio.h>
int missingNumber(int* nums, int numsSize)
{
    int x = 0;
    for(int i = 0; i < numsSize ; i++)
    {
        x = x ^ nums[i];
        printf("%d ",x);
    }
    printf("\n");
    for(int j = 0;j < numsSize + 1; j++)
    {
        printf("%d ",x);
        x = x ^ j;
    }
    return x;
}
int main ()
{
    int numSize = 0;
    scanf("%d",&numSize);
    int nums[4] = {0};
    printf("输入%d个数:\n",numSize);
    for(int i = 0; i < numSize; i++)
    {
        scanf("%d",&nums[i]);
    }
    int a = missingNumber(nums,numSize);
    printf("消失的数字是%d\n",a);
    return 0;
}

void rotate(int nums[],int numsSize,int k)
{
    for(int i = 0;i < k;i++)
    {
        int tmp = nums[numsSize-1];
        for(int j = numsSize-2;j >= 0;j--)
        {
            nums[j+1] = nums[j];
        }
        nums[0] = tmp;
    }
}
#include <stdio.h>
int main ()
{
    int nums[3] = {0};
    int i = 0;
    printf("输入3个数: ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&nums[i]);
    }
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    int k = 0;
    printf("请输入向右轮转的次数:");
    scanf("%d",&k);
    rotate(nums,numsSize,k);
    printf("向右轮转%d次后得到:\n",k);
    for(i=0;i<3;i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\n");
    return 0;
}

//p27.8.（1）
#include <stdio.h>
int Sum(int arr[][5],int x,int y)
{
    int sum = 0;
    int i = 0;
    int j = 0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            sum = sum + arr[i][j];
        }
    }
    return sum;
}
int main ()
{
    int n = 0;
    printf("请输入n阶二维数组,你所希望的阶数: ");
    scanf("%d",&n);
    int arr[5][5] = {0};
    int i = 0;
    int j = 0;
    printf("输入二维数组的元素\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum = 0;
    sum = Sum(arr,5,5);
    printf("这个二维数组所有元素之和是%d\n",sum);
    return 0;
}
//p27.8(2)
#include <stdio.h>
void print_min_max(int arr[])
{
    int i = 0;
    for(i=0;i<3;i++)
    {
        int j = 0;
        for(j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                int tmp = 0;
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
int main ()
{
    int arr[3] = {0};
    printf("请输入三个整数:\n");
    int i = 0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    print_min_max(arr);
    printf("从小到大输出为:\n");
    for(i=0;i<3;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
//27.8（3）
#include <stdio.h>
int Max(int arr[],int sz)
{
    int max = arr[0];
    for(int i = 1;i < sz;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int Min(int arr[],int sz)
{
    int min = arr[0];
    for(int i = 1;i < sz;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main ()
{
    int n = 0;
    printf("请输入数组的范围:> ");
    scanf("%d",&n);
    int arr[5] = {0};
    printf("请输入%d个数字\n",n);
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sz = sizeof(arr)/sizeof(arr[0]);
    int max = Max(arr,sz);
    int min = Min(arr,sz);
    printf("最大数为%d\n",max);
    printf("最小数为%d\n",min);
    return 0;
}
//p29实验4
#include <stdio.h>
int Fac(int n)
{
    int i = 0;
    int num = 1;
    int sum = 0;
    for(i=1;i<n+1;i++)
    {
        num = num * i;
        sum = sum +num;
    }
    return sum;
}
int main ()
{
    int n = 0;
    printf("请输入一个数:> ");
    scanf("%d",&n);
    int fac = Fac(n);
    printf("1到%d的阶乘之和是%d\n",n,fac);
    return 0;
}

//p29实验3
#include <stdio.h>
int prime_number(int n )
{
    int i = 0;
    int j = 0;
    int count = 0;
    for(i=2;i<n+1;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        count++;
    }
    return count;
}
int main ()
{
    int n = 0;
    printf("请输入1~n个数的n值:>");
    scanf("%d",&n);
    int num = prime_number(n);
    printf("%d之内一共%d个素数\n",n,num);
    return 0;
}

#include <stdio.h>
int main ()
{
    float c = (float)2/3;
    printf("%f\n",c);
    return 0;
}

#include <stdio.h>
int main ()
{
    int r = 5 / 0;
    printf("%d\n",r);    
}

#include <stdio.h>
int main ()
{
    int a = 0;
    int b = !a;
    printf("%d\n",b);
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[10] = {0};
    printf("%lu\n",sizeof(int[10]));
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 0;
    printf("%ld\n",~a);
    return 0;
}

#include <stdio.h>   //输入输出函数头文件
#include <stdlib.h>  //rand头文件
#include <time.h>    //time头文件
#define Line 5   //宏定义line为3
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

#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
    int i = 0;
    int j = 0;
    for(i=0;i<sz;i++)
    {
        for(j=0;j<sz-1-i;j++)
        {
            int tmp = 0;
            if(arr[j]>arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
int main ()
{
    int arr[10] = {0};
    int i = 0;
    printf("请随机十位数: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    printf("输出从小到大排序的十位数\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}

#include <stdio.h>
int main ()
{
    int n = 0;
    printf("请输入一个2~20的整数:> ");
    while(scanf("%d",&n)!=EOF)
    {
        int i = 0;
        int j = 0;
        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                printf("  ");
            }
            for(j=0;j<n-i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    while(scanf("%d",&n)!=EOF)
    {
        int i = 0;
        int j = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                printf(" ");
            }
            for(j=0;j<=i;j++)
            {
                printf("* ");
            }
            for(j=0;j<n-i-1;j++)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>
struct Book
{
    char name[30];
    char author[30];
    float price;
};
void Print(struct Book *p)
{
    printf("%s %s %.2f\n",p->name,p->author,p->price);
}
int main ()
{
    struct Book b1 = {"C语言","东哥",99.9f};
    Print(&b1);
    return 0;
}

#include <stdio.h>
int main ()
{
    char a = 5;
    char b = -5;
    char c = a + b;
    printf("%d\n",c);
    return 0;
}

#include <stdio.h>
int main ()
{
    char a = 0xb6;
    unsigned char b = 0xb6;
    if(a==0xb6)
    printf("a\n");
    if(b==0xb6)
    printf("b\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 1;
    float b = 1.3;
    printf("%d\n",(a+b));
    return 0;
}

//交换两个变量（不创建临时变量）
#include <stdio.h>
void exchange(int* a,int* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main ()
{
    int a = 0;
    int b = 0;
    printf("请输入两个整数:> ");
    scanf("%d %d",&a,&b);
    exchange(&a,&b);
    printf("交换后得到:> ");
    printf("%d %d\n",a,b);
    return 0;
}

//统计二进制中1的个数
#include <stdio.h>
int binary_system(int n)
{
    int count = 0;
    int flag = 0;
    int m = 1;
    for(flag=1;flag<=32;flag++)
    {
        if((n&m)==1)
        {
            count++;
        }
        n = n>>1;
    }
    return count;
}
int main ()
{
    printf("请输入一个数:> ");
    int n = 0;
    while(scanf("%d",&n)!=EOF)
    {
        int ret = binary_system(n);
        printf("%d的二进制一共有%d个1\n",n,ret);
    }
    return 0;
}

#include <stdio.h>
int binary_system(int n)
{
    int count = 0;
    int flag = 0;
    int m = 1;
    for(flag=1;flag<=32;flag++)
    {
        if((n&m)==1)
        {
            count++;
        }
        n = n>>1;
    }
    return count;
}
int main ()
{
    int n = 0;
    while(scanf("%d",&n)!=EOF)
    {
        int ret = binary_system(n);
        printf("%d\n",ret);
    }
    return 0;
}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
#include <stdio.h>
void Print(int arr[],int i)
{
    printf("二进制的基数列是: ");
    for(i=0;i<32;i=i+2)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("二进制的偶数列是: ");
    for(i=1;i<32;i=i+2)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
void binary_system(int n)
{
    int i = 0;
    int arr[32] = {0};
    if(n>=0)            //n>0，输入一个正整数
    {
        for(i=31;i>=0;i--)
        {
           if(n>0)
           {
               arr[i] = n % 2;
               n = n / 2;
           }
           else
           {
               arr[i] = 0;
           }
        }
    }
    else    //n<0,输入一个负整数
    {
        arr[0] = 1;
        for(i=31;i>0;i--)
        {
            n = -n;
           if(n>0)
           {
               arr[i] = n % 2;
               n = n / 2;
           }
           else
           {
               arr[i] = 0;
           }
        }

    }
    Print(arr,i);
}
int main ()
{
    int n = 0;
    printf("请输入一个整数:>");
    while (scanf("%d",&n)!=EOF)
    {
        binary_system(n);
    }  
    return 0;
}

//求两个数二进制中不同位的个数
#include <stdio.h>
int different(int num1,int num2)
{
    int i = 0;
    int count = 0;
    int j = 0;
    j = num1 ^ num2;
    for(i=0;i<32;i++)
    {
        if((j&1)==1)
        {
            count++;
        }
        j = j >> 1;
    }
    return count;
}
int main ()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d",&num1,&num2);
    int ret = different(num1,num2);
    printf("%d\n",ret);
    return 0;
}

#include <stdio.h>
void Print(int arr[],int i)
{
    printf("二进制的基数列是: ");
    for(i=0;i<32;i=i+2)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("二进制的偶数列是: ");
    for(i=1;i<32;i=i+2)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
void binary_system(int n)
{
    int i = 0;
    int arr[32] = {0};
        for(i=0;i<32;i++)
        {
           arr[i] = (n>>(31-i))&1;
        }
    Print(arr,i);
}
int main ()
{
    int n = 0;
    printf("请输入一个整数:>");
    while (scanf("%d",&n)!=EOF)
    {
        binary_system(n);
    }  
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[] = {(5>3,6)};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    printf("sz=%d\n",sz);
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
void two_one(int arr1[],int arr2[],int arr3[],int n,int m)
{
    int i = 0;
    for(i=0;i<n;i++)
    {
        arr3[i] = arr1[i];
    }
    for(i=n;i<m+n;i++)
    {
        arr3[i] = arr2[i-n];
    }
    for(i=0;i<n+m;i++)
    {
        int j = 0;
        for(j=i+1;j<n+m;j++)
        {
            if(arr3[i]>arr3[j])
            {
                int tmp = 0;
                tmp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = tmp;
            }
        }
    }

}
int main ()
{
    printf("请输入两个数:> ");
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int arr1[n];
    int arr2[m];
    int i = 0;
    printf("请输入第一个升序序列,个数为%d\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("请输入第二个升序序列,个数为%d\n",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr3[n+m];
    two_one(arr1,arr2,arr3,n,m);
    printf("两个升序序列合并后得到的有序序列是:\n");
    for(i=0;i<n+m;i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    int i = 0;
    int flag = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-2;i++)
    {
        if((arr[i+1]<arr[i]&&arr[i+1]<arr[i+2])||(arr[i+1]>arr[i]&&arr[i+1]>arr[i+2]))
        {
            printf("unsorted\n");
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        printf("sorted\n");
    }
    return 0;
}

//冒泡排序
#include <stdio.h>
int bubble_sort(int arr[],int n)
{
    int i = 0;
    int count = 0;
    for(i=0;i<n-1;i++)
    {
        int j = 0;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
                count++;
            }
        }
    }
    return count;
}
int main ()
{
    printf("输入数组大小:> ");
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    int i =0 ;
    printf("输入数组中的数:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = bubble_sort(arr,n);
    printf("冒泡排序后的数组为:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("共循环了%d次\n",count);
    return 0;
}

//二分查找
#include <stdio.h>
int binary_search(int arr[],int n,int k)
{
    int left = 0;
    int right = n - 1;
    int count = 0;
    while(left<=right)
    {
        count++;
        int mid = (left+right)/2;
        if(arr[mid]<k)
        {
            left = mid + 1;
            continue;
        }
        if(arr[mid]>k)
        {
            right = mid - 1;
            continue;
        }
        if(arr[mid]==k)
        {
            printf("找到了,下标为%d\n",mid);
            break;
        }
    }
    if(left>right)
    {
        printf("找不到了\n");
    }
    return count;
}
int main ()
{
    printf("输入数组大小:> ");
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    int i =0 ;
    printf("输入数组中的数:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k = 0;
    printf("请输入你想查找的数字:> ");
    scanf("%d",&k);
    int count = binary_search(arr,n,k);
    printf("\n");
    printf("共循环了%d次\n",count);
    return 0;
}
;
#include <stdio.h>
int main ()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* p = arr;
    for(int i=0;i<10;i++)
    { 
        printf("%d ",i[arr]);
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[10] = {0};
    printf("%ld\n",&arr[0]-&arr[10]);
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 10;
    int *p = &a;
    printf("%d\n",*p);
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 10;
    int *p = &a;
    char *q = (char*)&a;
    *p = 0;
    *q = 0;
    printf("%p\n",p);
    printf("%p\n",q);
    printf("%p\n",&a);
    return 0;
}

#include <stdio.h>
int main ()
{
    int *p;
    printf("%d\n",*p);
    *p = 20;
    printf("%d\n",*p);
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[10] = {0};
    int *p = arr;
    int i = 0;
    for(i=0;i<=10;i++)
    {
        printf("%d ",*(p++));
    }
    return 0;
}

#define n 5
#include <stdio.h>
int main ()
{
    float arr[n] = {1.2,2.3,4.3,5.4,6.6};
    float *p = NULL;
    for(p=&arr[0];p<&arr[n];)
    {
        printf("%.1f ",*p++);
    }
    printf("\n");
    for(p=&arr[0];p<&arr[n];)
    {
        printf("%.1f ",*(p++));
    }
    return 0;
}

    int i = 0;
    int len = 0;
    for(i=0;ch[i]!='\0';i++)
    {
        len++;
    }
    return len;

#include <stdio.h>
int my_strlen(char *ch)
{
    char *p = ch;
    while (*p!='\0')
    {
        p++;
    }
    return p-ch;

}
int main ()
{
    char ch[] = "abcdef";
    int len = my_strlen(ch);
    printf("%d\n",len);
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[5] = {1,2,3,4,5};
    printf("%p\n",&arr[0]);
    printf("%p\n",arr);
    return 0;
}

#include<stdio.h> 
int main()
{
    int a = 0; 
    printf("请输入你的成绩(0-100之间的整数): "); 
    while(scanf("%d",&a)!=EOF)
    {
        
        if(a>=0&&a<=200)
        {
            if(a>=60&&a<70) 
            printf("您的成绩为：及格\n");
            else if(a>=70&&a<80)
            printf("您的成绩为：中等\n");
            else if(a>=80&&a<90)
            printf("您的成绩为：良好\n");
            else if(a>=90&&a<=100) 
            printf("您的成绩为：优秀\n");
            else 
            printf("您的成绩为：不及格\n");
        }
        else 
        printf("成绩输入错误,请重新输入: ");
    }
    //
}

#define CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("%d\n",c);
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char ch[50] = {'a','b','c'};
    int sz = strlen(ch);
    printf("%d\n",sz);
    printf("%s\n",ch);
    return 0;
}

#include <stdio.h>
void print(int *p,int sz)
{
    int *s = p + 4;
    for(;p<=s;p++)
    {
        printf("%d ",*p);
    }
}
int main ()
{
    int arr[5] = {1,2,3,4,5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    print(arr,sz);
    return 0;
}

#include <stdio.h>
#include <string.h>
void Reverse_order(char *p,int sz)
{
    for(;sz>=1;sz--)
    {
       printf("%c",*(p+sz-1));
    }
    printf("\n");
}
int main ()
{
    char ch[10000] = "\0";
    printf("输入一段话:> ");
    fgets(ch,10000,stdin);//末尾自动加换行符，加入你输入2个字符，长度就是3，因为还有个换行符
    int sz = strlen(ch)-1;
    Reverse_order(ch,sz);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int all_number(char *p,int sz)
{
    int sum = 0;
    while(*p!='\0')
    {
        int num = pow((*p-48),sz);
        sum = sum + num;
        p++;   
    }
    return sum;
}
int main ()
{
    int n = 0;
    char arr[6];
    for(n=0;n<100000;n++)
    {
        sprintf(arr,"%d",n);
        int sz = strlen(arr);
        int num = all_number(arr,sz);
        if(n==num)
        {
            printf("%d ",n);
        }
    }
    return 0;
}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2+22+222+2222+22222
#include <stdio.h>
int main ()
{
    int a = 0;
    scanf("%d",&a);
    int i =0;
    int sum = 0;
    int num = 0;
    for(i=0;i<5;i++)
    {
        num = num*10 + a;
        sum = sum + num;
    }
    printf("%d\n",sum);
    return 0;
}

#include <stdio.h>
int main ()
{
    int i = 0;
    for(i=6;i>0;i--)
    {
        int j = 0;
        for(j=6-i;j<6;j++)
        {
            printf(" ");
        }
        for(j=0;j<12-(2*i-1);j++)
        {
            printf("*");
        }
        for(j=6-i;j<6;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for(i=7;i<14;i++)
    {
        int j = 0;
        for(j=0;j<i-7;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*(14-i)-1;j++)
        {
            printf("*");
        }
        for(j=0;j<i-7;j++)
        {
            printf(" ");
        }
        printf("\n");
    } 
    
    return 0;
}

#include <stdio.h>
int Least_common_multiple(int a,int b)
{
    int i = a;
    int j = b;
    while(1)
    {
        int i = a;
        int j = b;
        int c = a % b;
        if(c!=0)
        {
            a = b;
            b = c;
        }
        else
        break;
    }
    return (i*j)/b;
}
int main ()
{
    unsigned int a = 0;
    unsigned int b = 0;
    while(scanf("%u %u",&a,&b)!=EOF)
    {
        int min_multiple = Least_common_multiple(a,b);
        printf("%d\n",min_multiple);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
void inversion(char ch[],int sz)
{
    char a = 0;
    int i = 0;
    int k = 0;
    for(i=0;i<(sz/2);i++)  //整体倒置
    {
        a = ch[i];
        ch[i] = ch[sz-1-i];
        ch[sz-1-i] = a;
    }
    for(i=0;i<sz;i++)   //分段倒置  i为整体循环次数
    {
        int x = __INT_MAX__;  //x为我们输入的单词左端，0和空格的下标。我们定义x为最大值防止在没有出现空格时候进入冒泡排序
        int z = 0;            //z为单词右端的空格
        if(i==0||ch[i]==' ')  //寻找空格
        {
            x = i;
        }
        for(k=i;k<sz;k++)  //k是寻找i后面的空格
        {
            if(ch[k]==' '&&(k>x))
            {
                z = k;
                break;
            }
        }
        if(k==sz)
        z = k;
        printf("x=%d z=%d\n",x,z);
        if(x==0)   //第一个单词倒置
        {
            for(int y=0;y<z-x-1;y++)
            {
                for(int j=x;j<z-x-1-y;j++)
                {
                    int b = ch[j];
                    ch[j] = ch[j+1];
                    ch[j+1] = b;
                }
            }
        }
        else   //后面所有单词分别倒置
        {
            for(int y=0;y<z-x-2;y++)   //冒泡排序
            {
                for(int j=x+1;j<z-y-1;j++)
                {
                    int b = ch[j];
                    ch[j] = ch[j+1];
                    ch[j+1] = b;
                }
            }
        }
    }
}
int main ()
{
    char ch[100] = "\0";
    printf("请输入一段字符串:> ");
    fgets(ch,100,stdin);
    int sz = strlen(ch) - 1;
    inversion(ch,sz);    //完成字符串的倒置
    printf("字符串倒置后得:> ");
    printf("%s\n",ch);
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[5] = {1,2,3,4,5};
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        printf("%p\n",&arr[i]);
    }
    return 0;
}

#define MA(x) x*(x-1)
#include <stdio.h>
int main ()
{
    int a = 1;
    int b = 2;
    printf("%d\n",MA(a+b+1));
    return 0;
}

#include <stdio.h>
int main ()
{
    char ch[5][9] = {{"* * * * *"},{" * * * * "},{"  * * *  "},{"   * *   "},{"    *    "}};
    int i = 0;
    int j = 0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%c",ch[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=i;j<n;j++)
        {
            printf("* ");
        }
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    while(scanf("%d",&n)!=EOF)
    {
        int i = 0;
        int j = 0;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                printf(" ");
            }
            for(j=0;j<i+1;j++)
            {
                printf("* ");
            }
            for(j=i;j<n;j++)
            {
                printf(" ");
            }
            printf("\n");
        }
        for(i=0;i<n+1;i++)
        {
            printf("* ");
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf(" ");
            }
            for(j=0;j<n-i;j++)
            {
                printf("* ");
            }
            for(j=0;j<=i;j++)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    while(scanf("%d",&n)!=EOF)
    {
        int i = 0;
        int j = 0;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n+1;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        printf("* \n");
        for(i=0;i<n;i++)
        {
            for(j=n-i-1;j<n+1;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int seconds = 0;
    scanf("%d",&seconds);
    
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    a = 100;
    b = 10;
    int* p1 = &a;
    int* p2 = &b;
    printf("%d\n",a);
    printf("%p\n",p1);
    printf("%d\n",b);
    printf("%d\n",*p2);
    return 0;
}

//输入a，b，从大到小输出
#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    int * p = NULL;
    int * p1 = &a;
    int * p2 = &b;
    if(a<b)
    {
        p = p1;
        p1 = p2;
        p2 = p;
    }
    printf("%d %d\n",*p1,*p2);
    return 0;
}

#include <stdio.h>
void max_min(int * a,int * b)
{
    if(*a<*b)
    {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}
int main ()
{
    int a = 0;
    int b = 0;
    printf("请输入两个数:> ");
    scanf("%d %d",&a,&b);
    max_min(&a,&b);
    printf("从大到小输出:> ");
    printf("%d %d\n",a,b);
    return 0;
}

#include <stdio.h>
void exchange(int * p)
{
    int i = 0;
    while(i<3)
    {
        for(int j=i+1;j<3;j++)
        {
            if(*(p+i)<*(p+j))
            {
                int tmp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tmp;
            }
        }
        i++;
    }
}
int main ()
{
    int arr[3] = {0};
    printf("请输入三个整数:> ");
    int i = 0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    exchange(arr);
    printf("从大到小输出得:> ");
    for(i=0;i<3;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
void print(int * p)
{
    int i = 0;
    for(i=0;i<10;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
}
int main ()
{
    int arr[10] = {0};
    int i = 0;
    printf("请输入十个整数:> ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("输出全部元素得:> ");
    print(arr);
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[10] = {0};
    int * p = arr;
    for(p=arr;p<(arr+10);p++)
    {
        scanf("%d",p);
    }
    for(p=arr;p<(arr+10);p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#define N 10
int main ()
{
    int arr[N] = {0};
    int * p = arr;
    printf("请输入%d个数:> \n",N);
    for(p=arr;p<arr+N;p++)
    {
        scanf("%d",p);
    }
    int * q = p + N - 1;
    for(p=arr,q=p+N-1;p<(arr+N/2);p++,q--)
    {
        int tmp = *p;
        *p = *q;
        *q = tmp;
    }
    printf("相反排序得到:> \n");
    for(p=arr;p<(arr+N);p++)
    {
        printf("%d ",*p);
    }
    return 0;
}

//从大到小排序十个整数
#include <stdio.h>
int main ()
{
    int arr[10] = {0};
    int * p = arr;
    int i = 0;
    printf("请输入十个整数:>\n");
    for(p=arr;p<(arr+10);p++)
    {
        scanf("%d",p);
    }
    int * q1 = p;
    for(q1=arr;q1<(arr+10);q1++)
    {
        int * q2 = q1 + 1;
        for(q2=q1+1;q2<(arr+10);q2++)
        {
            if(q1<q2)
            {
                int tmp = 0;
                tmp = *q1;
                *q1 = *q2;
                *q2 = tmp;
            }
        }
    }
    printf("从大到小排序得:>\n");
    for(p=arr;p<(arr+10);p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[3][3] = {0};
    int i = 0;
    int j = 0;
    int sum1 = 0;
    int sum2 = 0;
    printf("请输入3*3矩阵的元素:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0,j=0;i<3;i++,j++)
    {
        sum1 = sum1 + arr[i][j];
    }
    for(i=0,j=2;i<3;i++,j--)
    {
        sum2 = sum2 + arr[i][j];
    }
    int sum = sum1 + sum2;
    printf("输出对角线之和为:\n");
    printf("%d\n",sum);
    return 0;
}

#define N 5
#include <stdio.h>
void insert(int arr1[],int arr2[],int n)
{
    int i = 0;
    int a = 0;
    int j = 0;
    for(i=0;i<N;i++)
    {
        arr2[i] = arr1[i];
    }
    arr2[N] = n;
    if(arr1[0]>arr1[1])
    {
        for(i=0;i<N+1;i++)
        {
            if(arr2[i]<n)
            {
                a = i;
                for(j=N;j>a;j--)
                {
                    int tmp = 0;
                    tmp = arr2[j];
                    arr2[j] = arr2[j-1];
                    arr2[j-1] = tmp;
                }
                break;
            }
        }
    }
    else
    {
        for(i=0;i<N+1;i++)
        {
            if(arr2[i]>n)
            {
                a = i;
                for(j=N;j>a;j--)
                {
                    int tmp = 0;
                    tmp = arr2[j];
                    arr2[j] = arr2[j-1];
                    arr2[j-1] = tmp;
                }
                break;
            }
        }
    }
}
int main ()
{
    int arr1[N] = {0};
    printf("输入一个长度为%d的有序数组:>\n",N);
    int i = 0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int n = 0;
    printf("输入一个数:> ");
    scanf("%d",&n);
    int arr2[N+1] = {0};
    insert(arr1,arr2,n);
    printf("新数组为:> ");
    for(i=0;i<N+1;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}

#include <stdio.h>
void Reverse_order(int arr[],int n)
{
    int i = 0;
    int j = n - 1;
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        int tmp = 0;
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}
int main ()
{
    int n = 0;
    printf("请输入数组的长度:> ");
    scanf("%d",&n);
    int arr[n];
    int i = 0;
    printf("随便输入数组中的数字:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Reverse_order(arr,n);
    printf("输出倒序后的数组:>\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int arr[10][10] = {0};
    int i = 0;
    int j = 0;
    for(i=0;i<10;i++)
    {
        arr[i][0] = 1;
    }
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    printf("10行杨辉三角为:\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(arr[i][j]==0)
            {
                printf(" ");
            }
            else
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#define N 3
int saddle_point(int arr[][N])
{
    int i = 0;
    int j = 0;
    int b = 0;
    int flag2 = 0;
    int max = -(__INT_MAX__);
    for(i=0;i<N;i++)
    {
        max = -(__INT_MAX__);
        int flag1 = 0;
        for(j=0;j<N;j++)     //找到行最大
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
        for(j=0;j<N;j++)    //找到行最大所处的列
        {
            if(max==arr[i][j])
            {
                b = j;
            }
        }
        for(i=0;i<N;i++)    //比较是否为列最小
        {
            if(max>arr[i][b])
            {
                flag1 = 1;
                break;
            }
        }
        if(flag1==0)
        {
            flag2 = 1;
        }
    }
    if(flag2==0)
    {
        return -(__INT_MAX__);
    }
    else
    {
        return max;
    }
}
int main ()
{
    int arr[N][N];
    int i = 0;
    int j = 0;
    printf("输入二维数组(%d*%d)的元素:\n",N,N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int saddle = saddle_point(arr);
    if(saddle==-(__INT_MAX__))
    {
        printf("这个二维数组没有鞍点\n");
    }
    else
    {
        printf("这个二维数组的鞍点是%d\n",saddle);
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int i = 0;
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 10;
    int * p = &a;
    int **pp = &p;
    **pp = 100;
    printf("%d\n",a);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char arr1[] = "abc";
    char arr2[] = "def";
    char arr3[] = "ghi";
    char* parr[] = {arr1,arr2,arr3};
    int sz = strlen(*parr);
    printf("sz=%d\n",sz);
    char** p = parr;
    int i = 0;
    for(i=0;(p+i)<sz;p++)
    {
        printf("%c\n",**p);
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,5,6};
    int arr3[] = {3,4,5,6,7};
    int *parr[] = {arr1,arr2,arr3};
    int i = 0;
    int j = 0;
    int sz = sizeof(parr)/sizeof(parr[0]);
    for(i=0;i<sz;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",parr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

struct student
{
    char name[20];
    char sex[10];
    int age;
};

#include <stdio.h>
struct Student
{
    char name[20];
    char sex[5];
    int age;
}s4 = {"dong","man",18};//可以这么初始化
struct Student s3 = {"dong","man",18};//也可以这样
int main ()
{
    //还可以这样
    struct Student s1 = {"dong","man",18};//按照默认结构体成员顺序
    struct Student s2 = {.name = "dong",.sex = "man",.age = 18};//自定义顺序
    printf("s1 = %s %s %d\n",s1.name,s1.sex,s1.age);
    printf("s2 = %s %s %d\n",s2.name,s2.sex,s2.age);
    printf("s3 = %s %s %d\n",s3.name,s3.sex,s3.age);
    printf("s4 = %s %s %d\n",s4.name,s4.sex,s4.age);
    return 0;
}

#include <stdio.h>
#include <string.h>
struct Stu
{
    char name[20];
    int age;
};
void set_Stu(struct Stu *t)
{
    t->age = 18;
    strcpy(t->name,"lll");
}
int main ()
{
    struct Stu s = {0};
    set_Stu(&s);
    printf("%s %d\n",s.name,s.age);
    return 0;
}

#include <stdio.h>
void max_min(int*a,int*b)
{
    if(*a<*b)
    {
        int p = *a;
        *a = *b;
        *b = p;
    }
}
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    max_min(&a,&b);
    printf("大到小输出: %d %d\n",a,b);
    return 0;
}

#include <stdio.h>
void print(int*p)
{
    int i = 0;
    for(i=0;i<10;p++,i++)
    {
        printf("%d ",*p);
    }
    printf("\n");
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    print(arr);
    return 0;
}

#define N 5
#include <stdio.h>
void Reverse_order(int * q)
{
    int i = 0;
    int j = 0;
    for(i=0,j=N-1;i<N/2;i++,j--)
    {
        int tmp = 0;
        tmp = *(q+i);
        *(q+i) = *(q+j);
        *(q+j) = tmp;
    }
}
int main ()
{
    int arr[N] = {0};
    int * p = arr;
    printf("输入%d个整数:>\n",N);
    int i = 0;
    for(i = 0;i < N;i++,p++)
    {
        scanf("%d",p);
    }
    p = arr;
    Reverse_order(p);
    printf("逆序得到:>\n");
    for(p=arr;p<arr+N;p++)
    {
        printf("%d ",*p);
    }
    return 0;
}

#include <stdio.h>
void compare(int*q)
{
    int i = 0;
    int j = 0;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(*(q+i)>*(q+j))
            {
                int tmp = 0;
                tmp = *(q+i);
                *(q+i) = *(q+j);
                *(q+j) = tmp;
            }
        }
    }
}
int main ()
{
    int arr[3] = {0};
    int * p = arr;
    int i = 0;
    printf("请输入三个整数:\n");
    for(p=arr;p<(arr+3);p++)
    {
        scanf("%d",p);
    }
    p = arr;
    compare(p);
    printf("从小到大输出得:\n");
    for(p=arr;p<arr+3;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char ch1[100] = "\0";
    char ch2[100] = "\0";
    char ch3[100] = "\0";
    printf("请输入三个字符串:>\n");
    scanf("%s %s %s",ch1,ch2,ch3);
    char * parr[] = {ch1,ch2,ch3};
    int i = 0;
    for(i=0;i<2;i++)
    {
        if(strcmp(parr[i],parr[i+1])>0)
        {
            char ch[100] = "\0";
            stpcpy(ch,parr[i]); 
            strcpy(parr[i],parr[i+1]); 
            strcpy(parr[i+1],ch); 
        }
    }
    printf("三个字符串从小到大排序得到:\n");
    for(i=0;i<3;i++)
    {
        printf("%s ",parr[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
void Scanf(int*p)
{
    int i = 0;
    for(i=0;i<10;i++,p++)
    {
        scanf("%d",p);
    }
}
void Handle(int*p)
{
    int i = 0;
    int min = *p;
    for(i=1;i<10;i++)
    {
        if(min>*(p+i))
        {
            min = *(p+i);
        }
    }
    printf("min=%d\n",min);
    int max = min;
    for(i=0;i<10;i++)
    {
        if(max<*(p+i))
        {
            max = *(p+i);
        }
    }
    printf("max=%d\n",max);
    *p = min;
    *(p+9) = max;
}
void Print(int*p)
{
    int i = 0;
    for(i=0;i<10;i++,p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
}
int main ()
{
    int arr[10] = {0};
    printf("请输入10个数:\n");
    Scanf(arr);
    Handle(arr);
    printf("处理后得到:\n");
    Print(arr);
    return 0;
}

#include <stdio.h>
int main ()
{
    int money = 0;
    int x = 0;
    money = 20;
    x = money / 1;
    int sum = 0;
    int count = 0;
    while(x)
    {
        sum = sum + x;
        if(x%2==1)
        {
            count++;
        }
        x = x / 2;
    }
    sum = sum + (count - 1);
    printf("%d\n",sum);
}

#include <stdio.h>
int main ()
{
    int a = 10;
    int b = 20;
    int * p1 = &a;
    int * p2 = &b;
    printf("%d %d\n",a,b);
    printf("%d %d\n",*p1,*p2);
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    printf("请输入两个整数\n");
    scanf("%d %d",&a,&b);
    int *pa = &a;
    int *pb = &b;
    printf("%d %d\n",*pa,*pb);
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    int *pa = &a;
    int *pb = &b;
    printf("请输入两个整数\n");
    scanf("%d %d",pa,pb);
    if(*pa<*pb)
    {
        pa = &b;
        pb = &a;
    }
    printf("从大到小输出\n");
    printf("%d %d\n",*pa,*pb);
    return 0;
}

#include <stdio.h>
void max_min(int*pa,int*pb)
{
    int tmp = 0;
    if(*pa<*pb)
    {
        tmp = *pa;
        *pa = *pb;
        *pb = tmp;
    }
}
int main()
{
    int a = 0;
    int b = 0;
    int *pa = &a;
    int *pb = &b;
    printf("请输入两个整数:\n");
    scanf("%d %d",pa,pb);
    max_min(pa,pb);
    printf("从大到小输出得到:\n");
    printf("%d %d\n",*pa,*pb);
    return 0;
}

#include <stdio.h>
void max_min(int*pa,int*pb,int*pc)
{
    int tmp = 0;
    if(*pa<*pb)
    {
        tmp = *pa;
        *pa = *pb;
        *pb = tmp;
    }
    if(*pa<*pc)
    {
        tmp = *pa;
        *pa = *pc;
        *pc = tmp;
    }
    if(*pb<*pc)
    {
        tmp = *pb;
        *pb = *pc;
        *pc = tmp;
    }
}
int main ()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int * pa = &a;
    int * pb = &b;
    int * pc = &c;
    printf("请输入三个整数:\n");
    scanf("%d %d %d",pa,pb,pc);
    max_min(pa,pb,pc);
    printf("从大到小输出:\n");
    printf("%d %d %d\n",*pa,*pb,*pc);
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[10] = {0};
    int *p = arr;
    printf("请输入整型数组的十个元素");
    for(p=arr;p<arr+10;p++)
    {
        scanf("%d",p);
    }
    printf("输出数组的所有元素:\n");
    for(p=arr;p<arr+10;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}

#define N 10
#include <stdio.h>
void Reverse_order(int *p)
{
    int tmp = 0;
    int *q = p + N - 1;
    int *m = p;
    for(;p<m+(N/2);p++,q--)
    {
        tmp = *p;
        *p = *q;
        *q = tmp;
    }
}
int main()
{
    int arr[N] = {0};
    int *p = arr;
    printf("请输入%d个整数:\n",N);
    for(p=arr;p<arr+N;p++)
    {
        scanf("%d",p);
    }
    p = arr;
    Reverse_order(p);
    printf("请输出逆序后的数组:\n");
    for(p=arr;p<arr+10;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
void max_min(int *p)
{
    int*q = p;
    int*m = NULL;
    int tmp = 0;
    for(;p<q+10;p++)
    {
        for(m=p+1;m<q+10;m++)
        {
            if(*p<*m)
            {
                tmp = *p;
                *p = *m;
                *m = tmp;
            }
        }
    }
}
int main ()
{
    int arr[10] = {0};
    int * p = arr;
    printf("请输入十个整数:\n");
    for(p=arr;p<arr+10;p++)
    {
        scanf("%d",p);
    }
    p = arr;
    max_min(p);
    printf("从大到小排序得到:\n");
    for(p=arr;p<arr+10;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char ch[] = "I Love China";
    char * p = ch;
    int sz = strlen(ch);
    for(p=ch;p<ch+sz;p++)
    {
        printf("%c",*p);
    }
    p = ch;
    printf("\n");
    printf("第八个字符是:> ");
    printf("%c\n",*(p+7));
    printf("%s\n",p);
    printf("%s\n",ch);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char cha[100] = "\0";
    printf("请输入一段字符:\n");
    char * pcha = cha;
    fgets(pcha,100,stdin);
    char chb[100] = "\0";
    char * pchb = chb;
    strcpy(pchb,pcha);
    printf("复制后得到字符串:\n");
    printf("%s\n",pchb);
    return 0;
}

#include <stdio.h>
#include <string.h>
void copy(char*pcha,char*pchb)
{
    strcpy(pchb,pcha);
}
int main ()
{
    char cha[100] = "\0";
    printf("请输入一段字符:\n");
    char * pcha = cha;
    fgets(pcha,100,stdin);
    char chb[100] = "\0";
    char * pchb = chb;
    copy(pcha,pchb);
    printf("复制后得到字符串:\n");
    printf("%s\n",pchb);
    return 0;
}

#include <stdio.h>
double Factorial(int n)
{
    if(n==1)
    return 1;
    else
    return n * Factorial(n-1);
}
int main ()
{
    int n = 0;
    while(1)
    {
        printf("请输入n的值:\n");
        scanf("%d",&n);
        double fac = Factorial(n);
        printf("%d的阶乘是%e\n",n,fac);
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    for(n=0;n<10;n++)
    {
        printf("%d\n",n);
    }
    return 0;
} 
*/
#include <stdio.h>
/*void exchange(int *p,int n,int m)
{
    int * q = p;
    int arr[m];
    int i = 0;
    int j = n - m;
    for(i=0;i<m;i++,j++)
    {
        arr[i] = *(p+j);
    }
    for(i=0;i<n-m;i++,p++)
    {
        *(p+m) = *p;
    }
    p = q;
    for(i=0;i<m;i++,p++)
    {
        *p = arr[i];
    }
}

void exchange(int *p,int n,int m)
{
    int * q = p + n - 1;
    int num = *(p+n-1);
    for(q=p+n-1;q>p;q--)
    {
        *q = *(q-1);
    }
    *p = num;
    m--;
    if(m>0)
    exchange(p,n,m);
}
int main ()
{
    int n = 0;
    printf("请输入n的值: ");
    scanf("%d",&n);
    int arr[n];
    printf("请输入%d个整数:\n",n);
    int*p = arr;
    for(p=arr;p<arr+n;p++)
    {
        scanf("%d",p);
    }
    int m = 0;
    printf("请输入你想各数顺序后移m的值(m<%d): ",n);
    scanf("%d",&m);
    p = arr;
    exchange(p,n,m);
    printf("调整后的顺序为:\n");
    for(p=arr;p<arr+n;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    printf("Happy New Year*2019*\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    float arr[5] = {0};
    int i = 0;
    for(i=0;i<5;i++)
    {
        scanf("%f",&arr[i]);
    }
    float mid = 0;
    float sum = 0;
    for(i=0;i<5;i++)
    {
        sum = sum + arr[i];
    }
    mid = sum / 5;
    printf("%.2f\n",mid);
    return 0;
}

#include <stdio.h>
int main ()
{
    int score = 0;
    scanf("%d",&score);
    if(score>=10)
    {
        printf("Danger++\n");
    }
    else if(score>=4&&score<=9)
    {
        printf("Danger\n");
    }
    else
    printf("Good\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int HTTP = 0;
    while(scanf("%d",&HTTP)!=EOF)
    {
        switch (HTTP)
        {
        case 200:
        printf("OK\n");
        break;
        case 202:
        printf("Accepted\n");
        break;
        case 400:
        printf("Bad Request\n");
        break;
        case 403:
        printf("Forbidden\n");
        break;
        case 404:
        printf("Not Found\n");
        break;
        case 500:
        printf("Internal Server Error\n");
        break;
        case 502:
        printf("Bad Gateway\n");
        break;
        default:
        break;
        }
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int l = 0;
    int num = 0;
    while(scanf("%d",&l)!=EOF)
    {
        int i = 0;
        for(i=0;i<l;i++)
        {
            int j = 0;
            num = 1;
            for(j=0;j<=i;j++)
            {
                printf("%d ",num);
                num++;
            }
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>
int Min (int*p)
{
    int min = *p;
    int * q = p;
    for(;p<q+7;p++)
    {
        if(min>*p)
        {
            min = *p;
        }
    }
    return min;
}
int Max (int*p)
{
    int max = *p;
    int * q = p;
    for(;p<q+7;p++)
    {
        if(max<*p)
        {
            max = *p;
        }
    }
    return max;
}
int main ()
{
    int arr[7] = {0};
    int i = 0;
    for(i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = Min(arr);
    int max = Max(arr);
    int sum = 0;
    for(i=0;i<7;i++)
    {
        sum = sum + arr[i];
    }
    float mid = 0;
    mid = (sum - min - max)/5.0;
    printf("%.2f\n",mid);
    return 0;
}

#include <stdio.h>
int main ()
{
    int score = 0;
    int sum = 0;
    int max = 0;
    int min = 100;
    int count = 0;
    float mid = 0;
    while(scanf("%d",&score)!=EOF)
    {
        count++;  
        if(count%7>=0&&count%7<=6)
        {
            sum = sum + score;
            if(max<score)
            {
                max = score;
            }
            if(min>score)
            {
                min = score;
            }
            if(count==7)
            {
                mid = (sum-max-min) / 5.0;
                printf("%.2f\n",mid);
            }
        }
        if(count%7==0)
        {
            count = 0;
            max = 0;
            min = 100;
            sum = 0;
        }
    }
    return 0;
}

#include <stdio.h>
void insert(int * p1 ,int n ,int num ,int * p2)
{
    int * q1 = p1;
    int * q2 = p2;
    for(;p2 < (q2 + n + 1); p2++,p1++)
    {
        if(p1<q1+n)
        {
            if(*p1 < num)
            {
                *p2 = *p1;
            }
            else
            {
                *p2 = num;
                for(p2 = p2 + 1;p2 < (q2 + n + 1); p2++,p1++)
                {
                    *p2 = *p1;
                }
                break;
            }  
        }
        else 
        {
            *p2 = num;
            break;
        }
    }
}
int main ()
{
    int n = 0;
    printf("请输入有序数列的个数: ");
    scanf("%d",&n);
    int arr[n];
    int i = 0;
    printf("请输入%d个数:\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int num = 0;
    printf("请输入你想要插入数列中的数: ");
    scanf("%d",&num);
    int Arr[n+1];
    insert(arr,n,num,Arr);
    printf("输出插入后的有序数列为:\n");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",Arr[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    printf("请输入一个正整数: ");
    while (scanf("%d",&n)!=EOF)
    {
        int arr[n-1];
        int i = 2;
        for(i=2;i<=n;i++)
        {
            arr[i-2] = i;
        }
    
    int j = 0;
    for(i=3;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(arr[i-2]%j==0)
            {
                arr[i-2] = 0;
            }
        }
    }
    int count = 0;
    printf("%d内的素数是:\n",n);
    for(i=2;i<=n;i++)
    {
        if(arr[i-2]==0)
        {
            count++;
        }
        else
        printf("%d ",arr[i-2]);
    }
    printf("\n");
    printf("被清零的个数:");
    printf("%d\n",count);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int n = 0;
    int m = 0;
    srand((unsigned int)time(NULL));
    printf("请输入行m的值,列n的值:\n");
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        int arr1[m][n];
        int arr2[m][n];
        int i = 0;
        int j = 0;
        int count = 0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                arr1[i][j] = rand()%2;
                arr2[i][j] = rand()%2;
                if(arr1[i][j]==arr2[i][j])
                {
                    count++;
                }
            }
        }
        float similarity = ((count * 100.0)/ (m * n));
        printf("%.2f\n",similarity);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char ch1[100] = "\0";
    char ch2[100] = "admin admin\n";
    while((fgets(ch1,100,stdin)!=NULL))
    {
        if(strcmp(ch1,ch2)==0)
        {
            printf("Login Success!\n");
        }
        else
        {
            printf("Login Fail!\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char name=0;
    char password=0;
    while(scanf("%c %c",&name,&password)!=EOF)
    {
        printf("%c",name);
        printf("%c",password);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    printf("I will learn C++ well!\n");
    return 0;
}

#include <stdio.h>
int main()
{
    unsigned int a = 0;
    unsigned int b = 0;
    unsigned int c = 0;
    unsigned int d = 0;
    scanf("%u %u %u %u",&a,&b,&c,&d);
    printf("%d\n",(a+b-c)*d);
    return 0;
}

#include <stdio.h>
int main ()
{
    int M = 0;
    scanf("%d",&M);
    if(M%5==0)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int y = 0;
    int x = 0;
    scanf("%d",x);
    if(x<0)
    {
        y = 1;
    }
    else if(x==0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    printf("%d\n",y);
    return 0;
}

#include <stdio.h>
int main ()
{
    int num = 1;
    int count = 0;
    for(num=1;num<2020;num++)
    {
        int x = num % 10;//个位数
        int y = (num / 10) % 10; //十位数
        int z = (num / 100) % 10; //百位数
        if(x==9||y==9||z==9)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

#include <stdio.h>
int main ()
{
    int N = 0;
    scanf("%d",N);
    int i = 0;
    int count = 0;
    int flag = 0;
    for(i=1;i<N+1;i++)
    {
        if(i%2==0)
        {
            count++;
        }
        else
        {
            flag++
        }
    }
    printf("%d %d\n",flag,count);
    return 0;
}

#include <stdio.h>
float MAX(float *p,int n)
{
   float max = *p;
   float * q = p;
   for(p=q+1;p<q+n;p++)
   {
    if(max<*p)
    {
        max = *p;
    }
   }
   return max;
}
float MIN(float *p,int n)
{
   float min = *p;
   float * q = p;
   for(p=q+1;p<q+n;p++)
   {
    if(min>*p)
    {
        min = *p;
    }
   }
   return min;
}
int main ()
{
    int n = 0;
    printf("请输入考试科目个数: ");
    scanf("%d",&n);
    float arr[n];
    int i = 0;
    float sum = 0;
    printf("请输入%d科的成绩\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        sum = sum + arr[i];
    }
    float max = MAX(arr,n);
    float min = MIN(arr,n);
    float average = 0;
    average = sum / n;
    printf("%.2f %.2f %.2f\n",max,min,average);
    return 0;
}

#include <stdio.h>
void insert(int * p1,int * p2,int N,int num)
{
    int * q1 = p1;
    int * q2 = p2;
    for(;p2<q2+N+1;p1++,p2++)
    {
        if(p1<q1+N)
        {
            if(*p1<num)
            {
                *p2 = *p1;
            }
            else
            {
                *p2 = num;
                for(p2=p2+1;p2<q2+N+1;p1++,p2++)
                {
                    *p2 = *p1;
                }
                break;
            }
        }
        else
        {
            *p2 = num;
        }
    }
}
int main ()
{
    int N = 0;
    printf("请输入一个整数: ");
    scanf("%d",&N);
    int arr1[N];
    int i = 0;
    printf("请输入%d哥升序排列的整数:\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int num = 0;
    printf("请输入一个想要进行插入的数: ");
    scanf("%d",&num);
    int arr2[N+1];
    insert(arr1,arr2,N,num);
    printf("输出新数列:\n");
    for(i=0;i<N+1;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char ch1[100] = "\0";
    char ch2[100] = "\0";
    scanf("%s %s",ch1,ch2);
    if(strcmp(ch1,ch2)==0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int N = 0;
    int M = 0;
    scanf("%d %d",&N,&M);
    int arr[N][M];
    int i = 0;
    int j = 0;
    int sum = 0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>0)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[10] = {0};
    int i = 0;
    for (i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[10] = {0};
    int i = 0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[10] = {0};
    int i = 0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a = 0;
    int b = 0;
    for(i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    printf("positive:%d\n",a);
    printf("negative:%d\n",b);
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    int i = 0;
    int sum = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%d\n",sum);
    return 0;
}

#include <stdio.h>
int MAX(int * p,int n)
{
    int * q = p;
    int max = *p;
    for(p=p+1;p<q+n;p++)
    {
        if(max<*p)
        {
            max = *p;
        }
    }
    return max;
}
int MIN(int * p,int n)
{
    int * q = p;
    int min = *p;
    for(p=p+1;p<q+n;p++)
    {
        if(min>*p)
        {
            min = *p;
        }
    }
    return min;
}
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    int i = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = MAX(arr,n);
    int min = MIN(arr,n);
    printf("%d\n",max-min);
    return 0;
}

#include <stdio.h>
void delete(int*p1,int*p2,int n,int num)
{
    int*q1 = p1;
    int*q2 = p2;
    for(;p1<q1+n;p1++,p2++)
    {
        if(*p1!=num)
        {
            *p2 = *p1;
        }
        else
        {
            p2 = p2 - 1;
        }
    }
}
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int arr1[n];
    int i = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int num = 0;
    scanf("%d",&num);
    int count = 0;
    for(i=0;i<n;i++)
    {
        if(num==arr1[i])
        {
            count++;
        }
    }
    int arr2[n-count];
    delete(arr1,arr2,n,num);
    for(i=0;i<n-count;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    printf("请输入一个整数: ");
    scanf("%d",&n);
    int arr1[n];
    int i = 0;
    int j = 0;
    printf("请输入%d个数:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr1[i]==0)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(arr1[j]==0)
            {
                continue;
            }
            if(arr1[i]==arr1[j])
            {
                arr1[j] = 0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr1[i]!=0)
        {
            printf("%d ",arr1[i]);
        }
    }
    printf("\n");
    return 0;
}

int main ()
{
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int arr1[n];
    int arr2[m];
    int i = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr3[n+m];

    return 0;
}

#include <stdio.h>
int main ()
{
    float arr[5][5] = {0};
    float sum = 0;
    int i = 0;
    int j = 0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%f",&arr[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        sum = 0;
        for(j=0;j<5;j++)
        {
            sum = sum + arr[i][j];
            printf("%.1f ",arr[i][j]);
        }
        printf("%.1f\n",sum);
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x = 0;
    int y = 0;
    scanf("%d %d",&x,&y);
    printf("%d\n",arr[x-1][y-1]);
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int arr1[n*m];
    int i = 0;
    for(i=0;i<n*m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n][m];
    int j = 0;
    int a = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++,a++)
        {
            arr2[i][j] = arr1[a];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;//行
    int m = 0;//列
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max = arr[0][0];
    int x = 0;
    int y = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(max<=arr[i][j])
            {
                x = i + 1;
                y = j + 1;
                max = arr[i][j];//找出最大身高
            }
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int arr1[n][m];
    int arr2[n][m];
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr1[i][j]!=arr2[i][j])
            {
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n][n];
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i][j]!=0)
            {
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int arr1[n][m];
    int arr2[m][n];
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
            arr2[j][i] = arr1[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main ()
{
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int i = 0;
    int j = 0;
    int g = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int k = 0;
    scanf("%d",&k);
    int k2 = k;
    for(k=0;k<k2;k++)
    {
        char t = 0;
        int a = 0;
        int b = 0;
        getchar();
        scanf("%c %d %d",&t,&a,&b);
        i = a - 1;
        j = b - 1;
        if(t=='r')//行变换
        {
            for(g=0;g<m;g++)
            {
                int tmp = arr[i][g];
                arr[i][g] = arr[j][g];
                arr[j][g] = tmp;
            }
        }
        if(t=='c')//列变换
        {
            for(g=0;g<n;g++)
            {
                int tmp = arr[g][i];
                arr[g][i] = arr[g][j];
                arr[g][j] = tmp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[3] = {0};
    int i = 0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
typedef struct Stduent
{
    int num;//学号
    char name[20];//姓名
    char sex[10];//性别
}St;
int main ()
{
    St a = {1,"wyd","man"};
    printf("%d %s %s\n",a.num,a.name,a.sex);
    return 0;
}

#include <stdio.h>
int main ()
{
    const char * p = "abcd";
    printf("%s\n",p);
    printf("%c\n",*p);
    return 0;
}

#include <limits.h>
int main ()
{
    INT_MAX;
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 0x11223344;
    printf("%p\n",&a);
    return 0;
}

#include <stdio.h>
int main ()
{
    char a = 128;
    printf("%u\n",a);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char a[1000];
    int i = 0;
    for(i=0;i<1000;i++)
    {
        a[i] = -1 - i;
    }
    printf("%lu\n",strlen(a));
    return 0;
}

#include <stdio.h>
int main ()
{
    int num = 0;
    while(scanf("%d",&num)!=EOF)
    {
        if(num % 2 == 0)
        {
            printf("%d不是奇数\n",num);
        }
        else
        {
            printf("%d是奇数\n",num);
        }
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int num = 0;
    printf("1到100之间的奇数是:\n");
    for(num=1;num<101;num++)
    {
        if(num%2!=0)
        {
            printf("%d ",num);
        }
    }
    printf("\n");
}

#include <stdio.h>
int main ()
{
    int day = 0;
    while(scanf("%d",&day)!=EOF)
    {
    switch(day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        {
            printf("工作日\n");
            break;
        }
        case 6:
        case 7:
        {
            printf("休息日\n");
            break;
        }
    }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 12;
    if(*(char*)&a==12)
    {
        printf("小端\n");
    }
    else 
    {
        printf("大端\n");
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    char a = -1;
    signed char b = -1;
    unsigned char c = -1;
    printf("a=%d b=%d c=%d\n",a,b,c);
    return 0;
}

#include <stdio.h>
int main ()
{
    char a = -127;
    printf("%u\n",a);
    return 0;
}

#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("请输入长方体的长,宽,高为: ");
    scanf("%d %d %d",&a,&b,&c);
    int v = 0;
    v = a * b * c;
    printf("体积是%d\n",v);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main ()
{
    double a = 0;
    while(scanf("%lf",&a)!=EOF)
    {
    double b = pow(a,2);
    printf("方差是%.1lf\n",b);
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    double a = 0;
    double b = 0;
    double c = 0;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        c = ((a / b) * 100) / 23;
        printf("c==%.4lf\n",c);
    }
    return 0;
}


//暑假作业
#include <stdio.h>
#include <math.h>
int main ()
{
    int num1 = 0;
    scanf("%d",&num1);
    int num2 = pow(10,num1) - 1; 
    int arr[num2];
    int i = 0;
    for(i=0;i<num2;i++)
    {
        arr[i] = i + 1;
    }
    for(i=0;i<num2;i++)
    {
        printf("%d ",arr[i]);
     }
    printf("\n");
    return 0;
}

#include <limits.h>
int main ()
{
    int a = INT_MAX;
    int b = INT_MIN;
    printf("%d %d\n",a,b);
    return 0;
}

//写一个程序来判断大端和小端
#include <stdio.h>
int main()
{
    int num = 1;
    //00000000000000000000000000000001
    //00 00 00 01
    if(*(char*)&num == 1)
    {
        printf("小端\n");
    }
    else
        printf("大端\n");
    return 0;
}

#include <stdio.h>
int PD(int b)
{
    return *(char*)&b;
}
int main ()
{
    int a = 1;
    int ret = PD(a);
    if(ret == 1)
        printf("小端\n");
    else
        printf("大端\n");
    return 0;
10000001
11111111

#include <stdio.h>
int main ()
{
    char a = 128;
    char b = -128;
    printf("a=%u\nb=%u\n",a,b);
    return 0;
}

#include <stdio.h>
int main ()
{
    int i = -20;
    unsigned int j = 10;
    printf("%d\n",i+j);
    return 0;
}

#include <stdio.h>
int main ()
{
    unsigned int i;
    for(i = 9;i >= 0; i--)
    {
        printf("%u\n",i);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char a[1000];
    int i;
    for(i = 0; i < 1000; i++)
    {
        a[i] = -1 - i;
    }
    printf("%d\n",strlen(a));
    return 0;
}
*/
#include <stdio.h>
unsigned char i = 0;
int main ()
{
    for(i = 0; i <= 50;i++)
    {
        printf("haha");
    }
    return 0;
}
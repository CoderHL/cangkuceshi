//
//  main.c
//  c progammar
//
//  Created by 刘洪 on 2017/9/25.
//  Copyright © 2017年 刘洪. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

//const int MAX = 3;
int max(int x, int y)
{
    return x > y ? x : y;
}


/**
    题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
 */
void sumDays(){
    int year,month,day;
    printf("请输入任意年,月,日,以逗号隔开\n");
    scanf("%d,%d,%d",&year,&month,&day);
    
    int sum = 0;
    int isLeap = 0; //判断是不是闰年
    switch (month) {//先计算某月之前一共多少天
        case 1:sum=0;break;
        case 2:sum=31;break;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;
        default:printf("data error");break;
    }
    sum = sum + day;
    if ((year%400 == 0) || (year%4 == 0 && year%100 == 0)) {//判断是不是闰年
        isLeap = 1;
        
    }else{
        isLeap = 0;
    }
    
    if (month >= 2 && isLeap == 1) {
        sum++;
    }
    
    printf("total days : %d\n",sum);
}

//输入三个整数x,y,z，请把这三个数由小到大输出。

void accendA()
{
    printf("请输入三个整数,以逗号隔开");
    int x,y,z,temp;
    int arr[3];
    scanf("%d,%d,%d",&x,&y,&z);
    arr[0] = x;
    arr[1] = y;
    arr[2] = z;
    //获取数组长度
    int len = sizeof(arr)/sizeof(int);
    printf("数组的长度为%d",len);
    for (int i = 0; i<len; i++) {
        for (int j = i+1; j<len; j++) {
            if (arr[i]>arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                
            }
        }
    }
    
    printf("从小到大排序为:\n");
    for (int i = 0; i < len; i++) {
        printf("%zd",arr[i]);
        if (i == 2) {
            printf("\n");
        }
    }
    
}

//用*号输出字母C的图案。
void printfC(){
//    printf("用 * 号输出字母 C!\n");
//    printf("  ***\n");
//    printf(" *\n");
//    printf(" * \n");
//    printf("  ***\n");
    char a='*';
    printf("  %c%c\n",a,a);
    printf("%c\n",a);
    printf("%c\n",a);
    printf("  %c%c\n",a,a);

}

void prinfPicture(){

    char a=176,b=219;
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);
}

//输出九九乘法诀
void printfJiuJiu(){
    int sum;
    for (int i = 1; i<=9 ; i++) {
        for (int j = i; j<=9; j++) {
            sum = i*j;
            printf("%d X %d = %d\t",i,j,sum);
            if (j == 9) {
                printf("\n");
            }
        }
    }
}

//输出国际象棋棋盘
void printfQiPan(){
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            if((i+j)%2==0)
                printf("%c%c",219,219);
            else printf("  ");
        printf("\n");
    }
}

//古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
void printfSumRabbit()
{
    int now =1, prev_1= 1,prev_2=0;
    printf("%i\n", now);
    for(int i = 1;i<40;i++)
    {
        now = prev_1+prev_2;
        printf("%i\n", now);
        prev_2 = prev_1;
        prev_1 = now;
    }
}




struct Books
{
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};
int main(int argc, const char * argv[]) {
  
//    printf("Hello, World!\n");
    /*1.基本类型*/
    //整型类型  //浮点类型
    /*2.枚举类型*/
    /*3.void 类型*/
    /*4.派生类型*/
    //指针类型   数组类型   结构体类型   共用体类型   函数类型
    //sizeof(type):得到对象或者类型的存储字节大小.
//    printf("int 存储大小 : %lu\n",sizeof(int));
//    int a;
//    int b;
//    
//    printf("a的地址是%p\nb的地址是%p\n",&a,&b);
    
//    int a;
//    
//    printf("a的值是%d\n",a);
//    return 0;
    
//    char *names[] = {
//        "Zara Ali",
//        "Hina Ali",
//        "Nuha Ali",
//        "Sara Ali",
//    };
//    int i = 0;
//    
//    for ( i = 0; i < MAX; i++)
//    {
//        printf("Value of names[%d] = %s\n", i, names[i] );
//    }
//    return 0;
    
//    /* p 是函数指针 */
//    int (* p)(int, int) = & max; // &可以省略
//    int a, b, c, d;
//    
//    printf("请输入三个数字:");
//    scanf("%d %d %d", & a, & b, & c);
//    
//    /* 与直接调用函数等价，d = max(max(a, b), c) */
//    d = p(p(a, b), c);
//    
//    printf("最大的数字是: %d\n", d);
//    
//    return 0;
    
//    struct Books Book1;/*声明Book1,类型为Books*/
//    struct Books Book2;/*声明Book2*/
//    
//    strcpy(Book1.author,"lH");
    
    
//    int c;
//    
//    printf( "Enter a value :");
//    c = getchar( );
//    
//    printf( "\nYou entered: ");
//    putchar( c );
//    printf( "\n");
    
    
//    char str[100];
//    
//    printf( "Enter a value :");
//    gets( str );
//    
//    printf( "\nYou entered: ");
//    puts( str );
    
//    printf("File :%s\n", __FILE__ );
//    printf("Date :%s\n", __DATE__ );
//    printf("Time :%s\n", __TIME__ );
//    printf("Line :%d\n", __LINE__ );
//    printf("ANSI :%d\n", __STDC__ );
    
    

    
//    sumDays();
//    accendA();
//    printfC();
//    prinfPicture();
//    printfJiuJiu();
//    printfQiPan();
    printfSumRabbit();
    return 0;
    
}


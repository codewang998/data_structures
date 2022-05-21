/*在这个.c文件中，我们来学习二级指针
* fun1 最普通的指针，通过fun1，用了我的自创口诀，“先指出，再开门”，了解其含义。
* fun2是关于二级指针，首先明白二级指针是有了一级指针才会有的，不可能说没有一级指针就出现了二级指针。
*      通过二级指针修改int类型变量a的值。
* fun3 我们尝试下用三级指针来修改值
* fun4 我想实现一个输入一个任意10以内的数字，这个数字会被当作几级指针，用这个指针修改变量a的值
*   fun4以后再写吧，现在功力不够
*        能不能用swich实现，不同的levels去执行不同的case,这样子可以是可以，但是代码量太大了
*/
#include<stdio.h>

void fun1()
{
    int a = 10;
    int *p=&a; 
    //我们把=&看成是 =>，当作是p指向a，当p指向a后，*p就是取a变量的值操作
    //把*当作一个钥匙，指出地址在哪以后，我们去用钥匙开门，开门后就是对内容操作
    *p = 9; //用钥匙开门后，对房子里的内容进行操作了
    //下面的打印说明a和*p表示同一个东西
    printf("a=%d\n",a);
    printf("*p=%d\n",*p);
}

void fun2()
{
    int a=10;
    int *p=&a;
    //*p=a,说明了p已经指向a的地址了，现在我要去开门，但发现了p我不知道在哪里了 ，谁能给我指一下p在哪里，这时候q出现了
    //保存指针变量p的地址得用，二级指针变量
    int **q=&p;
    //现在我们开两次门，取出房子里的内容
    **q=9;
    printf("a=%d\n",**q);
}

void fun3()
{   
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    ***r=9;
    printf("a=%d\n",***r);
}
/*
void fun4()
{   
    int a=10;
    int levels;
    printf("how many levels of pointers do you want to use?\n");
    scanf("%d",&levels);
    while(levels<=0&&levels>=11)
    {
        printf("Please enter a level between 1 and 10\n");
        scanf("%d",&levels);
    }
    //我想用一个数组把p,q,r,s,t,u,v,w,x,y存起来，p是一级指针，y是十级指针
    levels_function(levels);
}

void levels_function(int level)
{
    char arr[]={'a','p','q','r','s','t','u','v','w','x','y'};
    for(int i=1; i<level; i++)
    {
        //int (i个*)arr[i]=&arr[i-1] 
    }
}
*/
void main() 
{
    fun1();
    printf("==============================\n");
    fun2();
    printf("==============================\n");
    fun3();
}
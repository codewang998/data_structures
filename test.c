/* 通过没有返回值的函数，int变量的地址，以及int类型数组的值与地址
*
*
*
*/



#include <stdio.h>
#include <stdlib.h>

//fun3实现修改int变量的地址
void fun3(int **p)
{
    //p保存w的地址的地址
    //*p是w的地址
    int *mem;
    mem = (int *)malloc(sizeof(int));
    *p = mem;
}
//fun2实现修改int数组的地址
void fun2(int **p,int len )
{
    //p保存地址a的地址
    //*p是a的地址
    int *mem;
    mem = (int *)malloc(sizeof(int)*len);
    *p = mem;
}

//fun1实现通过地址改变一维数组的值
void fun1(int *p)             
{
    //p存放a的地址
    // *p 是a的值
    *(p+1)=-1;
}

void main()
{
    int a[]={1,2,3,4};
    printf("a[1]=%d\n",a[1]);
    fun1(a);
    printf("a[1]=%d\n",a[1]);
    printf("---------------------------\n");
    printf("a's add is %p\n",a);
    int *q;//int *q,q里要放int类型的地址
    q = (int *)a;  
    fun2(&q,4);
    printf("a's add is %p\n",q);
    printf("---------------------------\n");
    int c=10;
    int *w;
    w=&c;
    printf("c'add is %p\n",w);
    fun3(&w);
    printf("c'add is %p\n",w);
}
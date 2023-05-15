/**
* Author: 八尺妖剑
* Date: 2023/5/3
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 顺序表的基本操作
**/

#include "_SqlList.h"
#include <iostream>

/**
 * 顺序表的初始化
 * @param L 顺序表的引用
 * @return bool
 */
bool InitList(SqlList &L)
{
    L.val = new int[MaxSize]; // 动态分配一个MaxSize大小的空间
    if (!L.val) return false; //分配失败
    L.length = 0; //将长度初始化为0
    return true; // 分配成功
}


/**
 * 顺序表的创建
 * @param L 顺序表的引用
 * @return bool
 */
bool CreateList(SqlList &L)
{
    int i = 0,x=0;
    std::cin >> x;
    while(x!=-10) //代表输入-1时结束输入
    {
        if(L.length == MaxSize)
        {
            std::cout <<"Oh ho! The list is full!";
            return false;
        }
        L.val[i++] = x; // #3 向顺序表添加元素并递增索引
        L.length++; //#4 长度递增
        std::cin >> x;
    }
    return true;
}

/**
 * 获取第n个元素
 * @param L 表引用
 * @param i 位置
 * @param v 存储获取到的元素值
 * @return bool
 */
bool GetVal(SqlList &L,int i,int &v)
{
    if (i < 1 || i > L.length)
    {
        std::cout <<"Illegal location!";
        return false;
    }
    v = L.val[i-1];
    return true;
}


/**
 * 查找指定元素
 * @param L  顺序表
 * @param v 指定元素
 * @return 成功返回元素索引，失败返回-1
 */
int  LocateVal(SqlList L,int v)
{
    int i;
    for(i=0;i<L.length;i++)
    {
        if (L.val[i] == v) return i;
    }
    return -1;
}

/**
 * 向顺序表第i个位置插入一个元素v
 * @param L 顺序表
 * @param i 第i个位置
 * @param v 待插入的目标元素
 * @return bool
 */
bool ListInsert(SqlList &L,int i,int v)
{
    if (i<1 || i > L.length + 1) return false; //插入位置合法性判断
    if (L.length == MaxSize) return false; //表满，无法插入
    for (int j = L.length-1;j >=i-1;j--) // 移位
        L.val[j+1] = L.val[j];
    L.val[i-1] = v; // 插入
    L.length++;
    return true; //完成插入
}

/**
 * 删除第i个元素
 * @param L 顺序表
 * @param i 第i个元素
 * @param v 暂存待删除的元素
 * @return bool
 */
bool ListDelete(SqlList &L,int i,int &v)
{
    if (i < 1 || i >L.length) return false; //合法性判断
    v = L.val[i-1]; // 暂存待删除的元素，如果确定不需要返回删除元素的情况下，可以省略这一步
    for (int j = i;j <= L.length-1;j++)
        L.val[j-1] = L.val[j]; //第i个后面的元素依次向前移动
    L.length--;
    return true;
}
/**
* Author: 八尺妖剑
* Date: 2023/5/7
* Email: iliekxff@gmail.com
* Blog: https://waer.ltd
* Desc: 单链表具体函数的实现
**/
#include "_LinkList.h"
#include <iostream>

/**
 * 初始化单链表
 * @param L 单链表
 * @return bool
 */
bool InitLinkList(LinkList &L)
{
    L = new Node; // 创建链表L
    if(!L)
        return false;
    L->next = nullptr; // 指针指向nullptr
    return true;
}

/**
 * 单链表的创建-头插法
 * @param L 单链表
 */
void CreateLinkList_H(LinkList &L)
{
    int n;
    LinkList s; // 定义一个指针变量
    L = new Node;
    L->next = nullptr; //创建一个空链表
    std::cout <<"Please enter the number of nodes(n):" <<std::endl;
    std::cin >> n;
    std::cout <<"Enter the values of n nodes in turn:" << std::endl;
    while (n--)
    {
        s = new Node; // 创建新节点s
        std::cin >> s->data; // 将输入的节点值赋给新节点的数据域data
        s->next = L->next;
        L->next = s; // 将新节点s插入到L节点之后
    }
}

/**
 * 单链表的创建-尾插法
 * @param L 单链表
 */
void CreateLinkList_R(LinkList &L)
{
    int n; //链表节点数量
    LinkList s,R;
    L = new Node;
    L->next = nullptr;
    R = L;
    std::cout <<"Please enter the number of nodes(n):" << std::endl;
    std::cin >> n;
    std::cout <<"Enter the values of n nodes in turn::" << std::endl;
    while (n--)
    {
        s = new Node; // 创建新的节点
        std::cin >> s->data; // 给新节点赋值
        s->next = nullptr; // 将新节点的next指针域置空
        R->next = s; // 将新节点插入到当前节点之后
        R = s; // 完成尾指针的赋值，更新尾指针的指向
    }
}

/**
 * 获取单链表中的第i个节点的数据
 * @param L 单链表
 * @param i 要获取元素的目标节点
 * @param v 暂存获取到的节点值
 * @return bool
 */
bool GetVal(LinkList L,int i,int &v)
{
    int j = 1;
    LinkList  p;
    p = L->next; // 将p指向头节点
    while (j<i && p)
    {
        p = p->next;
        j++;
    }
    if(!p || j>i)
        return false;
    v = p->data; //将目标值暂存到v中
    return true;
}

/**
 * 查找单链表中的指定节点值
 * @param L 单链表
 * @param e 要查找的目标值
 * @return bool
 */
bool LocateVal(LinkList L,int v)
{
    LinkList p;
    p = L->next;
    while (p&&p->data != v)
        p = p->next;
    if(!p) // 到达链表尾部，查找失败
        return false;
    return true;
}

/**
 * 在单链表的第i个节点之前插入目标节点值v
 * @param L 单链表
 * @param i 插入位置
 * @param v 待插入的值
 * @return bool
 */
bool InsertLinkList(LinkList &L,int i,int v)
{
    int j=0;
    LinkList p,s;
    p = L;
    while (p && j<i-1)
    {
        p = p->next;
        j++;
    }
    if (!p || j>i-1) //i>n+1 or i<1 插入位置不合法
        return false;
    s = new Node;
    s->data = v;
    s->next = p->next;
    p->next = s;
    return true;
}

/**
 * 删除单链表中的指定节点
 * @param L 单链表
 * @param i 指定节点
 * @return bool
 */
bool DeleteLinkList(LinkList &L,int i)
{
    LinkList p,q;
    int j=0;
    p = L;
    while ((p->next)&& (j<i-1))
    {
        p = p->next;
        j++;
    }
    if(!(p->next) || (j>i-1))
        return false;
    q = p->next; //将待删除的节点地址暂存到q里，以备后续的内存释放
    p->next = q->next;
    delete q; // 释放被删除节点的内存空间
    return true;
}
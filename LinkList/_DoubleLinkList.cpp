/**
* Author: 八尺妖剑
* Date: 2023/5/15
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 双链表基本操作:方法实现
**/
#include "_DoubleLinkList.h"
#include <iostream>

/**
 * 双链表的初始化
 * @param L 双链表
 * @return bool
 */
bool InitDoubleLinkList(DoubleLinkList &L)
{
    L = new Node;
    if(!L)
        return false;
    L->pre = L->next = nullptr; //置空前驱与后继指针
    return true;
}

/**
 * 头插法创建双链表
 * @param L 双链表
 */
void CreateDoubleLinkList_H(DoubleLinkList &L)
{
    DoubleLinkList s;
    int n;
    L = new Node;
    L->pre = L->next = nullptr;
    std::cout <<"Enter the number of elements" << std::endl;
    std::cin >> n;
    while (n--)
    {
        s = new Node;
        std::cin >> s->data;
        if (L->next)
            L->next->pre = s; //注意，如果L有下一个节点，就直接指向这一步即可
        s->next = L->next;
        s->pre = L;
        L->next = s;
    }
}

/**
 * 双链表的插入
 * @param L 双链表
 * @param i 第i个节点
 * @param v 插入节点的值
 * @return bool
 */
bool InsertDoubleLinkList(DoubleLinkList &L,int i,int v)
{
    DoubleLinkList p, s;
    int j=0;
    p = L;
    while (p && j<i)
    {
        p = p->next;
        j++;
    }
    if ( !p || j >i) return false;
    s=new Node;
    s->data = v;
    // 下面是核心的4步:
    s->pre = p->pre;
    p->pre->next = s;
    s->next = p;
    p->pre = s;
    return true;
}

/**
 * 删除指定节点
 * @param L 双链表
 * @param i 要删除的第i个节点
 * @return bool
 */
bool DeleteDoubleLinkList(DoubleLinkList &L,int i)
{
    DoubleLinkList p;
    int j = 0;
    p = L;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i) return false;
    if (p->next)
        p->next->pre = p->pre;
    p->pre->next = p->next;
    delete p;
    return true;
}



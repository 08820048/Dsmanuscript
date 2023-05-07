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
    std::cout <<"请输入节点个数n:" <<std::endl;
    std::cin >> n;
    std::cout <<"请依次输入n个节点的值:" << std::endl;
    while (n--)
    {
        s = new Node; // 创建新节点s
        std::cin >> s->data; // 将输入的节点值赋给新节点的数据域data
        s->next = L->next;
        L->next = s; // 将新节点s插入到L节点之后
    }
}




/**
* Author: 八尺妖剑
* Date: 2023/5/7
* Email: iliekxff@gmail.com
* Blog: https://waer.ltd
* Desc: 单链表.h文件，定义单链表结构以及常用函数
**/

#include <iostream>

typedef int ElemType;
typedef struct Node
{
    ElemType data;
    struct Node *next;
} Node,*LinkList;

/**
 * 初始化单链表
 * @param L 单链表
 * @return bool
 */
bool InitLinkList(LinkList &L);

/**
 * 单链表的创建-头插法
 * @param L 单链表
 */
void CreateLinkList_H(LinkList &L);

/**
 * 单链表的创建-尾插法
 * @param L 单链表
 */
void CreateLinkList_R(LinkList &L);

/**
 * 获取单链表中的第i个节点的数据
 * @param L 单链表
 * @param i 要获取元素的目标节点
 * @param v 暂存获取到的节点值
 * @return bool
 */
bool GetVal(LinkList L,int i,int &v);

/**
 * 查找单链表中的指定节点值
 * @param L 单链表
 * @param e 要查找的目标值
 * @return bool
 */
bool LocateVal(LinkList L,int e);

/**
 * 在单链表的第i个节点之前插入目标节点值v
 * @param L 单链表
 * @param i 插入位置
 * @param v 待插入的值
 * @return bool
 */
bool InsertLinkList(LinkList &L,int i,int v);

/**
 * 删除单链表中的指定节点
 * @param L 单链表
 * @param i 指定节点
 * @return bool
 */
bool DeleteLinkList(LinkList &L,int i);

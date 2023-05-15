/**
* Author: 八尺妖剑
* Date: 2023/5/15
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 双链表基本操作方法:方法声明
**/

typedef int ElemType;
typedef struct Node
{
    ElemType data;
    struct Node *pre,*next;
} Node ,*DoubleLinkList;


/**
 * 双链表的初始化
 * @param L 双链表
 * @return bool
 */
bool InitDoubleLinkList(DoubleLinkList &L);

/**
 * 头插法创建双链表
 * @param L 双链表
 */
void CreateDoubleLinkList_H(DoubleLinkList &L);

/**
 * 双链表的插入
 * @param L 双链表
 * @param i 第i个节点
 * @param v 插入节点的值
 * @return bool
 */
bool InsertDoubleLinkList(DoubleLinkList &L,int i,int v);



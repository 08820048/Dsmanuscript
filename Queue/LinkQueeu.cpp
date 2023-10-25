/**
* Author: 八尺妖剑
* Date: 2023/10/17
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 
**/
#include "LinkQueeu.h"

/**
 * 链队列初始化
 * @param Q 队列
 */
void InitQueue(LinkQueue &Q)
{
    Q.front = Q.rear = new Qnode; // 创建一个头尾指针指向的头节点
    Q.front  -> next = nullptr; // 将头节点的指针指向空
}

/**
 * 链队列的入队
 * @param Q 队列
 * @param e 元素
 */
void EnQueue(LinkQueue &Q,int e)
{
    Qptr s;
    s = new Qnode;
    s -> next = nullptr;
    Q.rear->next = s;
    Q.rear = s;
}

/**
 * 链队列出队
 * @param Q 队列
 * @param e 出队的元素
 * @return bool
 */
bool DeQueue(LinkQueue &Q,int &e)
{
    Qptr  p;
    if (Q.front == Q.rear)
        return false;
    p = Q.front->next;
    e = p->data;
    Q.front->next = p->next;
    if (Q.rear == p)
        Q.rear = Q.front;
    delete p;
    return true;
}

/**
 * 取链队列的队头元素
 * @param Q 队列
 * @return 取出失败返回-1
 */
int GetHead(LinkQueue Q)
{
    if (Q.rear != Q.front)
        return Q.front -> next->data;
    return -1;
}
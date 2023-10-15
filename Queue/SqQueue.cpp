/**
* Author: 八尺妖剑
* Date: 2023/10/15
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 循环队列具体实现
**/
#include "SqQueue.h"

/**
 * 循环队列初始化
 * @param Q 队列
 * @return bool
 */
bool InitQueue(SqQueue &Q)
{
    Q.base = new int[MaxSize];
    if (!Q.base)
        return false;
    Q.front = 0,Q.rear = 0;
    return true;
}

/**
 * 循环队列入队
 * @param Q  队列
 * @param e 新元素
 * @return bool
 */
bool EnQueue(SqQueue &Q,int e)
{
    if ((Q.rear + 1) % MaxSize == Q.front)
        return false;
    Q.base[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MaxSize;
    return true;
}

/**
 * 循环队列出队
 * @param Q 队列
 * @param e 用于保存待出队的元素
 * @return bool
 */
bool DeQueue(SqQueue &Q,int &e)
{
    if (Q.rear == Q.front)
        return false;
    e = Q.base[Q.front];
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}

/**
 * 取队头元素
 * @param Q 队列
 * @return int 队头元素
 */
int GetHead(SqQueue Q)
{
    if (Q.front != Q.rear)
        return Q.base[Q.front];
    return -1;
}
/*
int main()
{
    SqQueue Q;
    InitQueue(Q);

    // 测试入队
    EnQueue(Q, 1);
    EnQueue(Q, 2);
    EnQueue(Q, 3);

    // 测试出队
    int e;
    while (DeQueue(Q, e))
    {
        std::cout << "Dequeued element: " << e << std::endl;
    }

    // 测试取队头元素
    EnQueue(Q, 4);
    int head = GetHead(Q);
    std::cout << "Queue head element: " << head << std::endl;

    return 0;
}*/

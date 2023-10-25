/**
* Author: 八尺妖剑
* Date: 2023/10/17
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 链队列定义
**/

#include <iostream>

typedef int ElemType;  // 定义数据元素类型为int
typedef struct Qnode  // 定义队列节点结构体
{
    ElemType data;  // 数据元素
    struct Qnode *next;  // 指向下一个节点的指针
}Qnode,*Qptr;  // 定义队列节点类型为Qnode，定义队列节点指针类型为Qptr

typedef struct  // 定义链队列结构体
{
    Qnode *front;  // 指向队头的指针
    Qnode *rear;  // 指向队尾的指针
}LinkQueue;  // 定义链队列类型为LinkQueue

/**
 * 链队列初始化
 * @param Q 队列
 */
void InitQueue(LinkQueue &Q);

void EnQueue(LinkQueue &Q,int e);

bool DeQueue(LinkQueue &Q,int &e);

int GetHead(LinkQueue Q);
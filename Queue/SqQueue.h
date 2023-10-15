/**
* Author: 八尺妖剑
* Date: 2023/10/15
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 循环队列
**/

#include <iostream>
#define  MaxSize 100
typedef int ElemType;
typedef struct SqQueue
{
    ElemType *base;
    int front,rear;
}SqQueue;

/**
 * 循环队列初始化
 * @param Q 队列
 * @return bool
 */
bool InitQueue(SqQueue &Q);

/**
 * 循环队列入队
 * @param Q  队列
 * @param e 新元素
 * @return bool
 */
bool EnQueue(SqQueue &Q,int e);


/**
 * 循环队列出队
 * @param Q 队列
 * @param e 用于保存待出队的元素
 * @return bool
 */
bool DeQueue(SqQueue &Q,int &e);


/**
 * 取队头元素
 * @param Q 队列
 * @return int 队头元素
 */
int GetHead(SqQueue Q); // 注意我传入的参数只是一个普通变量，而不是引用



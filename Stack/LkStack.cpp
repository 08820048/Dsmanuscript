/**
* Author: 八尺妖剑
* Date: 2023/6/1
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 链栈的具体实现
**/
#include "LkStack.h"

/**
 * 初始化
 * @param S 栈
 * @return bool
 */
bool InitStack(LinkStack &S)
{
    S = nullptr;
    return true;
}

/**
 * 空栈
 * @param S 栈
 * @return bool
 */
bool IsEmpty(LinkStack S)
{
    return S == nullptr;
}

/**
 * 入栈
 * @param S 栈
 * @param v 入栈的元素
 * @return bool
 */
bool Push(LinkStack &S,int v)
{
    LinkStack p;
    p = new LkStack;
    p->data = v;
    p->Top = S; // 将S的地址赋给新节点p的指针域
    S = p; // 将p更新为新的栈顶指针
    return true;
}

/**
 * 出栈
 * @param S 栈
 * @param v 出栈元素
 * @return bool
 */
bool Pop(LinkStack &S,int &v)
{
    LinkStack p;
    if (IsEmpty(S))
        return false;
    v = S->data;
    p = S; // 暂存栈顶元素地址
    S = S->Top; // 更新栈顶
    delete p; // 释放空间
    return true;
}

/**
 * 弹出栈顶元素
 * @param S 栈
 * @return int
 */
int GetTop(LinkStack S)
{
    if (!IsEmpty(S))
        return S->data;
    else
        return -1;
}
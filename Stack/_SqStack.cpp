/**
* Author: 八尺妖剑
* Date: 2023/5/30
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc:  栈的具体实现
**/
#include "_SqStack.h"
#include <iostream>
using namespace std;

/**
 * 初始化
 * @param S 栈
 * @return bool
 */
bool InitStack(SqStack &S)
{
    S.Base = new ElemType [MaxSize];
    if (!S.Base)
        return false;
    S.Top = S.Base;
    return true;
}

/**
 * 入栈
 * @param S 栈
 * @param v 如栈元素
 * @return bool
 */
bool Push(SqStack &S,int v)
{
    if (IsFull(S)) // 满栈状态，不能继续入栈
        return false;
    *S.Top++=v; // 将元素入栈且完成Top指针的上移
    return true;
}

/**
 * 出栈
 * @param S 栈
 * @param e 出栈元素
 * @return bool
 */
bool Pop(SqStack &S,int &v)
{
    if (IsEmpty(S))
        return false; // 栈空
    v = *--S.Top;
    return true;
}

/**
 * 获取栈顶元素
 * @param S 栈
 * @return int
 */
int GetTop(SqStack S)
{
    if (!IsEmpty(S))
        return *(S.Top - 1);
    else
        return -1;
}


/**
 * 是否空栈
 * @param S 栈
 * @return bool
 */
bool IsEmpty(SqStack S)
{
    return S.Base == S.Top;
}

/**
 * 是否满栈
 * @param S 栈
 * @return bool
 */
bool IsFull(SqStack S)
{
    return S.Top - S.Base == MaxSize;
}
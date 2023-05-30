/**
* Author: 八尺妖剑
* Date: 2023/5/30
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 栈结构定义
**/

#include <iostream>
const int MaxSize = 100;
typedef int ElemType;
typedef struct SqStack
{
    ElemType *Base; // 栈底指针
    ElemType *Top; // 栈顶指针
} SqStack;

/**
 * 初始化
 * @param s 栈
 * @return bool
 */
bool InitStack(SqStack &S);

/**
 * 入栈
 * @param S 栈
 * @param v 如栈元素
 * @return bool
 */
bool Push(SqStack &S,int v);

/**
 * 出栈
 * @param S 栈
 * @param e 出栈元素
 * @return bool
 */
bool Pop(SqStack &S,int &e);

/**
 * 获取栈顶元素
 * @param S 栈
 * @return int
 */
int GetTop(SqStack S);


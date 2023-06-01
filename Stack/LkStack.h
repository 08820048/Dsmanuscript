/**
* Author: 八尺妖剑
* Date: 2023/6/1
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 链栈的结构定义
**/

#include <iostream>
typedef int ElemType;
typedef struct LkStack
{
    ElemType data;
    struct LkStack *Top;
} LkStack,*LinkStack;

/**
 * 初始化
 * @param S 栈
 * @return bool
 */
bool InitStack(LinkStack &S);

/**
 * 入栈
 * @param S 栈
 * @param v 入栈的元素
 * @return bool
 */
bool Push(LinkStack &S,int v);

/**
 * 出栈
 * @param S 栈
 * @param v 出栈元素
 * @return bool
 */
bool Pop(LinkStack &S,int &v);

/**
 * 弹出栈顶元素
 * @param S 栈
 * @return int
 */
int GetTop(LinkStack S);

/**
 * 空栈
 * @param S 栈
 * @return bool
 */
bool IsEmpty(LinkStack S);


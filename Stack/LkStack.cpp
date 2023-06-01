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

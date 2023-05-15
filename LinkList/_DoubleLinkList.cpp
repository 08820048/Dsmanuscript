/**
* Author: 八尺妖剑
* Date: 2023/5/15
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 双链表基本操作:方法实现
**/
#include "_DoubleLinkList.h"
#include <iostream>

/**
 * 双链表的初始化
 * @param L 双链表
 * @return bool
 */
bool InitDoubleLinkList(DoubleLinkList &L)
{
    L = new Node;
    if(!L)
        return false;
    L->pre = L->next = nullptr; //置空前驱与后继指针
    return true;
}






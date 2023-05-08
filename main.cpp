/**
* Author: 八尺妖剑
* Date: 2023/5/7
* Email: iliekxff@gmail.com
* Blog: https://waer.ltd
* Desc: main函数入口
**/

#include "LinkList/_LinkList.h"

int main()
{
    LinkList L = nullptr;
    CreateLinkList_R(L); //创建链表
    //遍历链表
    std::cout<<"链表中的元素为："<<std::endl;
    Node *p = L->next; //从第一个节点开始
    while (p != nullptr) {
        std::cout<<p->data<<" ";
        p = p->next; //继续遍历下一个节点
    }
    std::cout<<std::endl;
    return 0;
}

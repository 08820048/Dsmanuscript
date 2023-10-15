/**
* Author: 八尺妖剑
* Date: 2023/5/7
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: main函数入口
**/

#include "LinkList/_LinkList.h"
#include <iostream>
#include "Queue/SqQueue.h"
using namespace std;
void PrintLinkList(LinkList L) {
    LinkList p = L->next;
    while (p != nullptr) {
        std::cout << p->data << " ";
        p = p->next;
    }
}
/*
int main()
{
    LinkList L;
    CreateLinkList_R(L);
    if (InsertLinkList(L,4,88))
        cout <<"success!\n";
    else
        cout <<"fail!"<<endl;
    if(DeleteLinkList(L,2))
        cout <<"delete success!\n";
    PrintLinkList(L);
    return 0;
}
*/
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
}
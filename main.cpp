/**
* Author: 八尺妖剑
* Date: 2023/5/7
* Email: iliekxff@gmail.com
* Blog: https://waer.ltd
* Desc: main函数入口
**/

#include "LinkList/_LinkList.h"
#include <iostream>
using namespace std;
void PrintLinkList(LinkList L) {
    LinkList p = L->next;
    while (p != nullptr) {
        std::cout << p->data << " ";
        p = p->next;
    }
}
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

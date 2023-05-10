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
    CreateLinkList_R(L); // 创建链表

    // 测试GetVal函数
    int v;
    if (GetVal(L, 3, v)) {
        std::cout << "第3个元素为：" << v << std::endl;
    } else {
        std::cout << "不存在第3个元素" << std::endl;
    }

    if (GetVal(L, 5, v)) {
        std::cout << "第5个元素为：" << v << std::endl;
    } else {
        std::cout << "不存在第5个元素" << std::endl;
    }

    if (GetVal(L, 7, v)) {
        std::cout << "第7个元素为：" << v << std::endl;
    } else {
        std::cout << "不存在第7个元素" << std::endl;
    }
    return 0;
}

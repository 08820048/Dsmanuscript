/**
* Author: 八尺妖剑
* Date: 2023/5/10
* Email: ilikexff@gmail.com
* Blog: https://waer.ltd
* Desc: 单链表基本操作:方法声明
**/
#include <iostream>
const int MaxSize = 100;
typedef int ElemType;
typedef struct
{
    ElemType *val;
    int length;
} SqlList;

/**
 * 顺序表的初始化
 * @param L 顺序表的引用
 * @return bool
 */
bool InitList(SqlList &L);


/**
 * 顺序表的创建
 * @param L 顺序表的引用
 * @return bool
 */
bool CreateList(SqlList &L);

/**
 * 获取第n个元素
 * @param L 表引用
 * @param i 位置
 * @param v 存储获取到的元素值
 * @return bool
 */
bool GetVal(SqlList &L,int i,int &v);


/**
 * 查找指定元素
 * @param L  顺序表
 * @param v 指定元素
 * @return 成功返回元素索引，失败返回-1
 */
int  LocateVal(SqlList L,int v);

/**
 * 向顺序表第i个位置插入一个元素v
 * @param L 顺序表
 * @param i 第i个位置
 * @param v 待插入的目标元素
 * @return bool
 */
bool ListInsert(SqlList &L,int i,int v);

/**
 * 删除第i个元素
 * @param L 顺序表
 * @param i 第i个元素
 * @param v 暂存待删除的元素
 * @return bool
 */
bool ListDelete(SqlList &L,int i,int &v);



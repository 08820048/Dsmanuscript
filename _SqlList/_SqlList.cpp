/**
* Author: 八尺妖剑
* Date: 2023/5/3
* Email: iliekxff@gmail.com
* Blog: https://waer.ltd
* Desc: 顺序表的基本操作
**/

#include <iostream>
const int MaxSize = 100;
typedef int ElemType;
typedef struct
{
    ElemType *val;
    int length;
} SqlList;

void TestPrint(const std::string &str);
bool InitList(SqlList &L);
bool CreateList(SqlList &L);
bool GetVal(SqlList &L,int i,int &v);
int LocateVal(SqlList L,int v);
bool ListInsert(SqlList &L,int i,int v);
bool ListDelete(SqlList &L,int i,int &v);
// 函数测试
//以下是我写的完整测试代码
#include <iostream>
using namespace std;
// 测试初始化函数
void test_InitList() {
    SqlList L;
    bool res = InitList(L);
    if (res) {
        cout << "InitList测试通过" << endl;
    } else {
        cout << "InitList测试不通过" << endl;
    }
}
// 测试创建函数
void test_CreateList() {
    SqlList L;
    bool res = CreateList(L);
    if (res) {
        cout << "CreateList测试通过" << endl;
    } else {
        cout << "CreateList测试不通过" << endl;
    }
}
// 测试获取元素函数
void test_GetVal() {
    SqlList L;
    bool res = InitList(L);
    if (!res) {
        cout << "GetVal测试不通过，顺序表初始化失败" << endl;
        return;
    }
    res = CreateList(L);
    if (!res) {
        cout << "GetVal测试不通过，顺序表创建失败" << endl;
        return;
    }
    int i = 0;
    cout << "请输入要获取的第几个元素的位置（1-" << L.length << "）：";
    cin >> i;
    int v;
    res = GetVal(L, i, v);
    if (res) {
        cout << "GetVal测试通过，获取到第" << i << "个元素是" << v << endl;
    } else {
        cout << "GetVal测试不通过" << endl;
    }
}
// 测试查找元素函数
void test_LocateVal() {
    SqlList L;
    bool res = InitList(L);
    if (!res) {
        cout << "LocateVal测试不通过，顺序表初始化失败" << endl;
        return;
    }
    res = CreateList(L);
    if (!res) {
        cout << "LocateVal测试不通过，顺序表创建失败" << endl;
        return;
    }
    int v = 0;
    cout << "请输入要查找的元素值：";
    cin >> v;
    int index = LocateVal(L, v);
    if (index != -1) {
        cout << "LocateVal测试通过，元素" << v << "的位置是" << index + 1 << endl;
    } else {
        cout << "LocateVal测试不通过" << endl;
    }
}
// 测试插入元素函数
void test_ListInsert() {
    SqlList L;
    bool res = InitList(L);
    if (!res) {
        cout << "ListInsert测试不通过，顺序表初始化失败" << endl;
        return;
    }
    res = CreateList(L);
    if (!res) {
        cout << "ListInsert测试不通过，顺序表创建失败" << endl;
        return;
    }
    cout << "请输入要插入的位置和值（位置从1开始）：";
    int i, v;
    cin >> i >> v;
    res = ListInsert(L, i, v);
    if (res) {
        cout << "ListInsert测试通过，插入成功，插入后的列表为：";
        for (int j = 0; j < L.length; j++) {
            cout << L.val[j] << " ";
        }
        cout << endl;
    } else {
        cout << "ListInsert测试不通过" << endl;
    }
}
// 测试删除元素函数
void test_ListDelete() {
    SqlList L;
    bool res = InitList(L);
    if (!res) {
        cout << "ListDelete测试不通过，顺序表初始化失败" << endl;
        return;
    }
    res = CreateList(L);
    if (!res) {
        cout << "ListDelete测试不通过，顺序表创建失败" << endl;
        return;
    }
    cout << "请输入要删除的位置（位置从1开始）：";
    int i;
    cin >> i;
    int v;
    res = ListDelete(L, i, v);
    if (res) {
        cout << "ListDelete测试通过，删除成功，删除的元素值为" << v << "，删除后的列表为：";
        for (int j = 0; j < L.length; j++) {
            cout << L.val[j] << " ";
        }
        cout << endl;
    } else {
        cout << "ListDelete测试不通过" << endl;
    }
}
// 测试入口函数
int main() {
    test_InitList();
    test_CreateList();
    test_GetVal();
    test_LocateVal();
    test_ListInsert();
    test_ListDelete();
    return 0;
}



void TestPrint(const std::string &str)
{
    std::cout << "[" <<str <<"]" << std::endl;
}

/**
 * 顺序表的初始化
 * @param L 顺序表的引用
 * @return bool
 */
bool InitList(SqlList &L)
{
    L.val = new int[MaxSize]; // 动态分配一个MaxSize大小的空间
    if (!L.val) return false; //分配失败
    L.length = 0; //将长度初始化为0
    return true; // 分配成功
}


/**
 * 顺序表的创建
 * @param L 顺序表的引用
 * @return bool
 */
bool CreateList(SqlList &L)
{
    int i = 0,x=0;
    std::cin >> x;
    while(x!=-10) //代表输入-1时结束输入
    {
        if(L.length == MaxSize)
        {
            std::cout <<"哦吼！表满了。";
            return false;
        }
        L.val[i++] = x; // #3 向顺序表添加元素并递增索引
        L.length++; //#4 长度递增
        std::cin >> x;
    }
    return true;
}


/**
 * 获取第n个元素
 * @param L 表引用
 * @param i 位置
 * @param v 存储获取到的元素值
 * @return bool
 */
bool GetVal(SqlList &L,int i,int &v)
{
    if (i < 1 || i > L.length)
    {
        std::cout <<"非法位置";
        return false;
    }
    v = L.val[i-1];
    return true;
}


/**
 * 查找指定元素
 * @param L  顺序表
 * @param v 指定元素
 * @return 成功返回元素索引，失败返回-1
 */
int  LocateVal(SqlList L,int v)
{
    int i;
    for(i=0;i<L.length;i++)
    {
        if (L.val[i] == v) return i;
    }
    return -1;
}

/**
 * 向顺序表第i个位置插入一个元素v
 * @param L 顺序表
 * @param i 第i个位置
 * @param v 待插入的目标元素
 * @return bool
 */
bool ListInsert(SqlList &L,int i,int v)
{
    if (i<1 || i > L.length + 1) return false; //插入位置合法性判断
    if (L.length == MaxSize) return false; //表满，无法插入
    for (int j = L.length-1;j >=i-1;j--) // 移位
        L.val[j+1] = L.val[j];
    L.val[i-1] = v; // 插入
    L.length++;
    return true; //完成插入
}

/**
 * 删除第i个元素
 * @param L 顺序表
 * @param i 第i个元素
 * @param v 暂存待删除的元素
 * @return bool
 */
bool ListDelete(SqlList &L,int i,int &v)
{
    if (i < 1 || i >L.length) return false; //合法性判断
    v = L.val[i-1]; // 暂存待删除的元素，如果确定不需要返回删除元素的情况下，可以省略这一步
    for (int j = i;j <= L.length-1;j++)
        L.val[j-1] = L.val[j]; //第i个后面的元素依次向前移动
    L.length--;
    return true;
}
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

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    //测试初始化函数
    TestPrint("------------------初始化函数测试---------------");
    SqlList L;
    if (!InitList(L))
        cout <<"初始化失败!" << endl;
    cout << "初始化成功!" << endl;
    // 测试创建函数
    TestPrint("------------------创建函数测试---------------");
    if (!CreateList(L))
    {
        cout <<"创建失败!" << endl;
    }
    cout <<"创建成功!" << endl;

    cout << "插入元素之后，顺序表的长度:" << L.length <<"\n";
    cout <<"顺序表的元素为:" << endl;
    for(int i=0;i<L.length;i++)
    {
        cout <<L.val[i] << " ";
    }
    cout << endl;
    // 测试获取元素函数
    TestPrint("------------------取值函数测试---------------");
    int v;
    if (!GetVal(L,3,v))
    {
        cout <<"获取失败!";
    }
    cout <<"第" << 3 << "个位置的元素为:" << v <<endl;
    // 测试查找函数
    TestPrint("------------------查找函数测试---------------");
    v = -2;
    int index = LocateVal(L,v);
    if (index != -1)
        cout <<"元素" << v <<"的索引为:" << index <<endl;
    else
        cout <<"查找失败!";

    delete[] L.val;

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
    while(x!=-1) //代表输入-1时结束输入
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
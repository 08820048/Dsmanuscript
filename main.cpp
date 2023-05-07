/**
* Author: °Ë³ßÑý½£
* Date: 2023/5/7
* Email: iliekxff@gmail.com
* Blog: https://waer.ltd
* Desc: mainº¯ÊýÈë¿Ú
**/

#include "LinkList/_LinkList.h"

int main()
{
    setlocale(LC_ALL,"");
    LinkList L;
    bool result = InitLinkList(L);
    if (result) {
        std::cout << "InitLinkList success!" << std::endl;
    } else {
        std::cout << "InitLinkList fail!" << std::endl;
    }

    std::cout << "Creating LinkList using Head Insert method..." << std::endl;
    CreateLinkList_H(L);
    std::cout << "LinkList created successfully!" << std::endl;
    return 0;
}

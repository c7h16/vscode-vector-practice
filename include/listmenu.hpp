#ifndef LISTMENU_HPP
#define LISTMENU_HPP

#include <iostream>
#include <vector>
#include <string>


class ListMenu {

public:

    std::vector<std::string> item_list;

    void PrintMenu();
    void PrintItemList ();
    void GetMenuChoice();
    void AddItem();
    void DeleteItem();
    void SaveList();

};



#endif
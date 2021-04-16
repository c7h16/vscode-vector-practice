#include "listmenu.hpp"

void ListMenu::PrintMenu() {

std::cout << "\n\n ***** Simple List ***** \n" << std::endl;
std::cout << " 1 - Print List " << std::endl;
std::cout << " 2 - Add Item " << std::endl;
std::cout << " 3 - Delete Item " << std::endl;
std::cout << " 4 - Save  " << std::endl;
std::cout << " 5 - Save and Quit \n" << std::endl;
std::cout << " ***** *********** ***** " << std::endl;
std::cout << " Choose an option: "; 

GetMenuChoice();

}

void ListMenu::GetMenuChoice() {


int menu_choice;
std::cin >> menu_choice;

//clear out buffer after reading the menu choice
std::cin.ignore();

    switch ( menu_choice ) {

        //print list
        case 1:
        std::cout << "You selected - " << menu_choice << std::endl;
        this->PrintItemList();
        break;

        //add item
        case 2:
        std::cout << "You selected - " << menu_choice << std::endl;
        //this->PrintMenu();
        AddItem();
        break;

        // delete item
        case 3: 
        std::cout << "You selected - " << menu_choice << std::endl;
        this->DeleteItem();
        break;

        //save list
        case 4:
        std::cout << "You selected - " << menu_choice << std::endl;
        this->PrintMenu();
        break;

        //save and quit
        case 5:
        std::cout << "You selected - " << menu_choice << std::endl;
        break;

        default:
        std::cout << "Choose a number from the list. " << std::endl;
        this->PrintMenu();
        break; 
    }


}

void ListMenu::AddItem () {

    std::string item_to_add;
    
    std::cout << " ***** Add Item ***** " << std::endl;
    std::cout << " Enter Item to add: ";


    //std::cin >> item_to_add;
    std::getline ( std::cin, item_to_add );
    std::cout << "\nyou wrote: " << item_to_add << std::endl;

    item_list.push_back(item_to_add);

    this->PrintMenu();

}

void ListMenu::PrintItemList () {

    std::cout << " ***** Item List ***** " << std::endl;

    if ( item_list.size() ) {
        for (int  i = 0; i < item_list.size(); i++ ) {
           
            std::cout << i << " - " << item_list[i] << std::endl;
        }

    }
    else {

        std::cout << " Item List is empty. " << std::endl;
    }

    this->PrintMenu();

}

void ListMenu::DeleteItem() {

std::cout << " ***** Item List ***** " << std::endl;

    if ( item_list.size() ) {
        for (int  i = 0; i < item_list.size(); i++ ) {
           
            std::cout << i << " - " << item_list[i] << std::endl;
                
            std::cout << " Enter Item Number to delete:  ";

            int item_to_delete;
            std::cin >> item_to_delete;

            // TODO: If statement to only allow entries within the range of the vector
            
            //erase item from vector
            item_list.erase( item_list.begin() + item_to_delete );

            this->PrintItemList();
        }

    }
    else {

        std::cout << " Item List is empty nothing to delete. " << std::endl;
    }


    this->PrintMenu();

}
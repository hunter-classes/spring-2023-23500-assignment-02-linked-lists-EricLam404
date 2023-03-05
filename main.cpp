#include <iostream>
#include "List.h"
#include "OList.h"

int main()
{
    /*
    List *l = new List();
    std::cout << l->toString() << " " << l->length() << "\n";
    l->insert(0,"a");
    std::cout << l->toString() << " " << l->length() << "\n";
    l->insert(0,"b");
    l->insert(0,"c");
    l->insert(0,"d");
    try {
        l->insert(10,"x");
    } catch (std::exception e){
        std::cout << "Insert x didn't work\n";
    }
    std::cout << l->toString() << "\n";
    l->insert(2,"inserted at 2");
    std::cout << l->toString() << "\n";
    l->insert(5,"inserted at end");

    std::cout << l->toString() << " " << l->length() << "\n";
    std::cout << "\n" << std::boolalpha << l->contains("inserted at end") << "\n";

    std::cout << "\n" << l->toString() << " " << l->length() << "\n";

    std::cout << "\n" << "remove(1) " << std::boolalpha << l->remove(1) << "\n";
    std::cout << l->toString() << " " << l->length() << "\n";

    std::cout << "\n" << "remove(0) " << std::boolalpha << l->remove(0) << "\n";
    std::cout << l->toString() << " " << l->length() << "\n";

    std::cout << "\n" << "remove(4) " << std::boolalpha << l->remove(4) << "\n";
    std::cout << l->toString() << " " << l->length() << "\n";

    std::cout << "\n" << "remove(3) " << std::boolalpha << l->remove(3) << "\n";
    std::cout << l->toString() << " " << l->length() << "\n";
    */

    OList *l = new OList();
    std::cout << "\n" << l->toString() << " " << l->length() << "\n";

    l->insert("b");
    std::cout << "\n" << l->toString() << " " << l->length() << "\n";
    l->insert("d");
    std::cout << "\n" << l->toString() << " " << l->length() << "\n";
    l->insert("a");
    std::cout << "\n" << l->toString() << " " << l->length() << "\n";
    l->insert("c");
    std::cout << "\n" << l->toString() << " " << l->length() << "\n";

    std::cout << "\n";

    std::cout << l->get(0) << "\n";
    std::cout << l->get(5) << "\n";
    std::cout << l->get(3) << "\n";

    l->reverse();
    std::cout << "\n" << l->toString() << " " << l->length() << "\n";
    return 0;
}

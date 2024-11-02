#include <iostream>
#include "SLL.h"

int main() {
    SLL<int> list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.display();

    list.prepend(0);
    list.display();

    list.addInPosition(5, 2);
    list.display();

    list.removeAtFirst();
    list.display();

    list.removeAtEnd();
    list.display();

    list.removeAtPosition(1);
    list.display();

    list.searchInList(2);

    list.searchInList(3);

    list.findMiddle();

    list.reverseList();
    list.display();

    return 0;
}

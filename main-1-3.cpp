#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);
PersonList deepCopyPersonList(PersonList pl);

int main() {
    int n = 5;
    PersonList original = createPersonList(n);
    PersonList copied = deepCopyPersonList(original);

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < original.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": " << original.people[i].name << ", Age: " << original.people[i].age << std::endl;
    }

    std::cout << "\nCopied List:" << std::endl;
    for (int i = 0; i < copied.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": " << copied.people[i].name << ", Age: " << copied.people[i].age << std::endl;
    }

    delete[] original.people;
    delete[] copied.people;

    return 0;
}

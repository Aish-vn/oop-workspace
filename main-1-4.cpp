#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n = 5;
    PersonList original = createPersonList(n);
    PersonList copied = shallowCopyPersonList(original);

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < original.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": " << original.people[i].name << ", Age: " << original.people[i].age << std::endl;
    }

    std::cout << "\nCopied List (Shallow Copy):" << std::endl;
    for (int i = 0; i < copied.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": " << copied.people[i].name << ", Age: " << copied.people[i].age << std::endl;
    }

    original.people[0].name = "Modified Name";

    std::cout << "\nAfter modifying the original list:" << std::endl;
    std::cout << "Copied List also reflects the change (Shallow Copy Effect):" << std::endl;
    for (int i = 0; i < copied.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": " << copied.people[i].name << ", Age: " << copied.people[i].age << std::endl;
    }

    delete[] original.people;

    return 0;
}

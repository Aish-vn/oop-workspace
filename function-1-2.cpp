#include "Person.h"

PersonList createPersonList(int n) {
    PersonList list;
    list.numPeople = n;

    if(n > 0) {
        list.people = new Person[n]; 
        for (int i = 0; i < n; i++) {
            list.people[i].name = "Jane Doe";
            list.people[i].age = 1;
        }
        
    } else {
        list.people = nullptr;
    }

    return list;
}

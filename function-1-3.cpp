#include "Person.h"

PersonList deepCopyPersonList(PersonList pl){
    PersonList copy;
    copy.numPeople = pl.numPeople;

    if (pl.numPeople > 0) {
        copy.people = new Person[pl.numPeople];
        for (int i = 0; i < pl.numPeople; i++) {
            copy.people[i] = pl.people[i];
        }
    } else {
        copy.people = nullptr;
    }

    return copy;
}
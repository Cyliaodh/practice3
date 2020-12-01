#include <iostream>
#include<string>
#include "Header.h"
using namespace std;


// the create function, initialization of attributs

void ZooAnimal::Create(char const *n, int cageN, int weightD, int w)
{
    name = n;
    cageNumber = cageN;
    weightDate = weightD;
    weight = w;

}
void ZooAnimal::Destroy()
{
    delete[] name;
}


char const* ZooAnimal::reptName()
{
    return name;
}

int ZooAnimal::daysSinceLastWeighed(int today)
{
    int startday, thisday;
    thisday = today / 100 * 30 + today - today / 100 * 100;
    startday = weightDate / 100 * 30 + weightDate - weightDate / 100 * 100;
    if (thisday < startday)
        thisday += 360;
    return (thisday - startday);
}

inline int ZooAnimal::reptWeightDate()
{
    return weightDate;
};

inline void ZooAnimal::changeWeightDate(int today)
{
    weightDate = today;
}


void ZooAnimal::isMotherOf(ZooAnimal& mom)
{
    mom.mother = this;  // this is  the pointer to an object
}

int main()
{
    ZooAnimal bozo;

    bozo.Create("Bozo", 408, 1027, 400);


    cout << "This animal's name is " << bozo.reptName() << endl; // using a member function to get the private member data

    /* //print something else to verify function
     cout << "This animal's weight date " << bozo.reptWeightDate() << endl;*/

    bozo.Destroy();

    return 0;
}

#pragma once


#include<string>
enum scale { ounces, kilograms };

class ZooAnimal
{
private:
    char const *name;
    int cageNumber;
    int weightDate;
    int weight;
    ZooAnimal* mother;

public:
    void Create(char const*, int, int, int);
    void Destroy();
    void isMotherOf(ZooAnimal&);
    void changeWeight(int pounds);
    inline void changeWeightDate(int today);
    char const* reptName();
    int reptWeight();
    void reptWeight(scale which);
    inline int reptWeightDate();
    int daysSinceLastWeighed(int today);
    





};




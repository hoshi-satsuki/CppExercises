#ifndef SETOFINT_H
#define SETOFINT_H
#include <iostream>
#include <vector>

class SetofInt{

public:
    //constructors
    SetofInt()=default;
    SetofInt(int a);
    SetofInt(std::initializer_list<int> liste);
    //methods
    bool isMember(const int& e) const; //is element?
    void addelt(const int& e); //add element
    void rmelt(const int& e); //remove element
    size_t numMem() const; //number of elements
    void display() const; //display elements
    void del(); //delete all elements
    int getMax() const; //get maximal element
    int getMin() const; //get minimal element

private:
    std::vector<int> elts;

};

inline SetofInt::SetofInt(int a) : elts {a}{}

inline SetofInt::SetofInt(std::initializer_list<int> liste){
    elts.assign(liste);
}



#endif // SETOFINT_H

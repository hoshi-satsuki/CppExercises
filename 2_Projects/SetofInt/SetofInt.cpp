#include "SetofInt.h"

//add element
void SetofInt::addelt(const int& e){
    if(!SetofInt::isMember(e)) elts.push_back(e);
    else std::cout<<e<<" is already a member of the set."<<'\n';
}

//remove element
void SetofInt::rmelt(const int& e){
    if(SetofInt::isMember(e)){
        std::vector<int> temp;
        for(auto i : elts){
            if(i!=e) temp.push_back(i);
        }
        elts=temp;
    }
    else std::cout<<e<<"is not a member of the set."<<'\n';
}


//is element?
bool SetofInt::isMember(const int& e) const{
    bool is=false;
    for(auto i: elts){
        if(i==e) is=true;
    }
    return is;
}

//number of elements
size_t SetofInt::numMem() const{
    size_t num=elts.size();
    return num;
}

//display elements
void SetofInt::display() const{
    for(auto i : elts){
        std::cout<<i<<' ';
    }
    std::cout<<'\n';
}

 //delete all elements
void SetofInt::del(){
    std::vector<int> temp;
    elts=temp;
}

//get maximal element
int SetofInt::getMax() const{
    int maxi;
    if(elts.size()==0){
        std::cout<<"empty set"<<'\n';
        maxi=99999;
    }
    else{
        maxi=elts[0];
        for(size_t i=1;i<elts.size();i++){
            if(maxi<elts[i]) maxi=elts[i];
        }
    }
    return maxi;
}

//get minimal element
int SetofInt::getMin() const{
    int mini;
    if(elts.size()==0){
        std::cout<<"empty set"<<'\n';
        mini=99999;
    }
    else{
        mini=elts[0];
        for(size_t i=1;i<elts.size();i++){
            if(mini>elts[i]) mini=elts[i];
        }
    }
    return mini;
}




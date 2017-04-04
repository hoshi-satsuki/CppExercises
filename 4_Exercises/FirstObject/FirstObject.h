#ifndef FIRSTOBJECT_H_INCLUDED
#define FIRSTOBJECT_H_INCLUDED

enum class Geschlecht {m,w};

class Person{
public:
    Person(std::string x, unsigned int y, Geschlecht z) : Name {x},Alter {y},PGeschlecht{z} {}

    std::string getName() const{
        return Name;
    }
    unsigned int getAlter() const{
        return Alter;
    }
    void setName(const std::string& neuerName){
        Name=neuerName;
    }
    void setAlter(unsigned int neuesAlter){
        Alter=neuesAlter;
    }
    bool istFrau() const {
        return(PGeschlecht==Geschlecht::w);
    }
    bool istMann() const {
        return(PGeschlecht==Geschlecht::m);
    }

private:
    std::string Name;
    unsigned int Alter;
    Geschlecht PGeschlecht;


};


#endif // FIRSTOBJECT_H_INCLUDED

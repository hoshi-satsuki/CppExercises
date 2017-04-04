We implement a class SetofInt to represent sets of integer numbers.
There are the following member functions:

    //constructors
    SetofInt()=default;
    SetofInt(int a);
    SetofInt(std::initializer_list<int> liste);

    //other
    bool isMember(const int& e) const; //is element?
    void addelt(const int& e); //add element
    void rmelt(const int& e); //remove element
    size_t numMem() const; //number of elements
    void display() const; //display elements
    void del(); //delete all elements
    int getMax() const; //get maximal element
    int getMin() const; //get minimal element





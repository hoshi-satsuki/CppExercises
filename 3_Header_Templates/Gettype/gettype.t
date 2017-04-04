#ifndef GETTYPE_T
#define GETTYPE_T

#include<string>

template<typename T>
std::string gettype(T t){
    return "unknown type";
}

template<>
std::string gettype<int>(int t){
    return "int";
}

template<>
std::string gettype<unsigned int>(unsigned int t){
    return "unsigned int";
}

template<>
std::string gettype<char>(char t){
    return "char";
}

template<>
std::string gettype<bool>(bool t){
    return "bool";
}


#endif

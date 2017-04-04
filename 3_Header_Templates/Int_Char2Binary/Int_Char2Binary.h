#ifndef INT_CHAR2BINARY_H_INCLUDED
#define INT_CHAR2BINARY_H_INCLUDED

/*In case input is of type char, signed char or unsigned char, this function prints the associated integer value, that is the Ascii value.*/
template<typename T>
void CharAsInt(const T& letter){
}
template<>
void CharAsInt(const char& letter){
    std::cout<<"This character's integer representation is: "<<static_cast<int>(letter)<<'\n';
}
template<>
void CharAsInt(const signed char& letter){
    std::cout<<"This character's integer representation is: "<<static_cast<int>(letter)<<'\n';
}
template<>
void CharAsInt(const unsigned char& letter){
    std::cout<<"This character's integer representation is: "<<static_cast<int>(letter)<<'\n';
}

/* This function prints bit- and hex-representation for integer type inputs such as int, unsigned long, char, etc.*/
template<typename T>
void Integer2Bitrepresentation(const T& number){
        CharAsInt(number);
        std::cout<<number<<" has the following bit representation: "<<'\n';
        for(int k=sizeof(number)*8-1;k>=0;k--){
            if(number&1ll<<k) std::cout<<"1";
            else std::cout<<'0';
            if (k%4==0) std::cout<<' ';
        }
        std::cout<<'\n';
        for(int k=sizeof(number)*2-1;k>=0;k--){
            int sum=0;
            unsigned int multip=8;
            for(int l=3;l>=0;l--){
                if(number&1ll<<(k*4+l)){
                    sum+=multip;
                }
                multip=multip>>1;
            }
            std::cout.width(4);
            if(sum>9){
                std::cout<<static_cast<char>(static_cast<int>('A')+(sum-10));
            }
            else{
                std::cout<<sum;
            }
            std::cout<<' ';
        }
        std::cout<<'\n';

}


#endif // INT_CHAR2BINARY_H_INCLUDED

#include <iostream>
#include <fstream>

bool IsLetter(char c){
    bool b=false;
    if((c>='a')&&(c<='z')) b=true;
    if((c>='A')&&(c<='Z')) b=true;
    return b;
}


int main()
{
    std::string filename="example.txt";
    std::ifstream source(filename,std::ios::binary);
    if(!source){
        std::cerr<<"Cannot open"<<filename<<'\n';
        exit(-1);
    }
    char c;
    unsigned int number_characters=0;
    unsigned int number_words=0;
    unsigned int number_lines=0;
    bool IsWord=false;
    bool IsNewLine=false;
    while(source.get(c)){
        std::cout<<c;
        if((c=='\r')||(c=='\n')){
                if(!IsNewLine){
                    number_lines++;
                    IsNewLine=true;
                }
        }
        else{
            number_characters++;
            IsNewLine=false;
        }
        if(IsLetter(c)){
            if(!IsWord) IsWord=true;
        }
        else{
            if(IsWord){
                number_words++;
                IsWord=false;
            }
        }
    }
    if(!((c=='\n')||(c=='\r'))) number_lines++;
    std::cout<<"\n\n\n";
    std::cout<<"Number of characters (except newline or carriage return character): "<<number_characters<<'\n';
    std::cout<<"Number of words (sequences of letters): "<<number_words<<'\n';
    std::cout<<"Number of lines: "<<number_lines<<'\n';
}

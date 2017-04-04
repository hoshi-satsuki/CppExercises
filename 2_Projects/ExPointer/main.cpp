#include <iostream>
#include <cstring>
#include <cstdlib>

// strcopy copies a string source onto a string dest, assuming ziel is suffiently large
void strcopy(char* dest, const char* source){
    while(*dest++=*source++);
}

//strdupl creates a duplicate of a string s by allocating memory through new and returns
//a pointer to the duplicate
char* strdupl(const char * s){
    char * dupl=new char[strlen(s)+1];
    char * temp=dupl;
    while(*temp++=*s++);
    return dupl;
}


//Function scmp(*a,*b) compares two strings according to lexicographical order, outputs
//a value larger than 0, iff *a>*b
//0                    , iff *a==*b
//a value smaller than 0, iff *a<*b
//A pointer to this function will be passed to qsort().
int scmp(const void *a,const void *b){
    const char * sa=*static_cast<const char *const*>(a);
    const char * sb=*static_cast<const char *const*>(b);
    //std::cout<<"sa= "<<sa<<", "<<"sb="<<sb<<' ';
    int c=strcmp(sa,sb);
    //std::cout<<"c= "<<c<<'\n';
    return c;

}

//Function  removes Blanks from a string that is represented as an array of character.
void RemoveBlanks(char *s){
    char * t=s;
    do{
            if(*s !=' ') *t++=*s;
    }while(*s++);
}

int main()
{
   const char *EXPL ="This is an example";


   //testing function strcopy
   {
        std::cout<<"Testing function strcopy(): Copies a string into another string"<<'\n';
        char text[100];
        strcopy(text,EXPL);
        std::cout<<EXPL<<'\n';
        std::cout<<text<<'\n';
        std::cout<<"\n\n";
   }

   //calling strcupl
   {
        std::cout<<"Testing function strdupl(): Creates a duplicate of a string"<<'\n';
        char * text=strdupl(EXPL);
        std::cout<<EXPL<<'\n';
        std::cout<<text<<'\n';
        delete [] text;
        std::cout<<"\n\n";
   }

   //sorting an array of strings using the function qsort() and passing it a function scmp() that compares
   //strings according to lexicographical order
   {
        const char* sfield[]={"eins","zwei","drei","vier","fuenf","sechs","sieben","acht","neun","zehn"};
        unsigned int num_elts=sizeof(sfield)/sizeof (sfield[0]);
        std::cout<<"Testing the usage of qsort() with C-strings:"<<'\n';
        std::cout<<"Unsorted array of strings:"<<'\n';
        for(unsigned int i=0;i<num_elts;++i){
            std::cout<<sfield[i]<<' ';
        }
        std::cout<<'\n';
        qsort(sfield,num_elts,sizeof(sfield[0]),scmp);
        std::cout<<"Sorted array of strings:"<<'\n';
        for(unsigned int i=0;i<num_elts;++i){
            std::cout<<sfield[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"\n\n";
   }

   // calling RemoveBlanks
    {
        std::cout<<"Testing function RemoveBlanks(), which is supposed to remove the blanks from a character array."<<'\n';
        char Test[]="This is a  text.";
        std::cout<<Test<<'\n';
        std::cout<<"Length= "<<strlen(Test)<<"."<<'\n';
        RemoveBlanks(Test);
        std::cout<<Test<<'\n';
        std::cout<<"Length= "<<strlen(Test)<<"."<<'\n';
    }

}

#include <iostream>
#include <vector>

void printTowers(std::vector<unsigned int> A,std::vector<unsigned int> B,std::vector<unsigned int> C){
    std::cout<<"A: ";
    for(auto number:A){
        std::cout.width(3);
        std::cout<<number;
    }
    std::cout<<'\n';
    std::cout<<"B: ";
    for(auto number:B){
        std::cout.width(3);
        std::cout<<number;
    }
    std::cout<<'\n';
    std::cout<<"C: ";
    for(auto number:C){
        std::cout.width(3);
        std::cout<<number;
    }
    std::cout<<'\n';
}

unsigned int moveFrom(std::vector<unsigned int>& S){
    unsigned int result;
    bool found=false;
    int k=S.size()-1;
    while(!found){
        if(S[k]!=0){
            found=true;
            result=S[k];
            S[k]=0;
            break;
        }
        else k--;
    }
    return result;
}
void moveTo(std::vector<unsigned int>& S, const unsigned int number){
    bool found=false;
    int k=S.size()-1;
    while(!found){
        if(S[k]!=0){
            found=true;;
            S[k+1]=number;
            break;
        }
        else k--;
    }
}



void moving(const int n, const char from, const char to, const char working,std::vector<unsigned int>& A,std::vector<unsigned int>& B,std::vector<unsigned int>& C){
    if(n>0){
        moving(n-1, from, working, to, A,B,C);

        std::cout<<"Moving from "<<from<<" to "<<to<<'.'<<'\n';
        unsigned int number;
        switch(from){
            case 'A': number=moveFrom(A); break;
            case 'B': number=moveFrom(B); break;
            case 'C': number=moveFrom(C); break;
        }
        std::cout<<number<<'\n';
        switch(to){
            case 'A': moveTo(A, number); break;
            case 'B': moveTo(B, number); break;
            case 'C': moveTo(C, number); break;
        }
        printTowers(A,B,C);
        std::cout<<'\n';

        moving(n-1,working,to,from,A,B,C);
    }

}

int main()
{
    int n;
    //n=6;
    std::cout<<"How many levels should the tower have?"<<'\n';
    std::cin>>n;
    std::vector<unsigned int> A(n);
    std::vector<unsigned int> B(n);
    std::vector<unsigned int> C(n);
    for(unsigned int k=0;k<n;k++){
        A[k]=n-k;
    }
    printTowers(A,B,C);
    moving(n,'A','B','C',A,B,C);

    return 0;
}

#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED


//implement test_mode
#define TEST_ON
#ifdef TEST_ON
    #define Test_Mode(something) something
#else
    #define Test_Mode(something) /*nothing*/
#endif // TEST_ON

//implement PRINT()
#define PRINT(X) std::cout<<(#X)<<"="<<(X)<<std::endl;

//include assert
#include<cassert>

#endif // MEINHEADER_H_INCLUDED

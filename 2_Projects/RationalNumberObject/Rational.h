#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED

class Rational{
public:
    Rational(long n=0,long d=1);
    long getNumerator() const;
    long getDenominator() const;
    void inputR();
    void outputR();
    void reciprocal();
    void add(const Rational & r);
    void sub(const Rational & r);
    void mult(const Rational & r);
    void div(const  Rational & r);


private:
    long numerator, denominator;
    void setR(long n, long d);
    void cancel();
};

//definition of inline member functions
inline long Rational::getNumerator() const {return numerator;}
inline long Rational::getDenominator() const {return denominator;}

//declaration of other functions
const Rational add(const Rational & a, const Rational & b);
const Rational sub(const Rational & a, const Rational & b);
const Rational mult(const Rational & a, const Rational & b);
const Rational div(const Rational & a, const Rational & b);




#endif // RATIONAL_H_INCLUDED

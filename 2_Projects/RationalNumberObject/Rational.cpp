#include "Rational.h"
#include<iostream>
#include <cassert>

namespace{
    long gcd(long x,long y){
        long rest;
        while(y>0){
            rest=x%y;
            x=y;
            y=rest;
        }
        return x;
    }
}

Rational::Rational(long n, long d){
    if(d==0) exit(-1);
    setR(n,d);
}

void Rational::inputR(){
    long int n;
    long int d;
    std::cin>>n>>d;
    if(d==0){
            std::cout<<"Cannot set denominator to zero."<<'\n';
    }
    else{
        setR(n,d);
    }
}

void Rational::outputR(){
    std::cout<<getNumerator()<<"/"<<getDenominator()<<'\n';
}


void Rational::setR(long n, long d){
    numerator=n;
    denominator=d;
    assert(denominator!=0);
    cancel();
}

void Rational::reciprocal(){
    if(numerator==0) exit(-1);
    long temp=numerator;
    numerator=denominator;
    denominator=temp;
    cancel();
}

void Rational::add(const Rational & r){
    numerator=numerator*r.denominator+r.numerator*denominator;
    denominator=denominator*r.denominator;
    cancel();
}

void Rational::sub(const Rational & r){
   numerator=numerator*r.denominator-r.numerator*denominator;
   denominator=denominator*r.denominator;
   cancel();
}

void Rational::mult(const Rational & r){
    numerator=numerator*r.numerator;
    denominator=denominator*r.denominator;
    cancel();
}

void Rational::div(const Rational & r){
    if(r.numerator==0)exit(-1);
    numerator=numerator*r.denominator;
    denominator=denominator*r.numerator;
    cancel();
}

void Rational::cancel(){
    int sign=1;
    if(numerator<0){
        sign=-sign;
        numerator=-numerator;
    }
    if(denominator<0){
        sign=-sign;
        denominator=-denominator;
    }
    long temp=gcd(numerator,denominator);
    numerator=sign*numerator/temp;
    denominator=denominator/temp;
}


const Rational add(const Rational & a, const Rational & b){
    Rational r=a;
    r.add(b);
    return r;
}

const Rational sub(const Rational & a, const Rational & b){
    Rational r=a;
    r.sub(b);
    return r;
}

const Rational mult(const Rational & a, const Rational & b){
    Rational r=a;
    r.mult(b);
    return r;
}

const Rational div(const Rational & a, const Rational & b){
    Rational r=a;
    r.div(b);
    return r;
}




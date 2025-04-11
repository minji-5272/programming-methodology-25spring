#include "calculator.h"
#include <stdexcept>

int Calculator::add(int a, int b) {
    // TODO
    if (a<0 && b<0) {
        if(a+b>0){
        throw std::overflow_error("");}
    }
    else if (a>0 && b>0){
        if(a+b<0){
            throw std::overflow_error("");}
        }
    
    return a+b;
}

int Calculator::sub(int a, int b) {
    // TODO
    if (a<0 && b>0) {
        if(a-b>0){
        throw std::overflow_error("");}
    }
    else if (a>0 && b<0){
        if(a-b<0){
            throw std::overflow_error("");}
    }
    return a-b;
}

int Calculator::mul(int a, int b) {
    // TODO
    if ((a<0 && b>0)||(a>0 && b<0) ){
        if (a*b >0){
            throw std::overflow_error("");
        }
    }
    else if ((a<0 && b<0) || (a>0 && b>0)){
        if (a*b<0){
            throw std::overflow_error("");
        }
    }

    return a*b;
}

int Calculator::div(int a, int b) {
    // TODO
    if (b==0){
        throw std::invalid_argument("");
    }
    else if ((a>0 && b<0) || (a<0 && b>0)){
        if (a/b >0){
            throw std::overflow_error("");
        }
    }
    else if ((a<0 && b<0) || (a>0 && b>0)){
        if (a/b<0){
            throw std::overflow_error("");
        }
    }
    return a/b;
}
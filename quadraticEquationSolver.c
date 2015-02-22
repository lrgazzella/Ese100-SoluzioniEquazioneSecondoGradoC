#include "quadraticEquationSolver.h"
#include <math.h>

complexNumber soluzioneX1(float a, float b, float c){
    float delta;
    complexNumber sol;
    
    delta = calcolaDelta( a,  b,  c);    
    if(delta < 0){
        sol.im = (sqrt( -delta ))/(2*a); 
        sol.re = ((-b)/(2*a));
    }else{
        sol.im = 0;
        sol.re = (-b + sqrt(delta))/(2*a);
    } 
    return sol;
} //-1

complexNumber soluzioneX2(float a, float b, float c){
    
    float delta;
    complexNumber sol;
    
    delta = calcolaDelta( a,  b,  c);    
    if(delta < 0){
        sol.im = -(sqrt( -delta ))/(2*a); 
        sol.re = (-b)/(2*a);
    }else{
        sol.im = 0;
        sol.re = (-b - sqrt(delta))/(2*a);
    }  
    return sol;
}//-1

float calcolaDelta(float a, float b, float c){
    
    float delta = 0;
    delta = ((pow(b,2))-(4*a*c));
    
    return delta; 
}  //-1


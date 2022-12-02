
#include "lib.h"
bool numeroprimo (int n, int i) {
    
    
    if (n%i==0){
    return i ==n;}
    else 
    {numeroprimo(n, i+1);}
//return (n%i==0) ? i==n : numeroprimo(n,i+1);//
}

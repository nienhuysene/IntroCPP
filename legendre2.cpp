#include <iostream>

//NOTE: comments indicated by //NOTE, //STYLE, //SYNTAX are explanations
//      such comments should NOT be written into actual code

int main(){
    std::cout<<"Compute value of Legendre polynomials P[n](x)"<<std::endl;

    //STYLE: always provide information about the input
    std::cout<<"enter x in the range [-1,1]: ";

    //STYLE: check inputs! Users (including likely yourself) tend to type incredible garbage
    double x;
    do{
        std::cin>>x;
        if(x<-1. or x>1.){
            std::cout<<"need x in [-1,1], got: "<<x<<" ctr-c for terminating"<<std::endl;
        }
    } while (x<-1 or 1<x);

    std::cout<<"enter maximal n: ";
    int nMax;
    std::cin>>nMax;
    if(nMax<0){
        std::cout<<"need nMax>=0, got: "<<std::endl;
        std::exit(0);
    }

    std::cout<<"Lagrange polynomials at "<<x<<" up to n="<<nMax<<std::endl;

    std::cout<<1.<<" "<<x;

    // initial values for recursion
    //NOTE: pnPlus1 does not need an initialization, its value is set inside the loop
    double pnMinus1=1., pn=x,pnPlus1;
    //STYLE: use names that are easy to interprete

    //SYNTAX: all three commands, n++,pnMinus1=pn,pn=pnPlus,
    //        will be executed after { ... } of the floor loop
    for (int n=1; n<nMax; n++,pnMinus1=pn,pn=pnPlus1){
        pnPlus1=((2*n+1)*x*pn+n*pnMinus1)/double(n+1);
        std::cout<<" "<<pnPlus1;
    }
    std::cout<<std::endl;
}
#include <iostream>
#include "celBo.h"

int main() {
    CelBo sun(1.98892e30,{0.,0.,0.});
    CelBo earth(5.9722e24,{0,0,1.495978707e11});
    CelBo moon(7.346e22,{3.84399e8,0,1.495978707e11});

    std::vector<CelBo> bos={sun,earth,moon};
    for(int k=0;k<3;k++){
        auto f=bos[k].forceOn(bos[(k+1)%3]);
        std::cout<<k<<" on "<<(k+1)%3<<": ";
        for(auto ff: f)std::cout<<" "<<ff;
        std::cout<<std::endl;
    }
}
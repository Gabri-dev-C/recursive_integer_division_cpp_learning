#include <iostream>

int divisione(int dividendo, int divisore);

int main()
{

    int divid = 25;
    int divis = 5;
    int quoz;
    if((quoz = divisione(divid, divis)) < 0){
        std::cout << std::endl;
        std::cout << "Errore: divisore uguale a 0";
        std::cout << std::endl;
    }else{
        std::cout << std::endl;
        std::cout << "\tIl quoziente e': " << quoz;
        std::cout << std::endl;
    }

    return 0;
}

int divisione(int dividendo, int divisore){
    if(divisore == 0)
        return -1;

    if(dividendo < divisore)
        return 0;
    else
        return 1 + divisione(dividendo - divisore, divisore);
}

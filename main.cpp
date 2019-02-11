///Simono Šaltenio 2gr. 2pogr. v1.0
#include <iostream>
#include <string>

int main()
{
    std::string vardas, pasisveikinimas="";
    std::string remelis="";

    std::cout << "Iveskite varda:" << std::endl;
    std::cin >> vardas;

    if (vardas.back() == 's') {  // .back() nuo C++11
    	pasisveikinimas = "Sveikas, " + vardas + "!";
  	}
    else {
    	pasisveikinimas = "Sveika, " + vardas + "!";
  	}

    for(int i=0; i<pasisveikinimas.length(); i++){
        remelis+="*";
    }

    int eil;
    std::cout << "Iveskite eiluciu skaiciu:" << std::endl;
    std::cin >> eil;

    std::cout << "**" << remelis << "**" << std::endl;
    for(int i=0; i<eil*2+1; i++){
        std::cout << "* ";
        if(i==eil){
            std::cout << pasisveikinimas;
        }
        else for(int i=0; i<pasisveikinimas.length(); i++) std::cout << " ";
        std::cout << " *" << std::endl;
    }
    std::cout << "**" << remelis << "**" << std::endl;

    return 0;
}

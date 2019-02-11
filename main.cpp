///Simono Šaltenio 2gr. 2pogr. v0.2
#include <iostream>
#include <string>

int main()
{
    std::string vardas, pasisveikinimas="";
    std::string pirma="";
    std::string antra="";
    std::string trecia;

    std::cout << "Iveskite varda: " << std::endl;
    std::cin >> vardas;

    if (vardas.back() == 's') {  // .back() nuo C++11
    	pasisveikinimas = "Sveikas, " + vardas + "!";
  	}
    else {
    	pasisveikinimas = "Sveika, " + vardas + "!";
  	}

    for(int i=0; i<pasisveikinimas.length(); i++){
        pirma+="*";
        antra+=" ";
    }

    std::cout << "**" << pirma << "**" << std::endl;
    std::cout << "* " << antra << " *" << std::endl;
    std::cout << "* " << pasisveikinimas << " *" << std::endl;
    std::cout << "* " << antra << " *" << std::endl;
    std::cout << "**" << pirma << "**" << std::endl;

    return 0;
}

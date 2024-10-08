#ifndef TRIDENI_H
#define TRIDENI_H

#include <vector>
#include <string>

using SeznamSlov = std::vector<std::string>; // Vytvorime alias pro slozeny datovy typ reprezentujici dynamicke pole retezcu

// Funkce, co nacte seznam ze souboru a vrati ho jako SeznamSlov 
SeznamSlov nacti(std::string vstupni_soubor);

// Funkce, co vrati setrideny seznam
SeznamSlov setrid(SeznamSlov nesetrideny_seznam);

// Funkce ulozi seznam do souboru (nevraci nic)
void uloz(SeznamSlov seznam, std::string vystupni_soubor);


#endif
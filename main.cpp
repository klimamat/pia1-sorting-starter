#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <exception>
#include <vector>

// Funkce pro mereni vypocetniho casu (stopky)
#include "stopwatch.h"

// Funkce "nacti", "setrid" a "uloz" + datovy typ SeznamSlov deklarovany zde:
#include "trideni.h"

// Hlavni funkce programu

int main() {

    SeznamSlov nesetridena_jmena = nacti("prijmeni.dat");

    std::cout << "Nacteno " << nesetridena_jmena.size() << " slov." << std::endl;
    std::cout << "Serazuji slova ... " << std::endl;

    // Zacatek mereni CPU casu
    tick();

    SeznamSlov setridena_jmena = setrid(nesetridena_jmena);

    // Konec mereni CPU casu
    tick();

    std::cout << "Hotovo. Serazeni trvalo " << time_string() << std::endl << std::endl;

    uloz(setridena_jmena, "vystup.dat");

    return 0;
}
# Třídění

Máte k dispozici tělo programu (v souboru main.cpp), který má za úkol načíst ze souboru jména uložená na řádcích a setřídit je podle abecedy.

Funkci main neměňte (pokud to nebude nutné), ale vytvořte implementace funkcí (viz hlavičkový soubor trideni.h), které bude program potřebovat. Tyto uložte do zdrojového souboru trideni.cpp. 
Jako třídící algoritmus můžete použít např. https://en.wikipedia.org/wiki/Bubble_sort (asi nejjednodušší), https://en.wikipedia.org/wiki/Insertion_sort nebo něco jiného

Soubor jmena.dat je krátký a vhodný pro testování programu, jestli funguje správně. Pokud třídění funguje, můžete dále poměřit efektivitu Vašeho algoritmu (a hrubý výkon CPU na jádro) - program změří a vypíše čas, který mu třídění zabralo. Můžete to vyzkoušet na souborech jmena2.dat a prijmeni.dat, které obsahují už řádově tisíce slov.

Pro přeložení programu dejte pozor, abyste v IDE přidali do projektu všechny zdrojové a hlavičkové soubory. Případně můžete využít CMake (pokud ho máte na Vašem počítači k dispozici). Na linuxu přeložíte projekt pomocí dvou příkazů v terminálu (musíte se nacházet v adresáři projektu):
```
cmake .
make
```

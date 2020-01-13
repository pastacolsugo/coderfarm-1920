# Vector

I `vector` sono come degli array, ma hanno delle funzioni interne piu' comode e semplici da usare.

La caratteristica piu' importante dei vector e' che non sono a dimensione fissa, come gli array, ma la loro dimensione puo' variare.

#### Libreria `vector`

Per poter usare i `vector` devi includere la libreria apposita!

``` c++
#include <vector>
```

#### Dichiarazione `vector`

Per esempio, dichiaro un `vector` di interi:

``` c++
vector <int> pippo;
```

#### Funzioni interne dei `vector` (metodi)

``` c++
pippo.push_back(val);   // aggiunge val in fondo 
pippo.pop_back();       // toglie l'ultimo elemento
pippo.size();           // mi dice quanti elementi ci sono nel vector
pippo.resize(n);        // cambia la dimensione del vector a n
pippo.resize(n, val);   // cambia la dimensione del vector a n, tutti i valori che aggiunge saranno val
pippo.empty();          // true se il vector e' vuoto, false se c'e' qualcosa
pippo.clear();          // svuota il vector
```


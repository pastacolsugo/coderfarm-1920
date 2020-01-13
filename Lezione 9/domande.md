# Domande

1. **Quando uso il metodo `clear` di un vector, azzero gli elementi?**

	No, quando usi il metodo `clear` di un vector elimini tutto il suo contenuto. La dimensione del vector dopo questa operazione sara' zero: il vector esiste ma non ha contenuto.
	(http://www.cplusplus.com/reference/vector/vector/clear/)

2. **Quando ho un `vector<pair<X, Y> >` come faccio ad accedere, ad esempio, al first della casella 3?**

	```c++
		#include <vector>
		#include <utility>
		vector<pair<int, int> > v; // creo il vector di pair
		v.resize(5); // aggiungo caselle
		v[3] = make_pair(100, 200); // creo un pair e lo metto in posizione 3
		cout << v[3].first << ' ' << v[3].second << endl; // accedo ai valori
	```


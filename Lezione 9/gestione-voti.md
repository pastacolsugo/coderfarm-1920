# Gestione voti

Crea un programma che ti permetta di gestire i voti di una materia scolastica.

### Interfaccia

Quando faccio partire il programma ottengo la seguente interfaccia:

```
Cosa vuoi fare?:
1 - Stampa i voti
2 - Aggiungi Voto
3 - Calcola la media
4 - Esci
>>
```

Posso inserire un numero e scegliere una delle opzioni indicate.

#### 1 - Stampa i voti

Se richiedo l'elenco dei voti e non ce ne sono, ottengo il messaggio `Non ci sono voti.`. In caso contrario, vengono stampati tutti i voti.
Dopo ogni comando, viene stampata nuovamente la lista delle opzioni e il programma aspetta un ulteriore comando.

```
[...]
>> 1
Non ci sono voti.
Cosa vuoi fare?:
1 - Stampa i voti
2 - Aggiungi Voto
3 - Calcola la media
4 - Esci
>>
```

#### 2 - Aggiungi voto

Mi viene richiesto di aggiungere un voto da tastiera.

```
Cosa vuoi fare?:
1 - Stampa i voti
2 - Aggiungi Voto
3 - Calcola la media
4 - Esci
>> 2
Scrivi il voto da inserire: 10
```

#### 3 - Calcola la media

Viene calcolata la media sul momento e stampata sullo schermo.

```
Cosa vuoi fare?:
1 - Stampa i voti
2 - Aggiungi Voto
3 - Calcola la media
4 - Esci
>> 3
La media dei voti e': 8
```

#### 4 - Esci

Il programma termina.



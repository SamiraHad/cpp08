# cpp08

La STL est une bibliothèque standard en C++ basée sur les templates. Elle contient : 

* des containers → vector, list, deque, etc.

* des algorithmes → find, sort, count, etc.

* des itérateurs → pour parcourir les containers
  

Un algorithme STL est une fonction générique qui travaille avec des itérateurs.

EX00: 

Dans cet exercice, on crée une fonction template easyfind qui permet de chercher une valeur dans un container.

Elle prend en paramètre un container d’entiers et une valeur à rechercher.

On utilise l’algorithme std::find de la STL pour faire la recherche, au lieu d’une boucle.

Si la valeur est trouvée, la fonction retourne un itérateur vers cet élément.

Si elle n’est pas trouvée, on lance une exception ou on retourne une valeur d’erreur.



Exemple avec un cas qui marche:

std::vector<int> v = {4, 5, 3};

auto it = easyfind(v, 5);

=======>

*it = 5



Exemple avec un cas qui ne marche pas:

std::vector<int> v = {4, 5, 3};

auto it = easyfind(v, 42);

=======>

exception

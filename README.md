# cpp08

La STL est une bibliothèque standard en C++ basée sur les templates. Elle contient : 

* des containers → vector, list, deque, etc.
* des algorithmes → find, sort, count, etc.
* des itérateurs → pour parcourir les containers
  
Un container est une structure qui stocke des données (comme un tableau amélioré).

Un algorithme STL est une fonction générique qui travaille avec des itérateurs.

Un itérateur est comme un pointeur qui permet de parcourir un container.


*En C++98, la bibliothèque standard (STL) distingue bien deux grandes catégories de conteneurs :

Des conteneurs séquentiels et des Conteneurs associatifs. 

<img width="498" height="350" alt="image" src="https://github.com/user-attachments/assets/93e1973a-0a13-427c-932b-e7fb29cf0146" /> .

1. vector (tableau simple)

👉 le plus utilisé (90% du temps)

✔️ À utiliser quand :
tu lis souvent les données
tu veux accéder avec un index (v[0])
tu ajoutes surtout à la fin

👉 exemple :

std::vector<int> v;

v.push_back(1);

v.push_back(2);

👉 💬 à dire : 

j’utilise vector quand j’ai besoin d’un tableau rapide et simple



2. list (modifications fréquentes)

👉 quand tu modifies beaucoup

✔️ À utiliser quand :
tu ajoutes/supprimes souvent au milieu
tu ne fais pas d’accès par index

👉 exemple :
std::list<int> l;

l.push_back(1);

l.push_back(2);

👉 💬 à dire : 

j’utilise list quand je fais beaucoup d’insertions et suppressions


3. deque (ajout début + fin)

👉 quand tu veux ajouter au début ET à la fin

✔️ À utiliser quand :
tu ajoutes au début (push_front)
tu ajoutes à la fin (push_back)
tu veux accès rapide comme vector

👉 exemple :

std::deque<int> d;

d.push_front(1);

d.push_back(2);

👉 💬 à dire : 

j’utilise deque quand j’ai besoin d’ajouter des éléments aux deux extrémités

EX00: 

Dans cet exercice, on crée une fonction template easyfind qui permet de chercher une valeur dans un container.

Elle prend en paramètre un container d’entiers et une valeur à rechercher.

On utilise l’algorithme std::find de la STL pour faire la recherche, au lieu d’une boucle.

Si la valeur est trouvée, la fonction retourne un itérateur vers cet élément.

Si elle n’est pas trouvée, on lance une exception ou on retourne une valeur d’erreur.

On utilise des containers sequentiels pas des containers associatifs.

Un container séquentiel stocke les éléments dans l’ordre où tu les ajoutes.


Exemple avec un cas qui marche:

std::vector<int> v;  //creer un container vide

v.push_back(3);    //ajouter element par element

v.push_back(4);

v.push_back(5);

std::vector<int>::iterator it = easyfind(v, 5);

=======>

*it = 5



Exemple avec un cas qui ne marche pas:

std::vector<int> v; 

v.push_back(3); 

v.push_back(4);

v.push_back(5);

std::vector<int>::iterator it = easyfind(v, 42);

=======>

exception


push_back est une fonction membre des containers STL qui permet d’ajouter un élément à la fin du container.

exemple:

std::vector<int> v;

v.push_back(3); 
    
v.push_back(4);
    
v.push_back(5);

On peut aussi creer un tableau en memoire puis copier ses element dans un container.

exemple:

  int arr[] = {3, 4, 5};
    
  std::vector<int> v(arr, arr + 3);

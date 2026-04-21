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


  EX01 — Span

Dans cet exercice, on cree une classe Span qui permet de stocker un nombre limite d’entiers. La capacite maximale est definie au moment de la creation de l’objet, et on ne peut pas depasser cette limite.

Les valeurs sont stockees dans un std::vector, ce qui permet d’ajouter facilement des elements avec push_back et d’utiliser les algorithmes de la STL.

La fonction addNumber permet d’ajouter un element dans le container. Si la capacite maximale est atteinte, une exception est lancée. On peut aussi ajouter plusieurs elements d’un coup avec addRange, en utilisant des iterateurs.

La fonction shortestSpan calcule la plus petite difference entre deux nombres. Pour cela, on copie le vector, on le trie avec std::sort, puis on compare les elements voisins pour trouver la plus petite distance.

La fonction longestSpan calcule la plus grande difference entre deux valeurs. On utilise std::min_element et std::max_element, puis on fait simplement la difference entre le maximum et le minimum.

On gere les erreurs en lançant une exception si on essaie de calculer un span avec moins de deux elements.

Cet exercice permet de pratiquer l’utilisation des containers STL, des iterateurs et des algorithmes, tout en apprenant a gerer les exceptions et les cas limites.


EX02:

MutantStack = une stack + la possibilité de la parcourir comme un conteneur

✅ 1. Héritage de std::stack

Dans cet exercice, on cree une classe MutantStack qui:

  *hérite de std::stack
  
  *récupère toutes ses fonctions (push, pop, top, etc.) 

  template <typename T>
  
  class MutantStack : public std::stack<T>

✅ 2. std::stack est un adaptateur de conteneur

std::stack n’est pas un vrai conteneur. C’est un adaptateur de conteneur.

   *Il utilise un vrai conteneur en interne 
   
   *mais il cache son interface
   
👉 Par défaut, il utilise :

  *std::deque

Mais il peut aussi utiliser :

  *std::vector
  
  *std::list

✅ 3. Pourquoi std::stack n’a PAS d’itérateurs ?

std::stack est volontairement limitée.

Elle ne donne accès qu’à :

-push (ajouter en haut)

-pop (retirer en haut)

-top (voir le haut)

❌ interdit de :

  parcourir la pile
  
  accéder à un élément au milieu

👉 Elle cache volontairement :

les itérateurs

l’accès interne

C’est pour imposer le comportement LIFO strict (LIFO = Last In, First Out)


✅4. Le but de MutantStack

Le but de MutantStack est :

  *garder le comportement de pile
  
  *ajouter la possibilité de parcourir les éléments c a dire des itérateurs (begin, end)


Pour tester les autres conteneurs :

|                 MutantStack / stack                      | `std::list`    | `std::vector`  | `std::deque`   |
| -------------------------------------------------------- | -------------- | -------------- | -------------- |
| `push(x)`ajoute un élément à la fin (en haut de la pile) | `push_back(x)` | `push_back(x)` | `push_back(x)` |
| `pop()`enlève le dernier élément (le sommet)             | `pop_back()`   | `pop_back()`   | `pop_back()`   |
| `top()` regarde le dernier élément sans le supprimer     | `back()`       | `back()`       | `back()`       |
| `size()` donne le nombre d’éléments                      | `size()`       | `size()`       | `size()`       |
| `begin()` pointe sur le premier élément                  | `begin()`      | `begin()`      | `begin()`      |
| `end()`   pointe après le dernier (fin pour boucle)      | `end()`        | `end()`        | `end()`        |

🎤 Question 1 👉 C’est quoi un container adapter ?

Un container adapter est une structure qui utilise un conteneur interne mais expose une interface différente.


🎤 Question 2 👉 Pourquoi std::stack n’expose pas d’itérateurs ?

std::stack n’a pas d’itérateurs pour imposer un accès LIFO strict et empêcher l’accès aux éléments internes.


🎤 Question 3 👉 Explique rapidement MutantStack

MutantStack hérite de std::stack et ajoute des itérateurs pour parcourir les éléments via le conteneur interne.


🎤 Question 4 👉 À quoi sert this->c ?

this->c permet d’accéder au conteneur interne protégé (par défaut deque) de std::stack.


🎤 Question 5 👉 Pourquoi ton test avec std::list donne le même résultat ?

Parce que j’utilise push_back, pop_back et back pour reproduire le comportement LIFO.


🎤 Question 6 👉 Pourquoi std::deque est utilisé par défaut dans std::stack ?

Parce que deque est un bon compromis entre vector et list (rapide en insertion/suppression et accès).


🎤 Question 7 👉 Pourquoi std::stack cache les itérateurs mais MutantStack peut y accéder ?

std::stack cache les itérateurs pour respecter l’encapsulation et le LIFO, mais laisse l’accès au conteneur interne aux classes dérivées via protected, ce qui permet à MutantStack d’exposer les itérateurs.
























  

# constref
## Petite démo sur l'importance des références constantes
### Installation
Ce repo est un projet Netbeans déjà configuré.  On n'a qu'à le cloner et le faire construire directement
par Netbeans.
### Travail à faire
- D'abord examiner la classe maClasse, celle-ci est élémentaire et ne contient qu'un seul attribut qui
est un nombre entier
- Remarquer les deux accesseurs reqMonEntier: l'un est en mode RW, et retourne une référence à
l'attribut.  L'autre est en mode RO et retourne une référence constante.
- Analyser le programme principal.
- Exécuter le programme, et remarquer qu'avec l'accesseur RW, le programme principal réussit à
corrompre l'objet monInstance.  Ceci n'est pas normal puisque le programme principal pourrait rendre
l'objet non-valide!!!
- Regarder ce qui se passe si on essaie de changer la méthode RW pour RO dans main.  Quelle erreur
de compilation survient?
- Que se passe-t-il si on ajoute const à la déclaration de reqMonEntierRW:
```
int& maClasse::reqMonEntierRW() const
```
Le compilateur génère-t-il une erreur?  Que signifie-t-elle?
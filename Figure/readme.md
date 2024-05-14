# Bibliotéque de Géometrie
## Introduction:
      Notre but c'est de développer une bibliotéque qui contient tout les class pour les différent forme géometrique courante, afin de mieux les manipuler.

## Contenue du code source:
      - En gros on a crée sept class qui contient des attribue qui définit les caractéristique des figure, méthode mutateur accesseur pour la manipulation des attribue,et des méthode pour calculer les périmétre, les surface, et les volume. 
      -tout les code qui soit ".hpp" ou ".cpp" sont encadrer par les code suivant pour eviter l'inclusion multiple des code 
```c++
       #ifndef __NOMCLASS_HPP
       #define __NOMCLASS_HPP

       #endif
```

```c++
       #ifndef __NOMCLASS_CPP
       #define __NOMCLASS_CPP

       #endif
```

### Class Point:
      Pour faciliter la conception des class qui besoin de coordonnée fixe comme centre, on a fait appéle a cette class Point.comme la class cylindre, Sphere.

### Class Parallelepipede:
      Cette class fait appel au class rectangle comme dans le cas précedent.

## Création de Bibliotéque static
      -On compile tous les fichiers cpp et les transforme en objet ".o" 
```bash
      g++ -c Nomfichier.cpp -o Nomfichier.o
```
      -On crée en suit le fichier libgeometrie.a :
```bash
      ar -rv libgeometrie.a Cercle.o Cylindre.o Parallelepipede.o Point.o Rectangle.o Sphere.o Triangle.o

```
      -Pour compiler et tester le fonctionnement du bibliotéque static 
```bash
      g++ main.cpp -L/home/misa2026/Bureau/devoir/cpp/poo/Figure/Geometriestatic -lgeometrie -o main

```   

## Création de Bibliotéque Dinamique:
   -On compile tous les fichiers .cpp et les transforme en objet ".o" par une seul commande
```bash
      g++ -fPIC -c *.cpp 
```
      -On crée en suit le fichier libgeometrie.so :
```bash
      g++ -o libgeometrie.so -shared Cercle.o Cylindre.o Parallelepipede.o Point.o Rectangle.o Sphere.o Triangle.o

```
      -on déplace la fichier .so dans /home/misa2026/libDinamic
```bash
      mv Figure/GeometrieDynamic/libgeometrie.so /home/misa2026/libDynamic/
```
      -on crée une fichier libmit.conf dans /etc/ld.so.conf.d/ et on ajout la chemin /home/misa2026/libDinamic dans cette fichier.
      -puis on execute le commande "ldconfig" en tant que superutilisateurs

      -Pour compiler et tester le fonctionnement du bibliotéque Dynamique
```bash
     g++ main.cpp -L/home/misa2026/libDynamic/ -lgeometrie -o mainDynam

```








## = 
liste -
      -
      <soratra code et revision >
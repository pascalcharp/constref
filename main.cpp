/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on 4 octobre 2021, 11:27
 */

#include <cstdlib>
#include <iostream>
#include "maClasse.h"

using namespace std;


/*
 *
 */
int
main (int argc, char** argv)
{
  maClasse monInstance (0) ;

  cout << "Valeur de l'attribut monEntier: " << monInstance.reqMonEntierRW () << endl ;
  monInstance.reqMonEntierRW () = 4 ;
  cout << "On a modifié la valeur de maReference dans main." << endl ;
  cout << "La valeur de l'attribut monEntier: " << monInstance.reqMonEntierRW () << endl ;

  return 0;
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   maClasse.cpp
 * Author: etudiant
 *
 * Created on 4 octobre 2021, 11:28
 */

#include "maClasse.h"


maClasse::maClasse (int n) : monEntier (n) { }


int&
maClasse::reqMonEntierRW ()
{
  return monEntier ;
}


const int&
maClasse::reqMonEntierRO  () const
{
  return monEntier ;
}


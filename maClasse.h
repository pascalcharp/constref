/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   maClasse.h
 * Author: Pascal Charpentier
 *
 * Created on 4 octobre 2021, 11:28
 */

#ifndef MACLASSE_H
#define MACLASSE_H

class maClasse
{
public:
  maClasse (int = 0);

  // Remarquer la différence entre les deux accesseurs: RW retourne une référence alors que
  // RO retourne une référence constante!!!

  int& reqMonEntierRW ();
  const int& reqMonEntierRO () const;

  maClasse (const maClasse& orig) = default;
  virtual ~maClasse () = default;


private:
  int monEntier;

};

#endif /* MACLASSE_H */


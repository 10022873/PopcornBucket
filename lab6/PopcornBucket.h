/*******************************************************************************
* File: PopcornBucket.h                                                        *
* Project: CMSC202 Lab 6, Spring 2025                                          *
*******************************************************************************/

#ifndef POPCORN_BUCKET_H
#define POPCORN_BUCKET_H

#include <iostream>
#include <string>
using namespace std;

class PopcornBucket {
 public:
  PopcornBucket(); //default constructor

  PopcornBucket(string name, int type); //overloaded constructor

  // GetName() returns the name of the customer for this bucket
  string GetName();

  // GetFlavor() returns a code representing the flavor of the popcorn
  int GetFlavor();

  // SetName() sets m_name to name
  void SetName(string name);

  // SetFlavor() sets m_flavor to flavor
  void SetFlavor(int flavor);

 private:
  string m_name; // name of the customer
  int m_flavor; // flavor code of the task (e.g. buttered, caramel, cheddar)
};

#endif

/*
This file is part of Alpertron Calculators.

Copyright 2015 Dario Alejandro Alpern

Alpertron Calculators is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Alpertron Calculators is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Alpertron Calculators.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _FACTOR_H
#define _FACTOR_H
#define MAX_FACTORS 1000
#define FACTOR_ARRSIZE (2*MAX_FACTORS)
struct sFactors
{
  int *ptrFactor;
  int multiplicity;
  int upperBound;
};
extern struct sFactors stFactors[MAX_FACTORS];
extern int *factorArr[FACTOR_ARRSIZE];
void factor(int *number, int *factors, struct sFactors *pstFactors);
void FactoringSIQS(limb *pNbrToFactor, limb *pFactor);
extern int lang;
#endif
/**
  ******************************************************************************
  * @file    main.c
  * @author  Mohamed Bouchagra
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
/* Macros --------------------------------------------------------------------*/
#define Mul(a,b) a*b 
#define Max(a,b) a > b ? a : b 
//#define INTEL
#define OTHERS
#define Min(a,b) a < b ? a : b 
#define Som(a,b) a+b 

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  x,y
  * @retval None
  */
int main(void)
{
  int x = 6;
  int y = 3;
  int  mult = Mul(x,y);
  int somme = Som(x,y);
  int min   = Min(x,y);
  int max   = Max(x,y);
  while(1)
  {
  printf("La Somme de deux valeur ==: %d\n",somme);
  printf("La Multplication de deux valeur ==: %d\n",mult);
  printf("la valeur minimale est ==: %d\n",min);
  printf("la valeur maximale est ==: %d\n",max);
  }
  
}

/**************************************END OF FILE**************************************/
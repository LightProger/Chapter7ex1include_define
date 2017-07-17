#include <stdio.h>
#include <string.h>
#include "includedefine.h"

/*
 * Программа-пример No1 из главы 7 Руководства
   по С для новичков, 3-е издание Файл Chapter7ex1.h
   Если у вас есть несколько значений, которые не будут изменяться (или будут меняться редко),
   вы можете установить их с помощью директивы #DEFINE,
   что позволит изменять их по мере необходимости
   Если вы планируете использовать эти значения в нескольких программах, то вы можете
   поместить их в заголовочный файл
 */


int main ()
{
  int age;
  char childname[14] = "Тимофей";
  printf("%s имеет %d детей:\n", FAMILY, KIDS);
  age = 11;
  printf("Старший сын, %s, %d %s.\n", childname, age, YEAR);

  strcpy(childname, "Николай");
  age = 6;
  printf("Средний сын, %s, %d  %s.\n", childname, age, YEAR);
  age = 3;
  
  strcpy(childname, "Борис");
  printf("Младший сын, %s,   %d  %s.\n", childname, age, YEAR);
  return 0;
}
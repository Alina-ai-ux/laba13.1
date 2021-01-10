// Файл реалізації sum.cpp для реалізаціїї функції sum()
// sum.cpp

#include  <math.h>
#include  "var.h"
#include  "sum.h"
#include  "dod.h"

using  namespace nsVar;
using  namespace nsDod;
void nsSum::sum() {
	//void sum(){
	n = 0;
	a = 1;
	s = 0;
	do {
		n++;
		dod();
		//s=s+a;
		s = s - pow(-1, n) * a / n;
	} while (fabs(a / n) > eps);
}

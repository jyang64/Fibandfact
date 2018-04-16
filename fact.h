#ifndef _fact_h
#define _fact_h

#include "bigint/bigint.h"
//Nothing special in this function. Just a simple recursive factorial
template <class type> type factorial(type a){
	if (a <= 1){
		return 1;
	} else{
		return a*factorial(a-1);
	}
}



#endif
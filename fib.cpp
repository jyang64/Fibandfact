#include <unordered_map>
#include "bigint/bigint.h"
/*
Recursive Fibonnaci takes the argument n as the nth Fibonacci number. 
Fibonaccis are calculated recursively, and any new values are stored 
in an unordered map for faster future computation.
*/
bigint r_fib(int n, std::unordered_map<int, bigint> &memo){
	if (n <= 2){
		return 1;
	}
	if(memo.find(n) == memo.end()){
		memo.insert({n, r_fib(n-1, memo) + r_fib(n-2, memo)});	//insert the nth Fibonacci into the unordered map for faster future computation.
		return r_fib(n-1, memo) + r_fib(n-2, memo);
	} else{
		return memo[n];
	}
}

bigint fib(int n) {
	std::unordered_map<int, bigint> memo;
	return r_fib(n, memo);
}


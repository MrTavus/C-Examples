#include <iostream>
#include "HeapClass.cpp"
using namespace std;

int main (){
	int value;
	
	cin >> value;
	heapClass heap;
	
	while( value != 0){
		heap.add(value);
		cin >> value;
	}
	heap.write();
}

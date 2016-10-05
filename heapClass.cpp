#include <iostream>
#include "HeapClass.h"
using namespace std;

void heapClass::add(int storedValue){
		arrayHeap[count] = storedValue;
		count++;
		minHeap();
}

void heapClass::write(){
	for(int i=0;i<count;i++){
		cout << arrayHeap[i]<<"\n";
	}
}

void heapClass::minHeap(){
	int i = count - 1;
	int temp;
	while (i>0 && arrayHeap[i] < arrayHeap[(i-1)/2]){
		 temp = arrayHeap[i];
		 arrayHeap[i] =  arrayHeap[(i-1)/2];
		 arrayHeap[(i-1)/2] = temp;	
		 i = (i-1)/2;
	}
}

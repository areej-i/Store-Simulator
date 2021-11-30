#ifndef STORELOCATION_H
#define STORELOCATION_H

#include <iostream>
#include <string>
#include "defs.h"
#include "Location.h"
//#include <iomanip>

using namespace std;

class StoreLocation: public Location {
		
	public:
		//constructor
		StoreLocation();
		
		void setProduct(string name);
        int getFreeSpace();
        void print();

        virtual int getCapacity();
        virtual bool add(const string product, int quantity);
        virtual bool remove(int quantity);
	
	private:
		const static char code = 'A';
        const static int capacity = SLOC_CAPACITY;
        static int nextId;
	
};
#endif

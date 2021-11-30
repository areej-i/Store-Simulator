#ifndef WHLOCATION_H
#define WHLOCATION_H

#include <iostream>
#include <string>
#include "defs.h"
#include "Location.h"

class WHLocation: public Location{
    public:
		//constructor
		WHLocation();
		
        void print();

        virtual int getCapacity();
        virtual bool add(const string product, int quantity);
        virtual bool remove(int quantity);
	
	private:
		const static char code = 'B';
        const static int capacity = WHLOC_CAPACITY;
        static int nextId;

};
#endif
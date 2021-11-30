#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include "Location.h"

using namespace std;

class Location {
		
	public:
		//constructor
		Location(char character, int number);
        virtual ~Location();

		//getters
		string getId();
		string getProduct();
        int getQuantity();
		
		//other
        bool isEmpty();
        bool isAvailable();
		void print();
        
        virtual int getCapacity()=0;
        virtual bool add(const string product, int quantity)=0;
        virtual bool remove(int quantity)=0;
	
	protected:
		string id;
		string product;
        int quantity;
        static const string NONE;
	
};
#endif

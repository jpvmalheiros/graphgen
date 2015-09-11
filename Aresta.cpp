/*
 * Aresta.cpp
 *
 *  Created on: Sep 11, 2015
 *      Author: joao
 */

#include "Aresta.h"
#include <iostream>

using namespace std ;

Aresta::Aresta(int a,int b,int p) {
	if (a < b )
	{
		this->a = a;
		this->b = b;
	} else if (a>b){
		this->a = b;
		this->b = a;
	} else {
		throw exception();
	}
	this->peso = p;

}

Aresta::~Aresta() {
	// TODO Auto-generated destructor stub
}

void Aresta::imprime(){
	cout << a << " "<< b << " "<< peso << endl;
}

bool Aresta::operator<(const Aresta& rhs) {
	if (a!=rhs.a) return a<rhs.a;
	return b<rhs.b;


}

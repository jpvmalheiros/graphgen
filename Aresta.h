/*
 * Aresta.h
 *
 *  Created on: Sep 11, 2015
 *      Author: joao
 */

#ifndef ARESTA_H_
#define ARESTA_H_

class Aresta {
public:
	Aresta(int,int,int);
	virtual ~Aresta();
	void imprime();
	int a;
	int b;
	int peso;

	bool operator<(const Aresta&);


private:

};

#endif /* ARESTA_H_ */

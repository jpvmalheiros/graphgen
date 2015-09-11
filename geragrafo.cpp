//============================================================================
// Name        : geragrafo.cpp
// Author      : João Pedro Veloso Malheiros
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

#include "Aresta.h"

using namespace std;




int main() {

	int n_nos = 100000;
	int n_vertices = 200000;

	vector<Aresta> va;


	int i;


	for (i=1;i<(n_nos);i++)
		va.push_back(Aresta(i,i+1,rand()%50));

	for (;i<n_vertices;i++)
	{
		try {
		va.push_back( Aresta( (rand()%n_nos) +1,(rand()%n_nos) +1 , (rand()%50) +1 ) );
		} catch (std::exception &e) {
			// ignora.
		}
	}

	std::sort(va.begin(),va.end());



	for (i=0;i<(va.size()-1);i++)
	{
		if ((va[i].a == va[i+1].a) && (va[i].b == va[i+1].b))
		{
			va.erase(va.begin() + (i));
			i--;
		}
	}

	cout << n_nos << " " << va.size() <<endl;
	for (i=0;i<va.size();i++)
		va[i].imprime();






	return 0;
}

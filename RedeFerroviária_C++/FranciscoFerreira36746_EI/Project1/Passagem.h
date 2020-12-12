#pragma once
#include<iostream>
#include "Comboio.h"
#include "Estacao.h"
#include "Passagem.h"
#include "Colecao.h"
#include "TData.h"
#include "TDataHora.h"
#include "THora.h"

using namespace std;

class Comboio;
class Estacao;
class RF;

class Passagem
{
private:
	int id;
	int linha;
	bool comParagem;
	TDataHora datahora;

	Estacao* estacao;
	Comboio* comboio;

	Colecao <Passagem> passagens;
	Colecao<Passagem>::iterator it;

public:
	static int i;
	Passagem(int id, bool para, int lin, Estacao* e, Comboio* c);
	Passagem(bool para, int lin, Estacao* e, Comboio* c);
	Passagem(Passagem* p);
	bool operator<(const Passagem& p) const;
	bool operator==(const Passagem& p) const;
	void printComb() const;
	void printEsta() const;
	int getID();
	void setID();
	int getLinha() const;
	bool getcomParagem() const;
	string getEstacao() const;
	string getComboio() const;

	THora getHour() const;
	TData getDay()	const;

	bool addPassagem(Passagem* p);


};


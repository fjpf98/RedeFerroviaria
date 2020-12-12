#pragma once
#include<iostream>
#include"Comboio.h"
#include"RF.h"
#include"TDataHora.h"
#include"TData.h"
#include"THora.h"
#include"Colecao.h"


using namespace std;

class RF;
class Comboio;
class Passagem;

class Estacao
{
private:
	string sigla;
	string local;

	Colecao<Estacao> ligacoes;
	Colecao<Passagem> estPassagens; // comboios que passaram na esta�ao

public:

	Estacao(string sgl, string loc);
	Estacao(Estacao* e);
	bool operator<(const Estacao& e) const;
	bool guardaLigacao(Estacao* e);
	void printLigacoes();
	bool verificaLigacao(Estacao* eProxima);

	bool guardaPassagem(Passagem* p);

	string getSigla() const;
	string getLocal() const;

	void setSigla(string sgl);

	void printPassagens();



};

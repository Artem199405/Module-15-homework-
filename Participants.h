#pragma once

#include <string>
#include "Messages.h"
#include "Sha1.h"

using namespace std;

class Participants
{
private:
	

	int _size; // Максимальное количество присланных сообщений
	int _count; // Количество присланных сообщений
	string _login, _password, _name;
	uint* _password_hash;
	Messages* _messages;

public:
	//Конструктор
	Participants();

	// Деструктор
	~Participants();

	// Добавление нового сообщения
	void recordMessage(string, string);

	// Чтение присланных сообщений
	void showMessages();

	// Сеттеры
	void setLogin(string);

	void setPassword(string);

	void setName(string);

	void setPasswordHash(string);

	// Геттеры
	string getLogin();

	string getPassword();

	string getName();

	uint getPasswordHash();
};
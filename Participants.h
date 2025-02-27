#pragma once

#include <string>
#include "Messages.h"
#include "Sha1.h"

using namespace std;

class Participants
{
private:
	

	int _size; // ������������ ���������� ���������� ���������
	int _count; // ���������� ���������� ���������
	string _login, _password, _name;
	uint* _password_hash;
	Messages* _messages;

public:
	//�����������
	Participants();

	// ����������
	~Participants();

	// ���������� ������ ���������
	void recordMessage(string, string);

	// ������ ���������� ���������
	void showMessages();

	// �������
	void setLogin(string);

	void setPassword(string);

	void setName(string);

	void setPasswordHash(string);

	// �������
	string getLogin();

	string getPassword();

	string getName();

	uint getPasswordHash();
};
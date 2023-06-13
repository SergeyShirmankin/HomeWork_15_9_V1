#include <string>
#include <iomanip>
#include <iostream>
#include "sha1.h"
#include "chat.h"

int main()
{
    Chat myChat;
	char us1[] = "user1";
	char ps1[] = "qwerty12345";
	bool resultat1 = false;
	char us2[] = "user";
	char ps2[] = "qwerty12345";
	bool resultat2 = false;
	char us3[] = "use";
	char ps3[] = "qwerty12345";
	bool resultat3 = false;
	//регистрация пользователя и пароля
	myChat.reg(us1, ps1, sizeof(ps1) - 1);
	myChat.reg(us2, ps2, sizeof(ps2) - 1);
	// Аудентификация пользователя и пароля при успехе true при неудаче false 
	resultat1 = myChat.login(us1, ps1, sizeof(ps1) - 1);
	resultat2 = myChat.login(us2, ps2, sizeof(ps2) - 1);
	resultat3 = myChat.login(us3, ps3, sizeof(ps3) - 1);
	return 0;
}
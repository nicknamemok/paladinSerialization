#include<stdio.h>
#include<winsock2.h>
#include<stdint.h>

#include"./binn/binn.c"

#pragma comment(lib,"ws2_32.lib") //Winsock Library

#define SERVER "159.49.225.223"	//ip address of udp server
#define BUFLEN 512	//Max length of buffer
#define PORT 25	//The port on which to listen for incoming data

int main(void)
{
	struct sockaddr_in si_other;
	int s, slen=sizeof(si_other);
	char buf[BUFLEN];
	unsigned char buffer[32];
	char message[BUFLEN] = "lol";
	WSADATA wsa;

	printf("\nInitialising Winsock...");
	if (WSAStartup(MAKEWORD(2,2),&wsa) != 0)
	{
		printf("Failed. Error Code : %d",WSAGetLastError());
		exit(EXIT_FAILURE);
	}
	printf("Initialised.\n");
	
	if ( (s=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == SOCKET_ERROR)
	{
		printf("socket() failed with error code : %d" , WSAGetLastError());
		exit(EXIT_FAILURE);
	}
	
	memset((char *) &si_other, 0, sizeof(si_other));
	si_other.sin_family = AF_INET;
	si_other.sin_port = htons(PORT);
	si_other.sin_addr.S_un.S_addr = inet_addr(SERVER);

	while(1)
	{
		
		sendto(s, message, strlen(message) , 0 , (struct sockaddr *) &si_other, slen);
		memset(buf,'\0', BUFLEN);
		recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *) &si_other, &slen);
		
	}

	closesocket(s);
	WSACleanup();

	return 0;
}
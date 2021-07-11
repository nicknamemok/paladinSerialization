#include<stdio.h>
#include<winsock2.h>
#include<stdint.h>

#include"./binn/binn.c"
#include"./binnStructures/autopilot.c"
#include"./binnStructures/brakes.c"
#include"./binnStructures/dynamics.c"
#include"./binnStructures/electrics.c"

#pragma comment(lib,"ws2_32.lib") //Winsock Library

#define BUFLEN 512	//Max length of buffer
#define PORT 25	//The port on which to listen for incoming data
#define SERVER "159.49.225.223"

void main()
{

	SOCKET s;
	struct sockaddr_in server, si_other;
	int slen , recv_len;
	char buf[BUFLEN];
	unsigned char buffer[32], *ptr;
	WSADATA wsa;

	slen = sizeof(si_other) ;
	
	//Initialise winsock
	if (WSAStartup(MAKEWORD(2,2),&wsa) != 0)
	{
		printf("Failed. Error Code : %d",WSAGetLastError());
		exit(EXIT_FAILURE);
	}
	
	if((s = socket(AF_INET , SOCK_DGRAM , 0 )) == INVALID_SOCKET)
	{
		printf("Could not create socket : %d" , WSAGetLastError());
	}
	
	server.sin_family = AF_INET;
	server.sin_addr.s_addr = inet_addr(SERVER);
	server.sin_port = htons( PORT );
	
	//Bind
	if( bind(s ,(struct sockaddr *)&server , sizeof(server)) == SOCKET_ERROR)
	{
		printf("Bind failed with error code : %d" , WSAGetLastError());
		exit(EXIT_FAILURE);
	}
	printf("Server ready. Awaiting data packets.\n");

	while(1)
	{

		recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *) &si_other, &slen);
		memset(buf,'\0', BUFLEN);
		sendto(s, "Hi", 2*sizeof(char), 0, (struct sockaddr*) &si_other, slen);
    
	}

	closesocket(s);
	WSACleanup();
	
}
#include<stdio.h>
#include<winsock2.h>
#include<stdint.h>
#include"binn.c"
#include"serialize.c"
#include"structures.c"


#pragma comment(lib,"ws2_32.lib") //Winsock Library

#define BUFLEN 512	//Max length of buffer
#define PORT 25	//The port on which to listen for incoming data
#define SERVER "159.49.225.223"

void main()
{

	binn *obj;
	obj = binn_object();
	obj = createStudentBinn(obj,12,"Nicholas",27);
	
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
		
		//try to receive some data, this is a blocking call
		if ((recv_len = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *) &si_other, &slen)) == SOCKET_ERROR)
		{
			printf("recvfrom() failed with error code : %d" , WSAGetLastError());
			exit(EXIT_FAILURE);
		}

		// clear buffer line
		memset(buf,'\0', BUFLEN);
		
		//print details of the client/peer and the data received
		printf("Received packet from %s:%d\n", inet_ntoa(si_other.sin_addr), ntohs(si_other.sin_port));

		// Send binn object serialized
		if (sendto(s, binn_ptr(obj), binn_size(obj), 0, (struct sockaddr*) &si_other, slen) == SOCKET_ERROR)
			{
				printf("sendto() failed with error code : %d" , WSAGetLastError());
				exit(EXIT_FAILURE);
			}
        

	}

	closesocket(s);
	WSACleanup();
	
}
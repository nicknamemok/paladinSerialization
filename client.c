#include<stdio.h>
#include<winsock2.h>
#include<stdint.h>
#include"binn.c"
#include"structures.h"
#include"deserialize.c"

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

	//Initialise winsock
	printf("\nInitialising Winsock...");
	if (WSAStartup(MAKEWORD(2,2),&wsa) != 0)
	{
		printf("Failed. Error Code : %d",WSAGetLastError());
		exit(EXIT_FAILURE);
	}
	printf("Initialised.\n");
	
	//create socket
	if ( (s=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == SOCKET_ERROR)
	{
		printf("socket() failed with error code : %d" , WSAGetLastError());
		exit(EXIT_FAILURE);
	}
	
	//setup address structure
	memset((char *) &si_other, 0, sizeof(si_other));
	si_other.sin_family = AF_INET;
	si_other.sin_port = htons(PORT);
	si_other.sin_addr.S_un.S_addr = inet_addr(SERVER);

	//start communication
	while(1)
	{
		// printf("What request type?\n");
		// gets(message);
		
		// //send request type
		// if (sendto(s, message, strlen(message) , 0 , (struct sockaddr *) &si_other, slen) == SOCKET_ERROR)
		// {
		// 	printf("sendto() failed with error code : %d" , WSAGetLastError());
		// 	exit(EXIT_FAILURE);
		// }
		
		// receive serialized buffer
		sendto(s, message, strlen(message) , 0 , (struct sockaddr *) &si_other, slen);
		memset(buf,'\0', BUFLEN);
		int recvV;
		recvV = recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *) &si_other, &slen);
		// if (recvfrom(s, buf, sizeof(buf), 0, (struct sockaddr *) &si_other, &slen) != SOCKET_ERROR)

		printf("%s",buf);

		// {
			// printf("Received packaged.");
			// printf("recvfrom() failed with error code : %d" , WSAGetLastError());
			// exit(EXIT_FAILURE);
		// }

		// if(strcmp(message,"student") == 0){
		// 	struct student *s;
		// 	deserializeStudent(buf, s);
		// 	printf("%d\n",s->id);
		// }
		

	}

	closesocket(s);
	WSACleanup();

	return 0;
}
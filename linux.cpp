// // Server side C/C++ program to demonstrate Socket programming 
// #include <unistd.h> 
// #include <stdio.h> 
// #include <sys/socket.h> 
// #include <stdlib.h> 
// #include <netinet/in.h> 
// #include <string.h> 
// #define PORT 8080 
// int main(int argc, char const *argv[]) 
// { 
//     int server_fd, new_socket, valread; 
//     struct sockaddr_in address; 
//     int opt = 1; 
//     int addrlen = sizeof(address); 
//     char buffer[1024] = {0}; 
//     char *hello = "Hello from server"; 
       
//     // Creating socket file descriptor 
//     if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) 
//     { 
//         perror("socket failed"); 
//         exit(EXIT_FAILURE); 
//     } 
       
//     // Forcefully attaching socket to the port 8080 
//     if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, 
//                                                   &opt, sizeof(opt))) 
//     { 
//         perror("setsockopt"); 
//         exit(EXIT_FAILURE); 
//     } 
//     address.sin_family = AF_INET; 
//     address.sin_addr.s_addr = INADDR_ANY; 
//     address.sin_port = htons( PORT ); 
       
//     // Forcefully attaching socket to the port 8080 
//     if (bind(server_fd, (struct sockaddr *)&address,  
//                                  sizeof(address))<0) 
//     { 
//         perror("bind failed"); 
//         exit(EXIT_FAILURE); 
//     } 
//     if (listen(server_fd, 3) < 0) 
//     { 
//         perror("listen"); 
//         exit(EXIT_FAILURE); 
//     } 
//     if ((new_socket = accept(server_fd, (struct sockaddr *)&address,  
//                        (socklen_t*)&addrlen))<0) 
//     { 
//         perror("accept"); 
//         exit(EXIT_FAILURE); 
//     } 
//     valread = read( new_socket , buffer, 1024); 
//     printf("%s\n",buffer ); 
//     send(new_socket , hello , strlen(hello) , 0 ); 
//     printf("Hello message sent\n"); 
//     return 0; 
// } 


// // C program to display hostname 
// // and IP address 
// #include <stdio.h> 
// #include <stdlib.h> 
// #include <unistd.h> 
// #include <errno.h> 
// #include <netdb.h> 
// #include <sys/types.h> 
// #include <sys/socket.h> 
// #include <netinet/in.h> 
// #include <arpa/inet.h> 
  
// // Returns hostname for the local computer 
// void checkHostName(int hostname) 
// { 
//     if (hostname == -1) 
//     { 
//         perror("gethostname"); 
//         exit(1); 
//     } 
// } 
  
// // Returns host information corresponding to host name 
// void checkHostEntry(struct hostent * hostentry) 
// { 
//     if (hostentry == NULL) 
//     { 
//         perror("gethostbyname"); 
//         exit(1); 
//     } 
// } 
  
// // Converts space-delimited IPv4 addresses 
// // to dotted-decimal format 
// void checkIPbuffer(char *IPbuffer) 
// { 
//     if (NULL == IPbuffer) 
//     { 
//         perror("inet_ntoa"); 
//         exit(1); 
//     } 
// } 
  
// // Driver code 
// int main() 
// { 
//     char hostbuffer[256]; 
//     char *IPbuffer; 
//     struct hostent *host_entry; 
//     int hostname; 
  
//     // To retrieve hostname 
//     hostname = gethostname(hostbuffer, sizeof(hostbuffer)); 
//     checkHostName(hostname); 
  
//     // To retrieve host information 
//     host_entry = gethostbyname(hostbuffer); 
//     checkHostEntry(host_entry); 
  
//     // To convert an Internet network 
//     // address into ASCII string 
//     IPbuffer = inet_ntoa(*((struct in_addr*) 
//                            host_entry->h_addr_list[0])); 
  
//     printf("Hostname: %s\n", hostbuffer); 
//     printf("Host IP: %s", IPbuffer); 
  
//     return 0; 
// }
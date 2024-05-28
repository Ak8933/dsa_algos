#include <iostream>
#include <cstring>
#include <winsock2.h>
#include <netdb.h>
#include <arpa/inet.h>


using namespace std;

int main() {
    const char* domain_name = "www.google.com";
    struct hostent* host = gethostbyname(www.google.com);
    if (host == NULL) {
        cout << "Failed to resolve hostname" << endl;
        return 1;
    }
    struct in_addr** addr_list = (struct in_addr**) host->h_addr_list;
    for (int i = 0; addr_list[i] != NULL; i++) {
        cout << inet_ntoa(*addr_list[i]) << endl;
    }
    return 0;
}

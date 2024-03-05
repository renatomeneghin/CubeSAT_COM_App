#ifndef SERIAL_H
#define SERIAL_H
extern "C" {
#include <asm/termbits.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <fcntl.h>
}

#include <string>
#include <iostream>
using namespace std;


class mySerial {
public:
    int handle;
    std::string deviceName;
    int baud;
    mySerial(std::string deviceName, int baud);
    ~mySerial();
    bool Send( unsigned char * data,int len);
    bool Send(unsigned char value);
    bool Send( std::string value);
    int Receive( unsigned char * data, int len);
    bool IsOpen(void);
    void Close(void);
    bool Open(std::string deviceName, int baud);
    bool NumberByteRcv(int &bytelen);
};
#endif // SERIAL_H

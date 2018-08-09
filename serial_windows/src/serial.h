#pragma once

#include <windows.h>
#include <TCHAR.H> 
#include <iostream>
using namespace std;

class CSerial
{
public:
	CSerial(void);
	~CSerial(void);

	//�򿪴���
	BOOL OpenSerialPort(TCHAR* port,UINT baud_rate,BYTE date_bits,BYTE stop_bit,BYTE parity=NOPARITY);
	
	//��������
	BOOL SendData(const char* data,int len);
public:
	HANDLE m_hComm;
};
#pragma once

#include <mysql.h>


class CCustomMysql
{
	MYSQL m_mysql;

public:
	CCustomMysql(void);
	~CCustomMysql(void);

	bool InitMYSQL();

	//���ӵ���������
	bool ConnecttoMysqlServer( char* serverIP,int port,char * username,char * password,char* databasename );

};

#pragma once

#include <mysql.h>


class CCustomMysql
{
	MYSQL m_mysql;

public:
	CCustomMysql(void);
	~CCustomMysql(void);

	bool InitMYSQL();

	//连接到服务器；
	bool ConnecttoMysqlServer( char* serverIP,int port,char * username,char * password,char* databasename );

};

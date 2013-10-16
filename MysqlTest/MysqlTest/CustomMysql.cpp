#include "StdAfx.h"
#include "CustomMysql.h"


#pragma comment(lib,"libmysql.lib")

CCustomMysql::CCustomMysql(void)
{
	//memset(m_mysql,0,sizeof(MYSQL));
}


CCustomMysql::~CCustomMysql(void)
{
}

bool CCustomMysql::InitMYSQL()
{
	 MYSQL * ms =  (MYSQL *)mysql_init(&m_mysql);
	return ms !=NULL;
}

bool CCustomMysql::ConnecttoMysqlServer( char* serverIP,int port,char * username,char * password,char* databasename )
{
	MYSQL * sql = mysql_real_connect(&m_mysql, serverIP, username, password, databasename, port, 0, 0);
	return sql !=NULL;
}

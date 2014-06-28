#pragma once

#include <mysql.h>
#include <string>

using namespace std;
using std::string;



class CCustomMysql
{
private:
	MYSQL m_mysql;
    string m_dbname;
	string m_serverip;
	string m_username;
	string m_password;
	

public:
	CCustomMysql(void);
	~CCustomMysql(void);

	bool InitMYSQL();

	//连接到服务器；
	bool ConnecttoMysqlServer( char* serverIP,int port,char * username,char * password,char* databasename );

};

/*

#ifndef GLOBAL_H
#define GLOBAL_H

#include <string>

using std::string;

struct Data_Param    //数据库操作参数
{
    string db_name;    //数据库名
    string tab_name;    //表名
    string col_name;    //列名
    string select_exp;    //选择表达式
    string where_def;    //选择限定条件
    string insert_val;    //插入值
    string set_exp;    //更新数据库内容的表达式
};

struct Database_Param    //数据库参数
{
    string host;    //主机名
    string user;    //用户名
    string password;    //密码
    string db;    //数据库名
    unsigned int port;    //端口，一般为0
    const char* unix_socket;    //套接字，一般为NULL
    unsigned int client_flag;    //一般为0
    Database_Param(string host, string user, string password, string db, unsigned int port, const char* unix_socket, unsigned int client_flag)
    {
        this->host = host;
        this->user = user;
        this->password = password;
        this->db = db;
        this->port = port;
        this->unix_socket = unix_socket;
        this->client_flag = client_flag;
    }
};

#endif

*/

#ifndef GLOBAL_H
#define GLOBAL_H

#include <string>

using std::string;

struct Data_Param    //���ݿ��������
{
    string db_name;    //���ݿ���
    string tab_name;    //����
    string col_name;    //����
    string select_exp;    //ѡ����ʽ
    string where_def;    //ѡ���޶�����
    string insert_val;    //����ֵ
    string set_exp;    //�������ݿ����ݵı��ʽ
};

struct Database_Param    //���ݿ����
{
    string host;    //������
    string user;    //�û���
    string password;    //����
    string db;    //���ݿ���
    unsigned int port;    //�˿ڣ�һ��Ϊ0
    const char* unix_socket;    //�׽��֣�һ��ΪNULL
    unsigned int client_flag;    //һ��Ϊ0
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
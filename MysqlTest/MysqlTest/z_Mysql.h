
/*This is a C++ incapsulation of the mysql C API
*In order to use this:
*                    1.set the project include directory includes the include directory under mysql directory
*                    2.set the project library directory includes the lib/opt directory under mysql directory
*                    3.set the addtional dependency of the linker of the project 'libmysql.lib'
*After all of the above work, you can simply add this CMysql class in your project,and can conviently use it
*If you find any bugs, please connect me : gswzsh@126.com, thank you
*/


#ifndef CMYSQL_H
#define CMYCQL_H

#include <winsock.h>
#include <mysql.h>
#include "z_mysqlglobal.h"
#include <sstream>


class CMysql
{
public:
    string GetState();    //������״̬
    string GetServerInfo();    //��������Ϣ
    int GetProtocolInfo();    //Э����Ϣ
    string GetHostInfo();    //������Ϣ
    string GetClientInfo();    //�ͻ�����Ϣ
    string GetFieldName(int FieldNum);
    bool IsEnd();    //�Ƿ����
    void SeekData(int offset);    //����ָ������
    unsigned int GetFieldNum();        //�õ��ֶ���
    bool ConnectDB(Database_Param* p);    //�������ݿ�
    MYSQL_ROW GetRecord();    //�õ������һ����¼��
    my_ulonglong GetRowNum();    //�õ���¼��
    bool SelectDB(Data_Param* para);    //ѡ�����ݿ�
    bool UpdateRecord(Data_Param* para);    //���¼�¼
    bool SelectRecord(Data_Param* para);    //ѡ���¼r
    bool InsertRecord(Data_Param* para);    //�����¼
    bool DelRecord(Data_Param* para);        //ɾ����¼
    bool SelectAll(Data_Param* para);        //ѡ�����м�¼
    string OutErrors();        //���������Ϣ
    bool MysqlEx(MYSQL* mysql, string str); 
    CMysql();
    virtual ~CMysql();
private:
    bool FindSave(string str);    //���Ҳ���������
private:
    MYSQL mysql;    //���ݿ����Ӿ��
    MYSQL_FIELD* field;    //�ֶ���Ϣ���ṹ�壩
public:
    MYSQL_RES* query;    //�����
    MYSQL_ROW row;    //��¼��
};

#endif
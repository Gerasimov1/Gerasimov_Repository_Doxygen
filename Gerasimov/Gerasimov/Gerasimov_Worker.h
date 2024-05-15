#pragma once
/**
	@file		Gerasimov_Worker.h
	@brief		������������ ���� ������ �������
	@copyright	����
	@author		��������� �.�.
	@date		15-05-2024
	@version	1.0.0
\par ���������� ������:
	@ref Gerasimov_Worker
\par �������� �����:
	@ref Gerasimov_Worker
*/

/// ����� �������� ���������
/**�������� ������ ���������� � ������ ������ � ���� 
*/
class Gerasimov_Worker
{
protected:
	char* _fio;			///< ��� ���������
	char* _dol;			///< ���������
	int _year;			///<��� ����������� �� ������
	int _salary;		///<��������
public:
	///����������� �� ���������
	/**������� ��������� ��� ������������� �����
	*/
	Gerasimov_Worker(void);
	///����������� � ����������� ����� ������
	/**������� ��������� � �������������� ��� ����
	\param fio ��� ������������ ���������
	\param dol ��������� ���������
	\param year ��� ����������� �� ������
	\param salary ��������
	*/
	Gerasimov_Worker(char * fio, char * dol, int year, int salary);
	///���������� ����������� �������
	~Gerasimov_Worker(void);
	///��������� ������ ���������� 
	/**��������� ���� ���������� � ��������� ��� � �������� ������ ���
	\return ������ � ������� � ���������
	*/
	char* Fio_Age(char * _fio, int _year);
	///��������� ������ ���������� 
	/**���������� �������� ���������� � ��������
	\return ������ � ������� � ���������
	*/
	char* Fio_Sal(char * _fio, int _salary);
	///��������� ������ ���������� 
	/**��������� ��������� ����������
	\return ������ � ������� � ���������
	*/
	char* Fio_dol(char * _fio, char * _dol);
};


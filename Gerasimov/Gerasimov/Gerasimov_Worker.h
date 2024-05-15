#pragma once
/**
	@file		Gerasimov_Worker.h
	@brief		Заголовочный файл класса Рабочий
	@copyright	ВоГУ
	@author		Герасимов Д.Ю.
	@date		15-05-2024
	@version	1.0.0
\par Использует классы:
	@ref Gerasimov_Worker
\par Содержит класс:
	@ref Gerasimov_Worker
*/

/// Класс описания работника
/**Содержит данные работников и методы работы с ними 
*/
class Gerasimov_Worker
{
protected:
	char* _fio;			///< ФИО работника
	char* _dol;			///< Должность
	int _year;			///<Год поступления на работу
	int _salary;		///<Зарплата
public:
	///Конструктор по умолчанию
	/**Создает работника без инициализации полей
	*/
	Gerasimov_Worker(void);
	///Конструктор с заполнением полей класса
	/**Создает работника и инициализирует его поля
	\param fio ФИО создаваемого работника
	\param dol Должность работника
	\param year Год поступления на работу
	\param salary Зарплата
	*/
	Gerasimov_Worker(char * fio, char * dol, int year, int salary);
	///Деструктор освобождает ресурсы
	~Gerasimov_Worker(void);
	///Возращает список работников 
	/**Вычисляет стаж работников и сравнвает его с заданным числом лет
	\return строку с данными о работнике
	*/
	char* Fio_Age(char * _fio, int _year);
	///Возращает список работников 
	/**Сравнивает зарплату работников с заданной
	\return строку с данными о работнике
	*/
	char* Fio_Sal(char * _fio, int _salary);
	///Возращает список работников 
	/**Проверяет должность работников
	\return строку с данными о работнике
	*/
	char* Fio_dol(char * _fio, char * _dol);
};


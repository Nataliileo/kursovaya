//������ ����� ��������
#pragma once
#include <string>
#define crstr const std::string&

class Animal{
protected:
	std::string type;//������
	std::string color;//�����
	std::string name;//������
	std::string sex;//���
	std::string date_of_birth;//���� ��������
	std::string owner_name;//��� ���������
	std::string home_name;//������������ ���������
	std::string character;//��������
	double size; //������
	bool file_read(std::string file_name);//������ �� �����
	void file_write(std::string file_name);//������ � ����
public:
	Animal(crstr type = "", crstr color = "", crstr name = "", crstr sex = "",
			crstr date_of_birth = "", crstr owner_name = "",
			crstr home_name = "", crstr character = "", double size = 0.0);
	void ConsoleWrite();//������ � �������
	void ConsoleRead();//������ �� �������
	virtual ~Animal();
};
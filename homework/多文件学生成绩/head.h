#pragma once
struct student
{
	int ID;//ѧ��
	char classname[20];//�༶
	char name[20];
	int score[3];
	float avescore;
};
void store(student stu[]);
void ave(student stu[]);
int search(student stu[]);



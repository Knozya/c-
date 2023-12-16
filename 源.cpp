#include <iostream>
#include <cstring>
using namespace std;
//运用结构体 保存学生数据并方便接下来的操作 
//创建结构体 
struct student {
	int id;
	char a[20];
	int math;
	int english;
	int c;
};
int main()
{
	int n, m = 5, i, j, k = -32768, l = 32767;
	//给运行代码的人提示 
	cout << "欢迎使用皖江工学院成绩管理系统" << endl;
	cout << "1.输入学生信息" << endl;
	cout << "2.显示学生信息" << endl;
	cout << "3.显示一门课的最高分" << endl;
	cout << "4.显示一门课的最低分" << endl;
	cout << "5.显示一门课的平均分" << endl;
	cout << "6.从高到低显示C语言的成绩" << endl;
	cout << "7.按学号查找C语言成绩" << endl;
	cout << "8.按姓名查找C语言成绩" << endl;
	cout << "9.退出" << endl;
	cout << "请输入你的选择(1~9):";
	//运用结构体数组录入基本学生信息 
	student a[50] = { {190350101,"陈明玉",69,72,78},
				   {190350102,"陈辰臣",100,96,90},
				   {190350103,"赵昭朝",89,90,79},
				   {190350104,"钱千乾",86,85,80},
				   {190350105,"孙荪隼",79,69,100} };
	//创建结构体s，方便下面进行排序 
	student s;
	//运用goto语句，在主函数中实现递归思想 
Loop:
	cin >> n;
	if (n == 1)
	{
		cout << "请输入学生信息" << endl;
		cin >> a[m].id >> a[m].a >> a[m].math >> a[m].english >> a[m].c;
		//通过一个m++保证代码在运行时输入新的学生数据后可以对新的学生数据进行各项操作 
		m++;
		cout << "继续输入你的选择:";
		//给goto语句一个触发规则 
		if (n != 9)
			goto Loop;
	}
	if (n == 2)
	{
		//运用循环输出所有学生数据，代码中所有的循环都与m有关，增加了代码的实用性 
		for (i = 0; i < m; i++)
			cout << a[i].id << " " << a[i].a << " " << a[i].math << " " << a[i].english << " " << a[i].c << endl;
		cout << "继续输入你的选择:";
		if (n != 9)
			goto Loop;
	}
	if (n == 3)
	{
		int z;
		cout << "1.显示数学成绩最高分" << endl;
		cout << "2.显示英语成绩最高分" << endl;
		cout << "3.显示c语言成绩最高分" << endl;
		cout << "请输入要查询的学科:";
		cin >> z;
		if (z == 1)
		{
			//基本的循环求最大值 
			for (i = 0; i < m; i++)
			{
				if (a[i].math >= k)
					k = a[i].math;
			}
			cout << "数学成绩最高分为:" << k << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
		if (z == 2)
		{
			for (i = 0; i < m; i++)
			{
				if (a[i].english >= k)
					k = a[i].english;
			}
			cout << "英语成绩最高分为:" << k << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
		if (z == 3)
		{
			for (i = 0; i < m; i++)
			{
				if (a[i].c >= k)
					k = a[i].c;
			}
			cout << "c语言成绩最高分为:" << k << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
	}
	if (n == 4)
	{
		int w;
		cout << "1.显示数学成绩最低分" << endl;
		cout << "2.显示英语成绩最低分" << endl;
		cout << "3.显示c语言成绩最低分" << endl;
		cout << "请输入要查询的学科:";
		cin >> w;
		//同上 
		if (w == 1)
		{
			for (i = 0; i < m; i++)
			{
				if (a[i].math <= l)
					l = a[i].math;
			}
			cout << "数学成绩最低分为:" << l << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
		if (w == 2)
		{
			for (i = 0; i < m; i++)
			{
				if (a[i].english <= l)
					l = a[i].english;
			}
			cout << "英语成绩最低分为:" << l << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
		if (w == 3)
		{
			for (i = 0; i < m; i++)
			{
				if (a[i].c <= l)
					l = a[i].c;
			}
			cout << "c语言成绩最低分为:" << l << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
	}
	if (n == 5)
	{
		int y;
		cout << "1.显示数学成绩平均分" << endl;
		cout << "2.显示英语成绩平均分" << endl;
		cout << "3.显示c语言成绩平均分" << endl;
		cout << "请输入要查询的学科:";
		//初始化j 
		j = 0;
		cin >> y;
		if (y == 1)
		{
			for (i = 0; i < m; i++)
				//将所有的成绩相加
				j = j + a[i].math;
			//将成绩转换为double类型 
			cout << "数学成绩平均分为:" << (double)j / m << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
		if (y == 2)
		{
			//同上 
			for (i = 0; i < m; i++)
				j = j + a[i].english;
			cout << "英语成绩平均分为:" << (double)j / m << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
		if (y == 3)
		{
			//同上 
			for (i = 0; i < m; i++)
				j = j + a[i].c;
			cout << "c语言成绩平均分为:" << (double)j / m << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
	}
	if (n == 6)
	{
		cout << "c语言成绩降序排列为:" << endl;
		//运用冒泡排序法进行排序 
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (a[j].c < a[i].c)
				{
					//数据的交换 
					s = a[j];
					a[j] = a[i];
					a[i] = s;
				}
			}
		}
		for (i = 0; i < m; i++)
			cout << a[i].c << endl;
		cout << "继续输入你的选择:";
		if (n != 9)
			goto Loop;
	}
	if (n == 7)
	{
		int ID;
		cout << "请输入你要查找的学号:";
		cin >> ID;
		//用循环查找 
		for (i = 0; i < m; i++)
		{
			if (a[i].id == ID)
				//找到该学生后跳出循环 
				break;
		}
		if (i == m)
		{
			cout << "没有这个学生" << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
		else
		{
			cout << "该学生c语言成绩为:" << a[i].c << endl;
			cout << "继续输入你的选择:";
			if (n != 9)
				goto Loop;
		}
	}
	if (n == 8)
	{
		char name[20];
		cout << "请输入你要查找的姓名:";
		cin >> name;
		for (i = 0; i < m; i++)
		{
			//运用strcmp函数进行对比查找，其保存在cstring头文件里 
			if (strcmp(name, a[i].a) == 0)
				break;
		}
		if (i == m)
			cout << "没有这个学生" << endl;
		else
			cout << "该学生c语言成绩为:" << a[i].c << endl;
		cout << "继续输入你的选择:";
		if (n != 9)
			goto Loop;
	}
	if (n == 9)
		//如果输入9则不进行goto语句循环 
		cout << "已退出";
}

#include <iostream>
#include <cstring>
using namespace std;
//���ýṹ�� ����ѧ�����ݲ�����������Ĳ��� 
//�����ṹ�� 
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
	//�����д��������ʾ 
	cout << "��ӭʹ�����ѧԺ�ɼ�����ϵͳ" << endl;
	cout << "1.����ѧ����Ϣ" << endl;
	cout << "2.��ʾѧ����Ϣ" << endl;
	cout << "3.��ʾһ�ſε���߷�" << endl;
	cout << "4.��ʾһ�ſε���ͷ�" << endl;
	cout << "5.��ʾһ�ſε�ƽ����" << endl;
	cout << "6.�Ӹߵ�����ʾC���Եĳɼ�" << endl;
	cout << "7.��ѧ�Ų���C���Գɼ�" << endl;
	cout << "8.����������C���Գɼ�" << endl;
	cout << "9.�˳�" << endl;
	cout << "���������ѡ��(1~9):";
	//���ýṹ������¼�����ѧ����Ϣ 
	student a[50] = { {190350101,"������",69,72,78},
				   {190350102,"�³���",100,96,90},
				   {190350103,"���ѳ�",89,90,79},
				   {190350104,"ǮǧǬ",86,85,80},
				   {190350105,"��ݥ��",79,69,100} };
	//�����ṹ��s����������������� 
	student s;
	//����goto��䣬����������ʵ�ֵݹ�˼�� 
Loop:
	cin >> n;
	if (n == 1)
	{
		cout << "������ѧ����Ϣ" << endl;
		cin >> a[m].id >> a[m].a >> a[m].math >> a[m].english >> a[m].c;
		//ͨ��һ��m++��֤����������ʱ�����µ�ѧ�����ݺ���Զ��µ�ѧ�����ݽ��и������ 
		m++;
		cout << "�����������ѡ��:";
		//��goto���һ���������� 
		if (n != 9)
			goto Loop;
	}
	if (n == 2)
	{
		//����ѭ���������ѧ�����ݣ����������е�ѭ������m�йأ������˴����ʵ���� 
		for (i = 0; i < m; i++)
			cout << a[i].id << " " << a[i].a << " " << a[i].math << " " << a[i].english << " " << a[i].c << endl;
		cout << "�����������ѡ��:";
		if (n != 9)
			goto Loop;
	}
	if (n == 3)
	{
		int z;
		cout << "1.��ʾ��ѧ�ɼ���߷�" << endl;
		cout << "2.��ʾӢ��ɼ���߷�" << endl;
		cout << "3.��ʾc���Գɼ���߷�" << endl;
		cout << "������Ҫ��ѯ��ѧ��:";
		cin >> z;
		if (z == 1)
		{
			//������ѭ�������ֵ 
			for (i = 0; i < m; i++)
			{
				if (a[i].math >= k)
					k = a[i].math;
			}
			cout << "��ѧ�ɼ���߷�Ϊ:" << k << endl;
			cout << "�����������ѡ��:";
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
			cout << "Ӣ��ɼ���߷�Ϊ:" << k << endl;
			cout << "�����������ѡ��:";
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
			cout << "c���Գɼ���߷�Ϊ:" << k << endl;
			cout << "�����������ѡ��:";
			if (n != 9)
				goto Loop;
		}
	}
	if (n == 4)
	{
		int w;
		cout << "1.��ʾ��ѧ�ɼ���ͷ�" << endl;
		cout << "2.��ʾӢ��ɼ���ͷ�" << endl;
		cout << "3.��ʾc���Գɼ���ͷ�" << endl;
		cout << "������Ҫ��ѯ��ѧ��:";
		cin >> w;
		//ͬ�� 
		if (w == 1)
		{
			for (i = 0; i < m; i++)
			{
				if (a[i].math <= l)
					l = a[i].math;
			}
			cout << "��ѧ�ɼ���ͷ�Ϊ:" << l << endl;
			cout << "�����������ѡ��:";
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
			cout << "Ӣ��ɼ���ͷ�Ϊ:" << l << endl;
			cout << "�����������ѡ��:";
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
			cout << "c���Գɼ���ͷ�Ϊ:" << l << endl;
			cout << "�����������ѡ��:";
			if (n != 9)
				goto Loop;
		}
	}
	if (n == 5)
	{
		int y;
		cout << "1.��ʾ��ѧ�ɼ�ƽ����" << endl;
		cout << "2.��ʾӢ��ɼ�ƽ����" << endl;
		cout << "3.��ʾc���Գɼ�ƽ����" << endl;
		cout << "������Ҫ��ѯ��ѧ��:";
		//��ʼ��j 
		j = 0;
		cin >> y;
		if (y == 1)
		{
			for (i = 0; i < m; i++)
				//�����еĳɼ����
				j = j + a[i].math;
			//���ɼ�ת��Ϊdouble���� 
			cout << "��ѧ�ɼ�ƽ����Ϊ:" << (double)j / m << endl;
			cout << "�����������ѡ��:";
			if (n != 9)
				goto Loop;
		}
		if (y == 2)
		{
			//ͬ�� 
			for (i = 0; i < m; i++)
				j = j + a[i].english;
			cout << "Ӣ��ɼ�ƽ����Ϊ:" << (double)j / m << endl;
			cout << "�����������ѡ��:";
			if (n != 9)
				goto Loop;
		}
		if (y == 3)
		{
			//ͬ�� 
			for (i = 0; i < m; i++)
				j = j + a[i].c;
			cout << "c���Գɼ�ƽ����Ϊ:" << (double)j / m << endl;
			cout << "�����������ѡ��:";
			if (n != 9)
				goto Loop;
		}
	}
	if (n == 6)
	{
		cout << "c���Գɼ���������Ϊ:" << endl;
		//����ð�����򷨽������� 
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (a[j].c < a[i].c)
				{
					//���ݵĽ��� 
					s = a[j];
					a[j] = a[i];
					a[i] = s;
				}
			}
		}
		for (i = 0; i < m; i++)
			cout << a[i].c << endl;
		cout << "�����������ѡ��:";
		if (n != 9)
			goto Loop;
	}
	if (n == 7)
	{
		int ID;
		cout << "��������Ҫ���ҵ�ѧ��:";
		cin >> ID;
		//��ѭ������ 
		for (i = 0; i < m; i++)
		{
			if (a[i].id == ID)
				//�ҵ���ѧ��������ѭ�� 
				break;
		}
		if (i == m)
		{
			cout << "û�����ѧ��" << endl;
			cout << "�����������ѡ��:";
			if (n != 9)
				goto Loop;
		}
		else
		{
			cout << "��ѧ��c���Գɼ�Ϊ:" << a[i].c << endl;
			cout << "�����������ѡ��:";
			if (n != 9)
				goto Loop;
		}
	}
	if (n == 8)
	{
		char name[20];
		cout << "��������Ҫ���ҵ�����:";
		cin >> name;
		for (i = 0; i < m; i++)
		{
			//����strcmp�������жԱȲ��ң��䱣����cstringͷ�ļ��� 
			if (strcmp(name, a[i].a) == 0)
				break;
		}
		if (i == m)
			cout << "û�����ѧ��" << endl;
		else
			cout << "��ѧ��c���Գɼ�Ϊ:" << a[i].c << endl;
		cout << "�����������ѡ��:";
		if (n != 9)
			goto Loop;
	}
	if (n == 9)
		//�������9�򲻽���goto���ѭ�� 
		cout << "���˳�";
}

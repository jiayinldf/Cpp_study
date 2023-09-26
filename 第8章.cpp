//声明一个类，并定义两个类对象
/*
#include<iostream>
using namespace std;

class Student
{
public:
	void display()
	{
		cout << "num:" << num << endl;
		cout << "name:" << name << endl;
		cout << "sex:"<< sex << endl;

	}

private:
	int num;
	char name[20];
	char sex;

};

Student stdu1, stdu2;



//8.4.2
#include<iostream>
using namespace std;
class Time
{
public:
	int hopur;
	int minute;
};
Time t, * p;
p = &t;
cout << p->hour;



//8.4.3
Time t1;
Time &t2=t1;
cout<<t2.hour;













//8.6 类和对象的简单应用举例

//例8.1用类来实现输入和输出时间（时：分：秒：）
#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;	
};

int main()
{
	Time t1;
	cin >> t1.hour;
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;
	return 0;
}


//例题8.2
#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};

int main()
{
	Time t1;
	cin >> t1.hour;
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hour << ":" << t1.minute << ":" << t1.sec;

	Time t2;
	cin >> t2.hour;
	cin >> t2.minute;
	cin >> t2.sec;
	cout << t2.hour << ":" << t2.minute << ":" << t2.sec;

	return 0;
}



//
#include<iostream>
using namespace std;

class Time
{public:
	int hour;
	int minute;
	int sec;
};

int main()
{
	void set_time(Time & );
	void show_time(Time & );
	Time t1;
	set_time(t1);
	show_time(t1);

	Time t2;
	set_time(t2);
	show_time(t2);
	return 0;

}

void set_time(Time& t)
{
	cin >> t.hour;
	cin >> t.minute;
	cin >> t.sec;
	
}

void show_time(Time& t)
{
	cout << t.hour << ":" << t.minute << ":" << t.sec<<endl;

}



//
#include<iostream>
using namespace std;

class Time
{
public:
	int hour;
	int minute;
	int sec;

};

int main()
{
	void set_time(Time&, int hour = 0, int minute = 0, int sec = 0);
	
	void show_time(Time&);
	Time t1;
	set_time(t1);
	show_time(t1);

	Time t2;
	set_time(t2, 12, 11, 33);
	show_time(t2);

	return 0;
}

void set_time(Time& t, int hour, int minute, int sec )
{
	t.hour = hour;
	t.minute = minute;
	t.sec = sec;

		

}

void show_time(Time& t)
{
	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
}



//例题8.3
#include<iostream>
using namespace std;
class Time
{
public:
	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int sec;
};

int main()
{
	Time t1;
	t1.set_time();
	t1.show_time();

	Time t2;
	t2.set_time();
	t2.show_time();
	return 0;
}

void Time::set_time()
{
	cin >> hour;
	cin >> minute;
	cin >> sec;
}

void Time::show_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}



//例题8.4 找出一个整型数组中元素的最大值
#include<iostream>
using namespace std;
class Array_max
{
public:
	void set_value();
	void max_value();
	void show_value();
private:
	int array[10];
	int max;
};

void Array_max::set_value()
{
	int i;
	for ( i = 0; i < 10; i++)
	{
		cin >> array[i];
	}

}

void Array_max::max_value()
{
	int i;
	max = array[0];
	for ( i = 0; i < 10; i++)
	{
		if (array[i]>max)
		{
			max = array[i];
		}

	}
}

void Array_max::show_value()
{
	cout << "max=" << max << endl;
}

int main()
{
	Array_max arrmax;
	arrmax.set_value();
	arrmax.max_value();
	arrmax.show_value();
	return 0;
}
*/


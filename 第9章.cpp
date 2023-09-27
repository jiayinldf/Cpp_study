/*




//9.1对象的初始化
//9.1 用构造函数为对象的数据成员赋初值
#include<iostream>
using namespace std;
class Time
{
public:
	Time();
	void set_time();
	void show_time();


private:
	int hour;
	int minute;
	int sec;
};



 Time::Time()
{
	 hour = 0;
	 minute = 0;
	 sec = 0;
}
void Time::set_time()
{
	cin >> hour >> minute >> sec;
}

void Time::show_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}

int main()
{
	Time t1;
	t1.set_time();
	t1.show_time();

	Time t2;
	t2.show_time();
	return 0;
}



//9.2有两个长方柱，求体积
#include<iostream>
using namespace std;
class Box
{
public:
	Box(int,int, int );
	int volume();

private:
	int height;
	int width;
	int length;

};

Box::Box(int h,int w, int l)
{
	height = h;
	width = w;
	length = l;
}

int Box::volume()
{
	return(height * width * length);
}

int main()
{
	Box t1(12,25,30);
	cout << "the volume of box1 is:" << t1.volume() << endl;

	Box t2(15, 30, 21);
	cout << "The volume of box2 is:" << t2.volume() << endl;

	return 0;
}



#include<iostream>
using namespace std;
class Student
{
public:
	Student(int n, char s, char nam[]) :num(n), sex(s)
	{
		strcpy(name,nam);
	}
	

private:
	int num;
	char sex;
	char name[20];

};

Student stu1(10010 ,'m', "Wang_li");



//9.2定义两个构造函数，其中一个无参数，一个有参数
#include<iostream>
using namespace std;
class Box
{
public:
	Box();
	Box(int h,int w,int l):height(h),width(w),length(l){}
	int volume();

private:
	int height;
	int width;
	int length;
};

Box::Box()
{
	height = 10;
	width = 10;
	length = 10;
}

int Box:: volume()
{
	return(height * width * length);
}

int main()
{
	Box t1;
	Box t2(15, 30, 25);
	cout << "t1 is:" << t1.volume() << endl;
	cout << "t2 is:" << t2.volume() << endl;
	return 0;
}




//9.4
#include<iostream>
using namespace std;
class Box
{
public:
	Box(int h = 10, int w = 10, int l = 10) :height(h), width(w), length(l) {}
	int volume();

	

private:
	int height;
	int width;
	int length;
};


int Box::volume()
{
	return(height * width * length);
}

int main()
{
	Box t1;
	cout << t1.volume() << endl;
	Box t2(15);
	cout << t2.volume() << endl;
	Box t3(15, 30);
	cout << t3.volume() << endl;
	Box t4(15, 30, 20);
	cout << t4.volume() << endl;
	return 0;
}

*/


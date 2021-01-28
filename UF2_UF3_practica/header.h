#ifndef myheader
#define myheader

struct date{
	int day;
	int month;
	int year;
	int hour;
	int minutes;
	int seconds;
};

struct registry{
	char name[40];
	char address[40];
	long phoneNumber;
	struct date stDate;
};

void write_regis();
void input_file();

#endif
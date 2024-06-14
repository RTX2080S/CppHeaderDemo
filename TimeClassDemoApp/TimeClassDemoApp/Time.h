#pragma once

#ifndef TIME_H
#define TIME_H

class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	//with default value
	Time(int h = 0, int m = 0, int s = 0);
	//	setter function
	void setTime(int h, int m, int s);
	// Print a description of object in " hh:mm:ss"
	void print();
	//compare two time object
	bool equals(Time time);
};

#endif

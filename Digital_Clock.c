/* c program to design a digital clock */

#include <stdio.h>
#include <windows.h>  //for Sleep () function
#include <stdlib.h>
#include <io.h>

int main() {


	int hour, minute, second;

	hour = minute = second = 0;

	while (1) {

		//clear output screen
		system("cls");

		//print time in HH : MM : SS format

		printf("%02d : %02d : %02d ", hour, minute, second);

		//clear output buffer in gcc

		fflush(stdout);

		//increase second

		second++;

		//update hour, minute and second

		if(second == 60)  { 
			minute += 1;
			second = 0;
		}

		if(minute == 60) {
			hour += 1;
			minute = 0;
		}
		if (hour == 24) {
			
			hour = minute = second = 0;

		}

		Sleep(1000);

	}

	return 0;

} 
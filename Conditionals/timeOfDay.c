#include <stdio.h>
#include <time.h>

time_t now;
struct tm *timeinfo;

int hour;

int main ()
{
    time_t rawtime;
    struct tm *now_tm;

    now = time(NULL);
    now_tm = localtime(&now);
    hour = (now_tm->tm_hour)-6;
    time(&rawtime);
    timeinfo = localtime (&rawtime);
    printf("surrent local time and date: %s", asctime(timeinfo));
    printf("tell me the hour in military time\n");
    scanf("%d", &hour);
    if(hour < 12){
        printf("Good Morning\n");
    }else if(hour < 18){
        printf("Good Afternoon\n");
    }else{
        printf("Good Evening\n");
    }
    return 0;
}
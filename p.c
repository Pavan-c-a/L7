#include<stdio.h>
int main()
{
        int a;
        printf("enter your choice");
        scanf("%d",&a);
        switch(a)
        {
                case 1:printf("Btech in CSE");
                       break;
		case 2:printf("Btech in AIML");
		       break;
	        case 3:printf("Btech in ECE");
		       break;
		case 4:printf("Btech in MEC");
		       break;
	}
	return 0;
}

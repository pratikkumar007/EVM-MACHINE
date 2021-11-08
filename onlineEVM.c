//Project1: Online EVM
//Online EVM Develop by Pratik Kumar.


#include<stdio.h>
#include<string.h>
#define VOTERS 10 //Number of Voters in a City
#define CITY "bgp" //Define City-Code for login
#define PINCODE 812001 //Pincode for login

void login(); //Proto-type of Login Page

int main(){
	//Variables Section
	int num, i=1;
	static firstCount, secondCount, thirdCount, forthCount;
	
	//Body Section <Includin Loops & Switch Case>
	while(i<=VOTERS){
	login(); //Calling of Login Page
	printf("\t\t***Voting is the Right of Everyone!!***\n\n");
	printf("\t\t\t~Choose Your Own Government~\n\n\n");
	printf("\tKindly Read All The Information First And Choose A Correct Option :\n\n");
	printf("INFORMATION :   Choose a number from the following given number.\n\t\tOnly one vote is valid.\n\t\tThere is a Beep Sound after every Vote, so don't try to Cheat.\n\n");
	printf("\n\n\n\n ");
	printf("\t\t1. BJP     2. Congress     3. AAP     4. RJD\n\n\n");
	printf("\t\tGive the Number as input : ");
	fflush(stdin);
	scanf("%d",&num);
	printf("\a\n\n\n");
	printf("=======================================================================\n\n");
	switch(num){
		case 1:
			printf("\aYou have chosen BJP");
			firstCount = firstCount + 1;
			break;
		case 2:
			printf("\aYou have chosen Congress");
			secondCount = secondCount + 1;
			break;
		case 3:
			printf("\aYou have chosen AAP");
			thirdCount = thirdCount + 1;
			break;
		case 4:
			printf("\aYou have chosen RJD");
			forthCount = forthCount+ 1;
			break;
		default:
			printf("\aInvalid Input(Error)");
					
	}
	printf("\n\nThank you so much!! Kindly leave the Online EVM!!\n\n");
	printf("=======================================================================\n");
	printf("=======================================================================\n\n\n\n\n");	
	i++;
	
	}
	
	//Counting Section
	printf("========================================================================\n");
	printf("==========================COUNTING SECTION==============================\n");
	printf("========================================================================\n\n\n");	
	printf("\t\t\tCounts of Votes\n\n\n");
	printf("\t\tBJP got %d Votes\n\n",firstCount);
	printf("\t\tCongress got %d Votes\n\n",secondCount);
	printf("\t\tAAP got %d Votes\n\n",thirdCount);
	printf("\t\tRJD got %d Votes\n\n",forthCount);
	
	//Winner Section
	printf("========================================================================\n");
	printf("===========================WINNER SECTION===============================\n");
	printf("========================================================================\n\n\n");
	if(firstCount > secondCount && firstCount > thirdCount && firstCount > forthCount){
		printf("\t\t\t\aBJP Won the Election!!\n\n");
	}
	else if(secondCount > firstCount && secondCount > thirdCount && secondCount > forthCount){
		printf("\t\t\t\aCongress Won the Election!!\n\n");
	}
	else if(thirdCount > firstCount && thirdCount > secondCount && thirdCount > forthCount){
		printf("\t\t\t\aAAP Won the Election!!\n\n");
	}
	else if(forthCount > firstCount && forthCount > secondCount && forthCount > thirdCount){
		printf("\t\t\t\aRJD Won the Election!!\n\n");
	}
	else{
		printf("\aThere is Cheating in Election!! Election will again conduct after two weeks.\n\n");
	}
	printf("========================================================================\n");
	printf("\nOnline EVM develop by Pratik Kumar. \n");
	printf("Copyright 2021 by Pratik. All Rights Reserved.");
	getch();
	
	
	return 0;
}


//Login Page for Voters
void login(){
	int pin;
	char city[5];
	int camp;
	FIRST:
	printf("=======================================================================\n\n");	
	printf("------------------------------Login Page-------------------------------");
	printf("\n\n~Input the details as per your Voter ID~");
	printf("\n\nEnter the Pincode : ");
	fflush(stdin);
	scanf("%d", &pin);
	printf("\nEnter the City Code : ");
	fflush(stdin);
	//gets(city);
	scanf("%s", &city);
	camp = strcmp(city,CITY);
	if(pin == PINCODE && camp == 0){
		printf("\n\n\tEnter Sucessfully!!");
		printf("\n\nProcced further for Voting!!!!\n\n");
		printf("=======================================================================\n\n\n");
	}
	else{
		printf("\n\n\t\aInvalid Pincode/City!!\n\n\tTry Again!!\n\n");
		printf("=======================================================================\n\n\n");
		goto FIRST;
	}
	
}

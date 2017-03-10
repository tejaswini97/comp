#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>     // the libraries used in the coding
#include<stdbool.h>
struct data
{
	char type[10];      //declaration of struct data to represent the players
	char name[10];
	int Smartness;     //characteristics of the players
	int Strength;
	int MagicSkills; 
	int Luck;
	int Dexterity;
	int Lifepoints;    
	char slots[10];     //array to represent the slots
	int slotsnum;        //integer to represent the slot number(1,2,3)
};
struct slot      //declaration of the struct slot to represent the slots
{
	char ground[10]; //types of slots
	char hill[10];  
	char city[10];
};

int main(void)         //main function
{
	int a,i;
	char name,Elf,Human;
	int player1;
	printf("Input the maximum number of players 1-6"); //input the total number of players by the user
	scanf("%d",&a);                                  //scan in the number of players inputted by the user

	struct data player[a];                         // declaration of struct data player
	int x,k,b,c,d,e,j;



		  
		  for(x=0;x<a;x++)                        //for loop that runs for each player
		  {
			  printf("enter the name of the player %d ",x+1);  //takes in the name of the player
			  scanf("%s",&player[x].name);                   
			  printf("enter the type of the player:Elf, Human, Ogre, Wizard-");//takes in the type of the player
			  scanf("%s",&player[x].type);
			  player[x].Lifepoints=100;          //takes input for the lifepoints of the player.This is initialised to 100.
		 // }
			 char str2[]="Elf";
			 k=strcmp(player[x].type,str2);         
													 /*strcmp compares the 2 strings and prints out a 0 if they are both equal.This is used here so that the characteristics of a
													  particular player type is dislayed ..according to the input of the player type  by the user*/
			 b=strcmp(player[x].type,"Human");       
			 c=strcmp(player[x].type,"Wizard");
			 d=strcmp(player[x].type,"Ogre");
		 
		 
		 
			  //for(x=0;x<=a;x++)
	 
		if(k==0)                                 /*if k=o,that is if the user iputted the player type as elf then the characteristics of elf dislays*/
		{
			player[x].Luck=rand()%(100 + 1 - 60) + 60;  /*characteristics of the player type elf that is assigned as a random integer in the given range*/
			player[x].Smartness=70+rand()%30;
			player[x].Strength=rand()%50;
			player[x].MagicSkills=50+rand()%29;
			player[x].Dexterity=rand()%100;

		}
		 
		 else if(b==0)
		 {                                     /*if b=o,that is if the user iputted the player type as human then the characteristics of human dislays*/
			player[x].Luck=rand()%100;         /*characteristics of the player type human  is assigned as a random integer in the given range*/
			player[x].Smartness=rand()%100;
			player[x].Strength=rand()%100;
			player[x].MagicSkills=rand()%100;
			player[x].Dexterity=rand()%100;

			 int t=(player[x].Luck+player[x].Smartness+player[x].Strength+player[x].MagicSkills);
			 while(t>300)
												 /*if the sum of luck,smartness,strength and magicskills exceeds 300 then it reassigns the value randomly..condition given by the professor*/
			 {
				 player[x].Luck=rand()%100;      // using while loop so that it iterates until the condition is satisfied
				 player[x].Smartness=rand()%100;
				 player[x].Strength=rand()%100;
				 player[x].MagicSkills=rand()%100;
				 t=(player[x].Luck+player[x].Smartness+player[x].Strength+player[x].MagicSkills);
			   //  break;
					
			 }			 
		 }
		 
		 else if(c==0)                    /*if c=o,that is if the user iputted the player type as wizard then the characteristics of wizard dislays*/
		{
			player[x].Luck=50+rand()%50;   /*characteristics of the player type wizard is assigned as a random integer in the given range*/
			player[x].Smartness=90+rand()%10;
			player[x].Strength=rand()%20;
			player[x].MagicSkills=80+rand()%20;
			player[x].Dexterity=rand()%100;

		}
		
		else if(d==0)
		{                                    /*if d=o,that is if the user iputted the player type as ogre then the characteristics of ogre dislays*/
			player[x].Luck=rand()%100;      /*characteristics of the player type ogre is assigned as a random integer in the given range*/
			player[x].Smartness=rand()%20;
			player[x].Strength=80+rand()%20;
			player[x].MagicSkills=0;
			player[x].Dexterity=80+rand()%20;
			int k=player[x].Luck+player[x].Smartness;  // if the sum of luck and smartness is greater than 50 then it should reassign the values
			while (k>50)
			  {                                     // using while loop so that it iterates until the condition is satisfied
						player[x].Luck=rand()%100;
						player[x].Smartness=rand()%20;
						k=player[x].Luck+player[x].Smartness;

			}
		}
			
			//printing the name,type ,life pionts and the characteristics of the player
			
			printf("\n  %s ( %s ,%d)",player[x].name,player[x].type,player[x].Lifepoints);
			printf("\n Luck=%d\n",player[x].Luck);
			printf("\n smartness=%d\n",player[x].Smartness);
			printf("\n strength=%d\n",player[x].Strength);
			printf("\n MagicSkills=%d\n",player[x].MagicSkills);
			printf("\n Dexterity=%d\n",player[x].Dexterity);			

	   
	 }
	 }
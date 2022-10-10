#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE * pFile;

#define ARRAYSIZE 50
#define SONGNAME 50
#define SONGARTIST 50
#define SONGLENGTH 50
#define TRACK_NUMBER

void func1(void);
void func2(void);
void func3(void);
void func4(void);
void delete_song(void);
void func6(void);

typedef struct Mp3rec
{
        char name[SONGNAME];
        char artist[SONGARTIST];
        char length[SONGLENGTH];
        char tname[TRACK_NUMBER];
};


int main (void)
{
    
    
    
    int menuchoice=0;
    //fp= fopen("mp3_list.txt", "r" "W" "a"); either to add or read a text file.
    do
    {
      printf ("********************************************\n");
      printf ("************************************\n");
      printf ("*********** MP3 Music Player **********\n");
      printf ("********************************************");
      printf("\n1: Play File");   
      printf("\n2: Show Library");
      printf("\n3: Add Record");
      printf("\n4: Edit/Modify ");
      printf("\n5: Delete Record");
      printf("\n6: Quit");
      
      printf("\n\nEnter Choice From 1-6: ");
      scanf("&#37;d", &menuchoice);

      switch (menuchoice)
      {
             case 1:
                    func1();
                    break;
             case 2:
                    func2();
                    break;
             case 3:
                    func3();
                    break;
             case 4:
                    func4();
                    break;
                    
             case 5:delete_song();
                    break;              
                                        
             case 6:  
                    break;     
                    
             default:
                     printf("\nInvalid Choice: 1-4 Only Please");
                     }
                     
                     }while(menuchoice!=4);
                     system("pause");
}

void func1(void)
{
     printf("\n\n Play File\n\n");
     printf ("********************************************\n");
     printf ("************************************\n");
     printf ("*********** **********\n");
     printf ("********************************************");
     {
    char commandarray[ARRAYSIZE];
    
    char mp3filename[ARRAYSIZE] ="C:\\mplayer\\Robin S - Show me Love.mp3";
    
    sprintf(commandarray, "C:\\mplayer\\mplayer.exe \"%s\"", mp3filename);
    
    printf("\nAttempting to Run Command \"%s\"...\n\n", commandarray);
    
    system(commandarray);
    
    int menuchoice=0;
    switch (menuchoice)
    printf("\n1: Back To Menu");
    printf("\n5: Quit");
   
    printf("\nDone.\n\n");
    
    
   
      
    system("pause");
    
}    
}

void func2(void)
{
     printf("\n\n Show Library\n\n");
}                                                                                              

void func3(void)
{
    
     printf("\n\n Add Record/Song\n\n");
     fopen("ListofSongs.txt","r+");
                       
     printf("\n\n Add Record\n\n");
     
         
}        

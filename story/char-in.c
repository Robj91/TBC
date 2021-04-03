//This script is only run once, before the first level.
//It sets what stats and items Dink will start off with
//So if the player chooses to play as Dink, there are actually values to retrieve for his stats and inventory
//The player starts as Storm, so we need not worry about storing anything for him straight up 
//The first time the player chooses to play an area as Dink, the script 'char-set' will store all of storms stats and items 
//Before it swaps characters and retrieves dinks stats

void inset(void)
{
 int &statvar;

 //load the map with all the variable sprites on it
 &scrtemp = &player_map;
 &player_map = 737;
 load_screen(737);

//Dink strength
  &statvar = 1;
   editor_type(&statvar, 0);
     editor_seq(&statvar, 20);

//Dink lifemax
  &statvar = 2;
   editor_type(&statvar, 0);
     editor_seq(&statvar, 80);

//Dink life
  &statvar = 3;
   editor_type(&statvar, 0);
     editor_seq(&statvar, 80);

//Dink magic
  &statvar = 4;
   editor_type(&statvar, 0);
     editor_seq(&statvar, 0);

//Dink defense
  &statvar = 5;
   editor_type(&statvar, 0);
     editor_seq(&statvar, 5);

//Gold
  &statvar = 6;
   editor_type(&statvar, 0);
     editor_seq(&statvar, 0);

//Dink level
  &statvar = 7;
   editor_type(&statvar, 0);
     editor_seq(&statvar, 16);

//Dink exp
  &statvar = 8;
   editor_type(&statvar, 0);
     editor_seq(&statvar, 0);


//Store Dinks inventory he will start with
//Stored seq value of 1 means he has that item.

//Fists
  &statvar = 9;
   editor_type(&statvar, 0);  
    editor_seq(&statvar, 1);

//Light sword
  &statvar = 10;
   editor_type(&statvar, 0);    
    editor_seq(&statvar, 1);

//Massive bow
  &statvar = 11;
   editor_type(&statvar, 0);   
    editor_seq(&statvar, 1);

//Throwing axe
  &statvar = 12;
   editor_type(&statvar, 0);   
    editor_seq(&statvar, 1);


//change intro variable so 'char-all' knows not to run this script ever again.
 &intro = 9;

 &statvar = 0;
 
 //load the old map again
 &player_map = &scrtemp;
 load_screen(&scrtemp); 
 draw_hard_map(); 
 
 kill_this_task();
}
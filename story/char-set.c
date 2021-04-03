//This is the script that retrieves all the characters stats, items, and magic for each character

void main(void)
{
 //this probably will never be used tbh
 //will just call from external
 if (&sgchar == 1) goto dinkstat;

 if (&sgchar == 0) goto stormstat;
}

void dink(void)
{
dinkstat:

 int &getstat;
 int &statvar;
 int &charset;

 //load the map with all the variable sprites on it
 &scrtemp = &player_map;
 &player_map = 737;
 load_screen(737);

//Retrieve Stats
  &statvar = 1;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &strength = &charset;
      
  &statvar = 2;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &lifemax = &charset; 
      
  &statvar = 3;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &life = &charset;
      
  &statvar = 4;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &magic = &charset;
      
  &statvar = 5;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &defense = &charset;
      
  &statvar = 6;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &gold = &charset;
 
  &statvar = 7;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &level = &charset; 
      
  &statvar = 8;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &exp = &charset;
    
//Retrieve Dinks inventory
  &statvar = 9;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);    
    if (&charset == 1) 
    {
     add_item("item-fst", 438, 1);
    }
    
  &statvar = 10;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);    
    if (&charset == 1) 
    {
     add_item("item-sw3", 438, 21); 
    }
    
  &statvar = 11;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);    
    if (&charset == 1) 
    {
     add_item("item-b2", 438, 12); 
    } 
    
  &statvar = 12;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);    
    if (&charset == 1) 
    {
     add_item("item-thaxe", 438, 6); 
    }
    

 &cur_weapon = 1; 
 arm_weapon();
 &getstat = free_magic();
 if (&getstat == 8) 
 {
  &cur_magic = 0;
 }
 else
 {
  &cur_magic = 1;
 }
 arm_magic();
 
 //load the correct push animation
 init("load_sequence_now graphics\dink\push\ds-p2- 312 75 45 79 -7 -21 13 -7");
 init("load_sequence_now graphics\dink\push\ds-p4- 314 75 36 69 3 -9 45 9");
 init("load_sequence_now graphics\dink\push\ds-p6- 316 75 67 71 -21 -12 21");
 init("load_sequence_now graphics\dink\push\ds-p8- 318 75 46 59 -9 5 12 24");
 init("load_sequence_now graphics\dink\die\ds-x3- 467 75 30 67 -10 -9 10 9");

 &getstat = 0;
 &statvar = 0;
 
 //load the old map again
 &player_map = &scrtemp;
 load_screen(&scrtemp); 
 draw_hard_map();  
 
 kill_this_task();
}

void storm(void)
{
stormstat:

 int &getstat;
 int &statvar;
 int &charset;

 //load the map with all the variable sprites on it
 &scrtemp = &player_map;
 &player_map = 706;
 load_screen(706);

//Retrieve Stats
  &statvar = 1;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &strength = &charset;
      
  &statvar = 2;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &lifemax = &charset; 
      
  &statvar = 3;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &life = &charset;
      
  &statvar = 4;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &magic = &charset;
      
  &statvar = 5;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &defense = &charset;
      
  &statvar = 6;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &mana = &charset;
      
  &statvar = 7;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &gold = &charset;
      
  &statvar = 8;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &exp = &charset;
      
  &statvar = 9;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
      &level = &charset;

//Retrieve Storms inventory
  &statvar = 10;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);    
    if (&charset == 1) 
    {
     add_item("item-fweap", 438, 23);
    }
    
  &statvar = 11;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);    
    if (&charset == 1) 
    {
     add_item("item-fb", 437, 1); 
    }
    
  &statvar = 12;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);    
    if (&charset == 1) 
    {
     add_item("item-ice", 437, 5);
    }   


 &cur_weapon = 1; 
 arm_weapon();
 &getstat = free_magic();
 if (&getstat == 8) 
 {
  &cur_magic = 0;
 }
 else
 {
  &cur_magic = 1;
 }
 arm_magic();
 
 //load correct push anim
 init("load_sequence_now graphics\people\peasant2\die\death- 467 75 91 40 -64 -30 19 10");
 init("load_sequence_now graphics\people\peasant2\c11w3- 312 75 50 94 -20 -11 21 16");
 init("load_sequence_now graphics\people\peasant2\c11w3- 316 75 50 94 -20 -11 21 16");
 init("load_sequence_now graphics\people\peasant2\c11w7- 314 75 56 97 -21 -9 23 15");
 init("load_sequence_now graphics\people\peasant2\c11w7- 318 75 56 97 -21 -9 23 15");
 
 &getstat = 0;
 &statvar = 0;
 
 //load the old map again
 &player_map = &scrtemp;
 load_screen(&scrtemp); 
 draw_hard_map(); 
 
 kill_this_task();
}
//This is the script that stores all the characters stats, items, and magic for each character.

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

//Store dinks stats
  &statvar = 1;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &strength);
      
  &statvar = 2;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &lifemax);
      
  &statvar = 3;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &life);
      
  &statvar = 4;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &magic);
      
  &statvar = 5;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &defense);
      
  &statvar = 6;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &gold);
 
  &statvar = 7;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &level);
      
  &statvar = 8;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &exp);
      
//Store and kill Dinks current inventory
  &statvar = 9;
   editor_type(&statvar, 0);  
     &charset = count_item("item-fst");
     if (&charset > 0)
     { 
      kill_this_item("item-fst");   
     }   
    editor_seq(&statvar, &charset);
    
  &statvar = 10;
   editor_type(&statvar, 0);    
     &charset = count_item("item-sw3");
     if (&charset > 0)
     { 
      kill_this_item("item-sw3");   
     }
    editor_seq(&statvar, &charset);
    
  &statvar = 11;
   editor_type(&statvar, 0);   
     &charset = count_item("item-b2");
     if (&charset > 0)
     { 
      kill_this_item("item-b2");   
     }
    editor_seq(&statvar, &charset);
    
  &statvar = 12;
   editor_type(&statvar, 0);   
     &charset = count_item("item-thaxe");
     if (&charset > 0)
     { 
      kill_this_item("item-thaxe");   
     }
    editor_seq(&statvar, &charset);  

 &getstat = 0;
 &statvar = 0;
 &charset = 0;
    
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

//Store storms stats
  &statvar = 1;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &strength);
      
  &statvar = 2;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &lifemax);
      
  &statvar = 3;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &life);
      
  &statvar = s4;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &magic);
      
  &statvar = 5;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &defense);
      
  &statvar = 6;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &mana);
      
  &statvar = 7;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &gold);
      
  &statvar = 8;
   editor_type(&statvar, 0);
     editor_seq(&statvar, &exp);
      
  &statvar = 9;
   editor_type(&statvar, 0);
    &charset = editor_seq(&statvar, -1);
     editor_seq(&statvar, &level);
      &level = &charset;

//Store and kill storms current inventory
  &statvar = 10;
   editor_type(&statvar, 0);  
     &charset = count_item("item-fweap");
     if (&charset > 0)
     { 
      kill_this_item("item-fweap");   
     }   
    editor_seq(&statvar, &charset);
    
  &statvar = 11;
   editor_type(&statvar, 0);    
     &charset = count_magic("item-fb");
     if (&charset > 0)
     { 
      kill_this_magic("item-fb");   
     }
    editor_seq(&statvar, &charset);
    
  &statvar = 12;
   editor_type(&statvar, 0);   
     &charset = count_magic("item-ice");
     if (&charset > 0)
     { 
      kill_this_magic("item-ice");   
     }
    editor_seq(&statvar, &charset);

 &getstat = 0;
 &statvar = 0;
 &charset = 0;
 
 //load the old map again
 &player_map = &scrtemp;
 load_screen(&scrtemp); 
 draw_hard_map(); 
 
 kill_this_task();
}
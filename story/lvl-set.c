//This is the script that stores which areas have been completed and by what character
//Lvl completed is editor seq = 1
//editor frame stores character - 0 for dink, 1 for storm

void storelvl(void)
{
 freeze(1);
 
 int &getstat;
 int &statvar;
 int &charset; 
 
 //load the map with all the variable sprites on it
 &scrtemp = &player_map;
 &player_map = 738;
 load_screen(738); 
 
 if (&coml == 0)
 {
  &getstat = sp(1);
 }
 
 &statvar = sp_editor_num(&getstat);
  editor_type(&statvar, 0);
   editor_seq(&statvar, 1);
    editor_frame(&statvar, &sgchar);

 &getstat = 0;
 &statvar = 0;
 &charset = 0;

 //load the old map again
 &player_map = &scrtemp;
 load_screen(&scrtemp); 
 draw_hard_map(); 
 
 kill_this_task();  
}
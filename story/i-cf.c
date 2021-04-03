//Sprite placed at screen entrances to check storms position
//against the screen number and move him the first few 
//steps onto the screen
void main(void)
{
 sp_size(&current_sprite, 1);
 sp_touch_damage(&current_sprite, -1);
}

void touch(void)
{
 if (&player_map == 354)
 {
  int &fencex = sp_x(&current_sprite, -1);
  int &fencey = sp_y(&current_sprite, -1);
  
  if (&fencex < 50)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0)
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);
   
   if (&posx < 55) move_stop(1, 6, 55, 1); 
   
   if (&posx > 55) move_stop(1, 4, 55, 1);
  
   if (&posy > 340) move_stop(1, 8, 340, 1);
   
   if (&posy < 95) move_stop(1, 2, 95, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer!", 1);
   sp_touch_damage(&current_sprite, -1);
  }

  if (&fencex > 585)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);
   
   if (&posx > 585) move_stop(1, 4, 585, 1);
   
   if (&posx < 585) move_stop(1, 6, 585, 1);
  
   if (&posy > 155) move_stop(1, 8, 155, 1);

   if (&posy < 95) move_stop(1, 2, 95, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);
  }

  if (&fencey < 70)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);

   if (&posy < 70) move_stop(1, 2, 70, 1);

   if (&posy > 70) move_stop(1, 8, 70, 1); 
  
   if (&posx > 528) move_stop(1, 4, 528, 1);
   
   if (&posx < 505) move_stop(1, 6, 505, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);
  }
 }
 if (&player_map == 355)
 {
  int &fencex = sp_x(&current_sprite, -1);
  int &fencey = sp_y(&current_sprite, -1); 

  if (&fencex < 50)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);
   
   if (&posx < 50) move_stop(1, 6, 50, 1);
   
   if (&posx > 50) move_stop(1, 4, 50, 1);
  
   if (&posy > 149) move_stop(1, 8, 149, 1);

   if (&posy < 88) move_stop(1, 2, 88, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);  
  }
  if (&fencey < 25)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);

   if (&posy < 25) move_stop(1, 2, 25, 1);

   if (&posy > 25) move_stop(1, 8, 25, 1); 
  
   if (&posx > 525) move_stop(1, 4, 525, 1);
   
   if (&posx < 210) move_stop(1, 6, 210, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);   
  }
 } 
 if (&player_map == 323)
 {
  int &fencex = sp_x(&current_sprite, -1);
  int &fencey = sp_y(&current_sprite, -1); 

  if (&fencey > 365)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);

   if (&posy > 365) move_stop(1, 8, 365, 1);

   if (&posy < 365) move_stop(1, 2, 365, 1); 
  
   if (&posx > 525) move_stop(1, 4, 525, 1);
   
   if (&posx < 210) move_stop(1, 6, 210, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);   
  }  
  if (&fencey < 25)
  {
   if (&life < 1) return;

   freeze(1);

   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);

   if (&posy < 25) move_stop(1, 2, 25, 1);

   if (&posy > 25) move_stop(1, 8, 25, 1); 
  
   if (&posx > 330) move_stop(1, 4, 330, 1);
   
   if (&posx < 257) move_stop(1, 6, 257, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);   
  } 
 }
 if (&player_map == 291)
 { 
  int &fencex = sp_x(&current_sprite, -1);
  int &fencey = sp_y(&current_sprite, -1);

  if (&fencey > 370)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);

   if (&posy > 370) move_stop(1, 8, 370, 1);

   if (&posy < 370) move_stop(1, 2, 370, 1); 
  
   if (&posx > 330) move_stop(1, 4, 330, 1);
   
   if (&posx < 257) move_stop(1, 6, 257, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);   
  }  
  if (&fencex < 45)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);
   
   if (&posx < 45) move_stop(1, 6, 45, 1);
   
   if (&posx > 45) move_stop(1, 4, 45, 1);
  
   if (&posy > 245) move_stop(1, 8, 245, 1);

   if (&posy < 40) move_stop(1, 2, 40, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);  
  }
 } 
 if (&player_map == 290)
 {
  int &fencex = sp_x(&current_sprite, -1);
  int &fencey = sp_y(&current_sprite, -1); 

  if (&fencex > 590)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);
   
   if (&posx > 590) move_stop(1, 4, 590, 1);
   
   if (&posx < 590) move_stop(1, 6, 590, 1);
  
   if (&posy > 245) move_stop(1, 8, 245, 1);

   if (&posy < 40) move_stop(1, 2, 40, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);  
  }  
  if (&fencex < 50)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);
   
   if (&posx < 50) move_stop(1, 6, 50, 1);
   
   if (&posx > 50) move_stop(1, 4, 50, 1);
  
   if (&posy < 140) move_stop(1, 2, 140, 1);

   if (&posy > 245) move_stop(1, 8, 245, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);  
  } 
 } 
 if (&player_map == 322)
 {
  int &fencex = sp_x(&current_sprite, -1);
  int &fencey = sp_y(&current_sprite, -1); 

  if (&fencey > 370)
  {   
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);

   if (&posy > 370) move_stop(1, 8, 370, 1);

   if (&posy < 370) move_stop(1, 2, 370, 1); 
  
   if (&posx > 530) move_stop(1, 4, 530, 1);
   
   if (&posx < 505) move_stop(1, 6, 505, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1); 
  }
  if (&fencex < 45)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);
   
   if (&posx < 45) move_stop(1, 6, 45, 1);
   
   if (&posx > 45) move_stop(1, 4, 45, 1);
  
   if (&posy < 40) move_stop(1, 2, 40, 1);

   if (&posy > 69) move_stop(1, 8, 69, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);  
  } 
 }
 if (&player_map == 321)
 {
  int &fencex = sp_x(&current_sprite, -1);
  int &fencey = sp_y(&current_sprite, -1); 

  if (&fencex > 590)
  {
   if (&fencey < 80)
   {
    if (&life < 1) return;

    freeze(1);
    sp_touch_damage(&current_sprite, 0);
    int &posx = sp_x(1, -1);
    int &posy = sp_y(1, -1);
   
    if (&posx > 590) move_stop(1, 4, 590, 1);
   
    if (&posx < 590) move_stop(1, 6, 590, 1);
  
    if (&posy < 37) move_stop(1, 2, 37, 1);

    if (&posy > 48) move_stop(1, 8, 48, 1);

    unfreeze(1);

    if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
    sp_touch_damage(&current_sprite, -1);
   }     
  } 
  if (&fencex < 300)
  {
   if (&fencey < 25)
   {
    if (&life < 1) return;

    freeze(1);
    sp_touch_damage(&current_sprite, 0);
    int &posx = sp_x(1, -1);
    int &posy = sp_y(1, -1);
   
    if (&posy < 25) move_stop(1, 2, 25, 1);
   
    if (&posy > 25) move_stop(1, 8, 25, 1);
  
    if (&posx < 206) move_stop(1, 6, 206, 1);

    if (&posx > 227) move_stop(1, 4, 227, 1);

    unfreeze(1);

    if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
    sp_touch_damage(&current_sprite, -1);
   }
  }    
 }
 if (&player_map == 289)
 {
  int &fencex = sp_x(&current_sprite, -1);
  int &fencey = sp_y(&current_sprite, -1);    

  if (&fencey > 360)
  {   
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);

   if (&posy > 360) move_stop(1, 8, 360, 1);

   if (&posy < 360) move_stop(1, 2, 360, 1); 
  
   if (&posx > 226) move_stop(1, 4, 226, 1);
   
   if (&posx < 205) move_stop(1, 6, 205, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1); 
  }
  if (&fencex > 585)
  {
   if (&life < 1) return;

   freeze(1);
   sp_touch_damage(&current_sprite, 0);
   int &posx = sp_x(1, -1);
   int &posy = sp_y(1, -1);
   
   if (&posx > 585) move_stop(1, 4, 585, 1);
   
   if (&posx < 585) move_stop(1, 6, 585, 1);
  
   if (&posy < 140) move_stop(1, 2, 140, 1);

   if (&posy > 245) move_stop(1, 8, 245, 1);

   unfreeze(1);

   if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
   sp_touch_damage(&current_sprite, -1);  
  }   
 }
 if (&player_map == 353)
 {
  if (&life < 1) return;

  freeze(1);
  sp_touch_damage(&current_sprite, 0);
  int &posx = sp_x(1, -1);
  int &posy = sp_y(1, -1);  

  if (&posy < 95) move_stop(1, 2, 95, 1);

  if (&posy > 345) move_stop(1, 8, 345, 1);

  if (&posx > 595) move_stop(1, 4, 595, 1);

  if (&posx < 595) move_stop(1, 6, 595, 1);
  
  unfreeze(1);

  if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
  sp_touch_damage(&current_sprite, -1); 
 }
 if (&player_map == 385)
 {
  if (&life < 1) return;

  freeze(1);
  sp_touch_damage(&current_sprite, 0);
  int &posx = sp_x(1, -1);
  int &posy = sp_y(1, -1);  

  if (&posy < 30) move_stop(1, 2, 30, 1);

  if (&posy > 30) move_stop(1, 8, 30, 1);

  if (&posx > 275) move_stop(1, 4, 275, 1);

  if (&posx < 212) move_stop(1, 6, 212, 1);
  
  unfreeze(1);

  if (&life < 1) return;

   say("`6I'm trying to run AWAY from the slayer", 1);
  sp_touch_damage(&current_sprite, -1); 
 }
}
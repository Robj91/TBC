//Sprite and screens edge to save storms position
//in order to check slayers distance from storm
void main(void)
{
 sp_size(&current_sprite, 1);
 sp_touch_damage(&current_sprite, -1);
}
 
void touch(void)
{
 if (sp_pframe(&current_sprite, -1) == 9)
 {
  //We're exiting left or right, so let's get storms x position
  sp_touch_damage(&current_sprite, 0);
  int &posx = sp_x(1, -1);

  //Get the slayer and save storms x position in temphold
  int &rand = get_sprite_with_this_brain(9, 0);
  &temphold = &posx; 
  int &junk = is_script_attached(&rand);
  if (&junk > 0)
  {
   //Run the slayer's 'POSI' procedure
   run_script_by_number(&junk, "POSI"); 
  }
  wait(200);
 }
 if (sp_pframe(&current_sprite, -1) == 8)
 {
  //We're exiting up or down, so let's get storms y position
  sp_touch_damage(&current_sprite, 0);
  int &posy = sp_y(1, -1);

  //Get the slayer and save storms y position in temphold
  int &rand = get_sprite_with_this_brain(9, 0);
  &temphold = &posy;
  int &junk = is_script_attached(&rand);
  if (&junk > 0)
  {
   //Run the slayer's 'POSI2' procedure
   run_script_by_number(&junk, "POSI2");
  }
  wait(100);
 }
}
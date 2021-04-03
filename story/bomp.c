void main(void)
{
 sp_touch_damage(&current_sprite, -1);
 sp_nodraw(&current_sprite, 1);
 sp_nohit(&current_sprite, 1);
 int &getb;
 int &hold;
}

void touch(void)
{
 sp_touch_damage(&current_sprite, 0);
 if (&hmbom > 0)
 {
  &hmbom += 9;
 }
 else
 {
  &hmbom += 9;
  add_item("item-bom", 438, 3);
 }
 Playsound(10,22050,0,0,0);
 say("`6I now have &hmbom bombs! I better make sure I keep one to blast the rock near stonebrook..", 1); 
 
 //Make all bombs disappear, they are all brain 20
 &getb = 0;
bloop:
 wait(0);
 &getb = get_next_sprite_with_this_brain(20, 0, &getb);
 if (&getb > 0)
 {
  sp_brain_parm(&getb, 3);
  sp_brain(&getb, 12);
  sp_touch_damage(&getb 0);
  sp_timing(&getb, 0);
  &hold = sp_editor_num(&getb);
  if (&hold != 0)
  editor_type(&hold, 1);
  sp_notouch(&getb, 1);
  sp_nohit(&getb, 1);
  sp_hard(&getb, 1);
  draw_hard_sprite(&getb);
  sp_active(&getb, 0); 
  &getb += 1;
  goto bloop;
 }
 
 &hold = sp_editor_num(&current_sprite);
 if (&hold != 0)
 editor_type(&hold, 1);
 sp_active(&current_sprite, 0);
}
void main(void)
{
 sp_touch_damage(&current_sprite, -1);
 sp_seq(&current_sprite, 466);
 sp_brain(&current_sprite, 6);
}

void touch(void)
{
 sp_touch_damage(&current_sprite, 0);
 int &hold = sp_editor_num(&current_sprite);
 if (&hold != 0)
 {
  editor_type(&hold, 1); 
 }
 Playsound(10,22050,0,0,0);
 sp_nodraw(&current_sprite, 1);
 say("`6A full mana potion!", 1);
 &mana = 100;
 external("upd_mana","cool",0);
 sp_active(&current_sprite, 0);
}

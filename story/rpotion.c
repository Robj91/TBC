void main(void)
{
 sp_touch_damage(&current_sprite, -1);
 sp_seq(&current_sprite, 56);
 sp_brain(&current_sprite, 6);
}

void touch(void)
{
 int &hold = sp_editor_num(&current_sprite);
 if (&hold != 0)
 {
  editor_type(&hold, 1); 
 }

 &strength += 1;
 Playsound(10,22050,0,0,0);
 sp_brain_parm(&current_sprite, 5);
 sp_brain(&current_sprite, 12);
 sp_touch_damage(&current_sprite, 0);
 sp_timing(&current_sprite, 0);
}

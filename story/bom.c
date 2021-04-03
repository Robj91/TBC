void main(void)
{
 sp_touch_damage(&current_sprite, -1);
}

void touch(void)
{
 Playsound(10,22050,0,0,0);
 if (&hmbom > 0)
 {
  &hmbom += 1;
 }
 else
 {
  &hmbom += 1;
  add_item("item-bom", 438, 3);
  &hmbom = 1;
 }
 if (&hmbom == 1) say("I found a bomb! I have &hmbom bomb.", 1); 
 if (&hmbom > 1) say("I found a bomb! I have &hmbom bombs", 1);
 sp_brain_parm(&current_sprite, 3);
 sp_brain(&current_sprite, 12);
 sp_touch_damage(&current_sprite, 0);
 sp_timing(&current_sprite, 0);
 int &hold = sp_editor_num(&current_sprite);
 if (&hold != 0)
 editor_type(&hold, 1);
 sp_notouch(&current_sprite, 1);
 sp_nohit(&current_sprite, 1);
 sp_hard(&current_sprite, 1);
 draw_hard_sprite(&current_sprite);
 sp_active(&current_sprite, 0); 
}
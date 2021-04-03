void main(void)
{
 if (&sgchar == 1)
 {
  sp_nodraw(&current_sprite, 1);
  sp_hard(&current_sprite, 1);
  sp_active(&current_sprite, 0);
  draw_hard_map();
  kill_this_task();
 }
 screenlock(1);
 sp_touch_damage(&current_sprite, -1);
}

void hit(void)
{
 freeze(1);
 int &slay = &current_sprite;
 script_attach(0);
 sp_script(&slay, "l1-nboss");
 unfreeze(1);
}

void touch(void)
{
 freeze(1);
 int &slay = &current_sprite;
 script_attach(0);
 sp_script(&slay, "l1-nboss");
 unfreeze(1);
} 
void main(void)
{
 if (&sgchar == 1)
 {
  int &roc = &current_sprite;
  script_attach(0);
  sp_script(&roc, "l1-rockp2");
  kill_this_task();
 }
}

void talk(void)
{
 say("I wonder how this rock got here...", 1);
}

void hit(void)
{
 int &checkb = compare_sprite_script(&missle_source, "dam-bomn");
 if (&checkb == 1)
 {
  sp_hard(&current_sprite, 1);
  draw_hard_map();
  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
  editor_type(&hold, 1);
  sp_active(&current_sprite, 0);
  playsound(43, 22050, 0,0,0);
  return;
 }
 say("I command you to crumble!", 1);
}

void push(void)
{
 say("It wont budge", 1);
}
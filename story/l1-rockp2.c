void main(void)
{
 int &hold;
}

void talk(void)
{
 say("`6This rock looks quite solid.. I don't think I can move it..", 1);
}

void push(void)
{
 say("`6Nope... it won't move at all..", 1);
}

void hit(void)
{
 int &checkb = compare_sprite_script(&missle_source, "dam-bomn");
 if (&checkb == 1)
 { 
  freeze(1);
  sp_hard(&current_sprite, 1);
  draw_hard_map();
  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
  editor_type(&hold, 1);
  sp_nodraw(&current_sprite, 1);
  wait(500);
  say_stop("`6Alright!  Let's go.. I'll lead the way.", 1);
  
  &hold = 0;
 cloop:
  wait(0);
  &hold = get_next_sprite_with_this_brain(16, 0, &hold);
  if (&hold > 0)
  {
   set_smooth_follow(1);
   sp_follow(&hold, 1);
   &hold += 1;
   goto cloop;
  }
  &hold = sp_x(1, -1);
  if (&x < 365) move_stop(1, 6, 378, 1);
  if (&x > 457) move_stop(1, 4, 449, 1);
  
  move_stop(1, 8, -80, 1);
 }
 say("I command you to crumble!", 1);
}
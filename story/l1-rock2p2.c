void main(void)
{
 int &roc = sp_editor_num(&current_sprite);
 editor_type(&roc, 0);
 int &l1roc = editor_seq(&roc, -1);

 if (&l1roc == 1)
 {
  sp_x(&current_sprite, 191);
  draw_hard_map();
  return;
 }
 
 sp_speed(&current_sprite, 2);
}

void talk(void)
{
 say("`6Looks like there's an opening under this rock..", 1);
}

void push(void)
{
 if (&l1roc != 1)
 {
  int &mydir = sp_dir(1, -1);

  if (&mydir != 6) 
  {
   say("`6I can't seem to move it from this angle..", 1);
  }
  else
  {
   freeze(1);

   if (&knight != 100)
   {
    &knight = 100;
   }   
   
   move_stop(&current_sprite, 6, 191, 1);
   say("`6Now I wonder where that leads...", 1); 
   &l1roc = 1;
   editor_seq(&roc, &l1roc);
   draw_hard_map();
   unfreeze(1);
  }
 }
}
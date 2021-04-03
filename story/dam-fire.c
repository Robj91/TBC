void main(void)
{
 //Make the variables
 int &mcrap;
 int &scrap;
 int &junk;
}

void damage(void)
{
 playsound(18, 8000,0,0,0);

 &scrap = &current_sprite;
 kill_shadow(&scrap);
 sp_seq(&scrap, 70);
 sp_pseq(&scrap, 70);
 sp_frame(&scrap, 1);
 sp_brain(&scrap, 7);
 &mcrap = sp_y(&scrap, -1);
 &mcrap -= 35;
 sp_y(&scrap, &mcrap);

 &mcrap = sp_pseq(&missile_target, -1);
 &scrap = sp_pframe(&missile_target, -1);
 int &hold = sp_editor_num(&missile_target);

 if (&mcrap == 32)
 {
  if (&scrap == 1)
  {
   sp_hard(&missile_target, 1);
   draw_hard_sprite(&missile_target);
   &junk = is_script_attached(&missile_target);
   if (&junk > 0)
   {
    run_script_by_number(&junk, "DIE");
    return;
   }
   if (&hold != 0)
   {
    //this was placed by the editor, lets make the tree stay burned
    //and make the seq/frame be shown as background in the future
    editor_type(&hold, 4); 
    editor_seq(&hold, 20);
    editor_frame(&hold, 29); 
   }
   sp_pseq(&missile_target, 20);
   sp_pframe(&missile_target, 29);
   sp_hard(&missile_target, 0);
   draw_hard_sprite(&missile_target);
   sp_seq(&missile_target, 20);
   playsound(6, 8000,0,&missile_target,0); 
  }
 }
}

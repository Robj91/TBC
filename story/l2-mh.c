void main(void)
{
 sp_nodraw(&current_sprite, 1);
 
 int &mvar;
 int &mseq;
 int &storm;
 
 &mseq = get_sprite_with_this_brain(20, 0);
 
 &mvar = sp_editor_num(&mseq);
 editor_type(&mvar, 0);
 &mseq = editor_seq(&mvar, -1);
 
 if (&mseq == 0)
 {
  kill_this_task();
 }
 if (&mseq == 1)
 {
  if (&story == 1)
  {
   &storm = create_sprite(272, 136, 0, 417, 1);
   sp_base_walk(&storm, 410);
   sp_speed(&storm, 2);   
  
   &girl = create_sprite(342, 238, 0, 339, 1);
   sp_base_walk(&girl, 330);
   sp_speed(&girl, 3);  
  
   if (&knight != 99)
   {
    &knight = create_sprite(483, 185, 0, 287, 1);
    sp_base_walk(&knight, 280);
    sp_speed(&knight, 3);
    sp_timing(&knight, 33);
   }     
 
   sp_dir(1, 8);
   wait(500);
   say_stop("Alright, I wonder where this library is..", 1);
  }
 }
}
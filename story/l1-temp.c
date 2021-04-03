void main(void)
{
 sp_nodraw(&current_sprite, 1);
 &temphold = &current_sprite;
 
 int &logvar = sp_editor_num(&current_sprite);
 editor_type(&logvar, 0);
 int &l1log = editor_seq(&logvar, -1);

 if (&guy != 99)
 {
  &l1log = 1;
  editor_seq(&logvar, &l1log);
 }
 if (&guy == 99)
 {
  if (&l1log < 2)
  {
   &l1log = 0;
   editor_seq(&logvar, &l1log);
  }
 }

 if (&l1log == 0)
 {
  int &slay = create_sprite(200, 180, 0, 647, 1);
  sp_base_walk(&slay, 640);
  sp_speed(&slay, 2); 
  int &slay2 = create_sprite(179, 127, 0, 647, 1);
  sp_base_walk(&slay2, 640);
  sp_speed(&slay2, 2); 
  sp_script(&slay, "l1-boss");
  sp_script(&slay2, "l1-boss");
  &l1log = 2;
  editor_seq(&logvar, &l1log);
 }
}
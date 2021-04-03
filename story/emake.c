void medium(void)
{
 &save_x = sp_x(&current_sprite, -1);
 &save_y = sp_y(&current_sprite, -1);
 int &mcrap = random(20,1);
 if (&mcrap == 1)
 {
  int &crap = create_sprite(&save_x, &save_y, 6, 178, 4);
  sp_script(&crap, "mgold");
 }
}


void large(void)
{
 &save_x = sp_x(&current_sprite, -1);
 &save_y = sp_y(&current_sprite, -1);
 int &mcrap = random(20,1);
 int &crap = create_sprite(&save_x, &save_y, 6, 178, 4);
 sp_script(&crap, "lgold");
}


void xlarge(void)
{
 &save_x = sp_x(&current_sprite, -1);
 &save_y = sp_y(&current_sprite, -1);
 int &mcrap = random(20,1);
 if (&mcrap == 1)
 {
  int &crap = create_sprite(&save_x, &save_y, 6, 178, 4);
  sp_script(&crap, "gold200");
 }
}


void small(void)
{
 &save_x = sp_x(&current_sprite, -1);
 &save_y = sp_y(&current_sprite, -1);
 int &mcrap = random(3,1);
 if (&mcrap == 1)
  {
   //lets give 'em a small heart
   int &crap = create_sprite(&save_x, &save_y, 6, 54, 1);
   sp_script(&crap, "sheart");
   return;
  }
 return;
}



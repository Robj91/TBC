void main( void )
{
 int &mcrap;
 int &scrap;
 int &crapx;
 int &crapy;
 int &junk;
}

void damage( void )
{
 &crapx = sp_x(&current_sprite, -1);
 &crapy = sp_y(&current_sprite, -1);

 if (&missile_target == 0)
 {
  kill_shadow(&current_sprite);
  sp_active(&current_sprite, 0);
 }

 if (sp_brain(&missile_target, -1) == 0)
 {
  kill_shadow(&current_sprite);
  sp_active(&current_sprite, 0);
 }
 
 if (sp_brain(&missile_target, -1) == 6)
 {
  kill_shadow(&current_sprite);
  sp_active(&current_sprite, 0);
 }

 &scrap = create_sprite(&crapx, &crapy, 0, 94, 1);
 sp_seq(&scrap, 94);
 sp_pseq(&scrap, 94);
 sp_frame(&scrap, 1);
 sp_brain(&scrap, 11);
 sp_touch_damage(&scrap, 6);
 sp_speed(&scrap, 0);
 sp_nohit(&scrap, 1);

  &mcrap = sp_y(&scrap, -1);
// &mcrap -=35; 
  sp_y(&scrap, &mcrap);
  sp_script(&scrap, "dam-sicee");

 &mcrap = sp_pseq(&missile_target, -1);
 &scrap = sp_pframe(&missile_target, -1);

 if (&mcrap == 32)
 {
  if (&scrap == 1)
  {

  }
 }

}

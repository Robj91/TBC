void main(void)
{
 if (&sgchar == 1)
 {
  int &roc = &current_sprite;
  script_attach(0);
  sp_script(&roc, "l1-rock2p2");
  kill_this_task();
 }

 if (&story <= 1) return;
 
 if (&story >= 2) sp_x(&current_sprite, 191);

 draw_hard_map();
}
 
 
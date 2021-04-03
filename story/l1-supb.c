void main(void)
{
 if (&sgchar == 1)
 {
  int &sup = &current_sprite;
  script_attach(0);
  sp_script(&sup, "l1-supbp2");
  kill_this_task();
 }
}

void talk(void)
{
 if (&player_map == 704) say("This is a support beam, it helps to hold up the roof of my house.", 1);
 if (&player_map == 736) say("I'm surprised the earthquake hasn't cause these support beams to fall", 1);
}

void hit(void)
{
 if (&player_map == 704) say("Die support beam, which holds up the roof!", 1);
 if (&player_map == 736) say("Fall over, support beam!", 1);
}
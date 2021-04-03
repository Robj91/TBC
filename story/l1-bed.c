void main(void)
{
 if (&sgchar == 1)
 {
  int &bed = &current_sprite;
  script_attach(0);
  sp_script(&bed, "l1-bedp2");
  kill_this_task();
 }
}

void talk(void)
{
 if (&player_map == 736) say("This is Ethels bed.", 1);
 if (&player_map == 672) say("I don't think now is the good time for a sleep.", 1);
}

void hit(void)
{
 if (&player_map == 736) say("You must suffer the same fate as Ethel!", 1);
 if (&player_map == 672) say("Come on bed.... you want a piece of me? Bring it on!", 1);
}
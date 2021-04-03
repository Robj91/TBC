void main(void)
{
 int &check;
 say("`6I'm still out of mana Dink.... I can't fight!", &current_sprite);
 wait(200);
 say("Don't worry, I'll protect you.", 1);
 sp_brain(&current_sprite, 10);
 sp_speed(&current_sprite, 2);
 sp_hitpoints(&current_sprite, 100);
 sp_defense(&current_sprite, 6);
 sp_target(&current_sprite, 0);
}

void hit(void)
{
 &check = sp_hitpoints(&current_sprite, -1);
 sp_target(&current_sprite, 0); 
 if (&check > 50) say("`6Ouch!", &current_sprite);
 if (&check < 51) say("`6I'm severly injured, Dink!", &current_sprite);
}

void die(void)
{
 freeze(1);
 &temphold = 1;
 script_attach(1000);
 fade_down();
 sp_nodraw(1, 1);
 &player_map = 2;
 load_screen();
 draw_screen();
 &temphold = 1;
 fade_up();
 kill_this_task();
}


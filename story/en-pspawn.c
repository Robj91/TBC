//Little insects shot out from the Big Pillbugs

void main( void )
{
	sp_brain(&current_sprite, 9);
	sp_speed(&current_sprite, 1);
	sp_exp(&current_sprite, 5);
	sp_base_walk(&current_sprite, 130);
	sp_base_death(&current_sprite, 140);
	sp_touch_damage(&current_sprite, 10);
	sp_hitpoints(&current_sprite, 5);
	preload_seq(131);
	preload_seq(133);
	preload_seq(141);
	preload_seq(143);
	wait(500);
	sp_target(&current_sprite, 1);
}


void hit( void )
{
sp_target(&current_sprite, 1);
playsound(30, 21050, 4000, &current_sprite, 0);
//lock on to the guy who just hit us
//playsound
}
void die( void )
{
  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
  editor_type(&hold, 6); 
 
&save_x = sp_x(&current_sprite, -1);
&save_y = sp_y(&current_sprite, -1);
//Makes the drops rarer, so player doesn't get spammed with health
&hold = random(5, 1);
if(&hold == 3)
{
	external("emake","small");
}
}

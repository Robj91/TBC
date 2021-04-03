//Big pillbug. Shoots out little pillbugs before letting itself die.

void main( void )
{
sp_brain(&current_sprite, 9);
sp_speed(&current_sprite, 1);
sp_exp(&current_sprite, 400);
sp_base_walk(&current_sprite, 130);
sp_base_death(&current_sprite, 140);
sp_touch_damage(&current_sprite, 15);
sp_hitpoints(&current_sprite, 60);
sp_defense(&current_sprite, 3);
preload_seq(131);
preload_seq(133);
preload_seq(141);
preload_seq(143);

int &count = 0;
int &count2 = 0;
int &stuff = 0;
int &px = 0;
int &py = 0;
}


void hit( void )
{
	sp_target(&current_sprite, &enemy_sprite);
	playsound(30, 21050, 4000, &current_sprite, 0);
	//lock on to the guy who just hit us
	//playsound
	&px = sp_x(&current_sprite, -1);
	&py = sp_y(&current_sprite, -1);
	&py -= 10;
	&px -= 15;
	&count = 0;
	&count2 = 0;
	
	more:
	&stuff = create_sprite(&px, &py, 0, 131, 1);
	sp_size(&stuff, 50);
	sp_script(&stuff, "en-pspawn");
	&px += 10;
	&count += 1;
	wait(10);
	if(&count < 3)
	{
		goto more;
	}
	&py += 10;
	&count2 += 1;
	&count = 0;
	if(&count2 < 2)
	{
		goto more;
	}
}


void die( void )
{
  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
  {
	editor_type(&hold, 6); 
}
 
&save_x = sp_x(&current_sprite, -1);
&save_y = sp_y(&current_sprite, -1);

 external("emake","small");
}

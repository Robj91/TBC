void main( void )
{
 int &mcounter;
 sp_brain(&current_sprite, 10);
 sp_speed(&current_sprite, 2);
 sp_distance(&current_sprite, 50);
 sp_base_walk(&current_sprite, 610);
 sp_base_death(&current_sprite, 550);
 sp_base_attack(&current_sprite, 620);
 sp_strength(&current_sprite, 10);
 sp_hitpoints(&current_sprite, 5000);
 preload_seq(611);
 preload_seq(613);
 preload_seq(617);
 preload_seq(619);
 preload_seq(551);
 preload_seq(553);
 preload_seq(557);
 preload_seq(559);


 preload_seq(622);
 preload_seq(624);
 preload_seq(626);
 preload_seq(628);
}


void hit( void )
{
 playsound(29, 22050,0,&current_sprite, 0);
}

void die( void )
{
 int &hold = sp_editor_num(&current_sprite);
 if (&hold != 0)
 editor_type(&hold, 1); 
}

void attack( void )
{
 playsound(31, 22050,0,&current_sprite, 0);
 &mcounter = random(4000,0);
 sp_attack_wait(&current_sprite, &mcounter);
}



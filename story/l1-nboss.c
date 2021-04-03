void main(void)
{
 screenlock(1);
  playmidi("8.mid");
 int &mcounter;
 sp_brain(&current_sprite, 9);
 sp_speed(&current_sprite, 1);
 
 if (&player_map == 65) sp_timing(&current_sprite, 33);

 if (&player_map != 65) sp_timing(&current_sprite, 0);

 sp_distance(&current_sprite, 60);
 sp_range(&current_sprite, 45);
 sp_frame_delay(&current_sprite, 45);
 sp_exp(&current_sprite, 500);
 sp_base_walk(&current_sprite, 640);
 sp_base_attack(&current_sprite, 630);
 
 if (&player_map == 65) sp_defense(&current_sprite, 7);

 if (&player_map != 65) sp_defense(&current_sprite, 10);

 sp_strength(&current_sprite, 15);
 sp_touch_damage(&current_sprite, 8);
 
 if (&player_map == 65) sp_hitpoints(&current_sprite, 190);
 
 if (&player_map != 65) sp_hitpoints(&current_sprite, 90);
 preload_seq(632);
 preload_seq(634);
 preload_seq(636);
 preload_seq(638);

 preload_seq(641);
 preload_seq(643);
 preload_seq(647);
 preload_seq(649);
 
 if (&player_map != 65) sp_target(&current_sprite, 1);
}


void hit(void)
{
 sp_target(&current_sprite, &enemy_sprite);
 playsound(28, 22050,0,&current_sprite, 0);
 sp_target(&current_sprite, 1);
}

void die(void)
{
 if (get_sprite_with_this_brain(9, &current_sprite) == 0)
 {
  screenlock(0);
  playsound(43, 22050,0,0,0);
 }
 external("emake", "xlarge");
 int &hold = sp_editor_num(&current_sprite);
 if (&hold != 0)
 editor_type(&hold, 1); 
}
void attack(void)
{
 playsound(27, 22050,0,&current_sprite, 0);
 &mcounter = random(4000,0);
 sp_attack_wait(&current_sprite, &mcounter);
}



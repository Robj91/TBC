void main(void)
{
 screenlock(1);
 int &mcounter;
 sp_brain(&current_sprite, 9);
 sp_speed(&current_sprite, 1);
 sp_distance(&current_sprite, 60);
 sp_range(&current_sprite, 45);
 sp_frame_delay(&current_sprite, 45);
 sp_timing(&current_sprite, 0);
 sp_exp(&current_sprite, 600);
 sp_base_walk(&current_sprite, 640);
 sp_base_attack(&current_sprite, 630);
 sp_defense(&current_sprite, 10);
 sp_strength(&current_sprite, 15);
 sp_touch_damage(&current_sprite, 9);
 sp_hitpoints(&current_sprite, 115);
 preload_seq(632);
 preload_seq(634);
 preload_seq(636);
 preload_seq(638);

 preload_seq(641);
 preload_seq(643);
 preload_seq(647);
 preload_seq(649);
 sp_target(&current_sprite, 1);
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
  external("make", "heart");
  playmidi("6.mid");
 }
 int &hold = sp_editor_num(&current_sprite);
 if (&hold != 0)
 editor_type(&hold, 6); 
}
void attack(void)
{
 playsound(27, 22050,0,&current_sprite, 0);
 &mcounter = random(4000,0);
 sp_attack_wait(&current_sprite, &mcounter);
}



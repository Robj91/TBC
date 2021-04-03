void main(void)
{
 int &done = 0;
 int &mcounter;
 int &gete;
redo:
 sp_brain(&current_sprite, 9);
 sp_speed(&current_sprite, 2);
 sp_distance(&current_sprite, 60);
 sp_range(&current_sprite, 45);
 sp_frame_delay(&current_sprite, 45);
 sp_timing(&current_sprite, 0);
 sp_exp(&current_sprite, 500);
 sp_base_walk(&current_sprite, 640);
 sp_base_attack(&current_sprite, 630);
 sp_defense(&current_sprite, 10);
 sp_strength(&current_sprite, 15);
 sp_touch_damage(&current_sprite, 5);
 sp_hitpoints(&current_sprite, 50);
 preload_seq(632);
 preload_seq(634);
 preload_seq(636);
 preload_seq(638);

 preload_seq(641);
 preload_seq(643);
 preload_seq(647);
 preload_seq(649);
 &gete = 0;
 &gete = get_next_sprite_with_this_brain(10, 0, &gete);
 sp_target(&current_sprite, &gete);
 &done = 1;
 playmidi("8.mid");
}


void hit(void)
{
 playsound(28, 22050,0,&current_sprite, 0);
 &gete = 0;
 &gete = get_next_sprite_with_this_brain(10, 0, &gete);
 sp_target(&current_sprite, &gete);
 if (&done == 0) goto redo;
}

void die(void)
{
 if (get_sprite_with_this_brain(9, &current_sprite) == 0)
 {
  screenlock(0);
  playsound(43, 22050,0,0,0);
 }
 int &rand = random(9, 1);
 if (&rand  < 4) external("emake", "xlarge");
 if (&rand == 5) external("make", "heart");
 int &hold = sp_editor_num(&current_sprite);
 if (&hold != 0)
 editor_type(&hold, 6); 
}
void attack(void)
{
 playsound(27, 22050,0,&current_sprite, 0);
 &mcounter = random(4000,0);
 sp_attack_wait(&current_sprite, &mcounter);
 if (&done == 0) goto redo;
}



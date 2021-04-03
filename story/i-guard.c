void main(void)
{
 int &mcounter;
 sp_base_attack(&current_sprite, 730);
 sp_distance(&current_sprite, 60);
 sp_strength(&current_sprite, 10);
 sp_hitpoints(&current_sprite, 5000);
 sp_speed(&current_sprite, 2);
 sp_base_walk(&current_sprite, 280);
 sp_brain(&current_sprite, 9);

 preload_seq(281);
 preload_seq(283);
 preload_seq(287);
 preload_seq(289);
 
 preload_seq(732);
 preload_seq(734); 
 preload_seq(736);
 preload_seq(738);
}

void attack(void)
{
 playsound(36, 22050,0,&current_sprite, 0);
 &mcounter = random(4000,0);
 sp_attack_wait(&current_sprite, &mcounter);
 int &atken = get_rand_sprite_with_this_brain(10, &current_sprite);
 sp_target(&current_sprite, &atken);
}


void hit(void)
{
 int &atken = get_rand_sprite_with_this_brain(10, &current_sprite);
 sp_target(&current_sprite, &atken);
}


void die(void)
{
 int &hold = sp_editor_num(&current_sprite);
 if (&hold != 0)
 editor_type(&hold, 1); 
}



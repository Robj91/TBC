void main(void)
{
 sp_brain(&current_sprite, 10);
 sp_speed(&current_sprite, 3);
 sp_base_walk(&current_sprite, 130);
 sp_base_death(&current_sprite, 140);
 sp_hitpoints(&current_sprite, 40);
 preload_seq(131);
 preload_seq(133);
 preload_seq(141);
 preload_seq(143);
}


void hit(void)
{
 playsound(30, 21050, 4000, &current_sprite, 0);
}

void die(void)
{
 int &hold = sp_editor_num(&current_sprite);
 if (&hold != 0)
 editor_type(&hold, 1); 
}

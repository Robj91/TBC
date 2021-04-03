void main(void)
{
 sp_brain(&current_sprite, 16);
 sp_base_walk(&current_sprite, 330);
 sp_speed(&current_sprite, 1);
 sp_timing(&current_sprite, 33);
}

void talk(void)
{
 
}

void hit(void)
{
 playsound(50, 22050, 0, &current_sprite, 0);
}




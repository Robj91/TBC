//changes height variable to 1 so we know Dink will be on ground level

void main( void )
{
sp_nodraw(&current_sprite, 1);
sp_nohit(&current_sprite, 1);
sp_hard(&current_sprite, 1);
draw_hard_sprite(&current_sprite);
sp_touch_damage(&current_sprite, -1);
}

void touch( void )
{
&height = 0;
}
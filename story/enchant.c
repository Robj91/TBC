void main(void)
{
 int &myx = sp_x(1,-1);
 int &myy = sp_y(1,-1);
 int &enchant = create_sprite(&myx,&myy,7,864,1);
 sp_seq(&enchant,864);
 sp_nohit(&enchant,1);
 sp_que(&enchant,1000);
 kill_this_task();
}
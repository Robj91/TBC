//attatched to castle walls (exterior)
//changes y cord of certain walls so Dink isn't hidden when he's not supposed to be

void main( void )
{

 int &my_seq = sp_pseq(&current_sprite, -1);
 int &my_frame = sp_pframe(&current_sprite, -1);

if (&height == 1)
{

//new walls
 if (&my_seq == 15)
  {
  
  if (&my_frame == 1)
  sp_que(&current_sprite, -100);

  if (&my_frame == 3)
  sp_que(&current_sprite, -100);       
  
  if (&my_frame == 5)
  sp_que(&current_sprite, -100);

  if (&my_frame == 6)
  sp_que(&current_sprite, -100);
  
  }
  
  //end if &height;
  }
  //end main
  }
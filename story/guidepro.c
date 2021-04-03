//Guided Arrow Script,  Copyright Alien Dmod Productions...
void main(void)
{
 //SETTINGS
 sp_speed(&current_sprite, 3);
 sp_timing(&current_sprite, 0);
 sp_touch_damage(&current_sprite, 1);


 // 0  = not, 1  = arrow,  2  = axe
 int &setanim = 2;

 int &guidex;
 int &guidey;
 int &guidedx;
 int &guidedy;

 int &setdirA;
 int &setdirB;

 //Calculation part

 CALC:
 wait(100);

 &guidex = sp_x(&current_sprite, -1);
 &guidey = sp_y(&current_sprite, -1);
 &guidedx = sp_x(1, -1);
 &guidedy = sp_y(1, -1);

 if (&guidex == &guidedx)
 {
  &setdirA = 0;
 }

 if (&guidex > &guidedx)
 {
  &setdirA = 1;
 }

 if (&guidex < &guidedx)
 {
  &setdirA = 2;
 }

 if (&guidey == &guidedy)
 {
  &setdirB = 0;
 }

 if (&guidey > &guidedy)
 {
  &setdirB = 1;
 }

 if (&guidey < &guidedy)
 {
  &setdirB = 2;
 }


//Draw or Do part

 if (&setanim == 1)
 {
  goto GARROW;
 }

 if (&setanim == 2)
 {
  goto GAXE;
 }


 if (&setdirB == 1)
 {
  move_stop(&current_sprite, 8, &guidedy, 1);
 }

 if (&setdirA == 1)
 {
  move_stop(&current_sprite, 4, &guidedx, 1);
 }

 if (&setdirA == 2)
 {
  move_stop(&current_sprite, 6, &guidedx, 1);
 }

 if (&setdirB == 1)
 {
  move_stop(&current_sprite, 8, &guidedy, 1);
 }

 if (&setdirB == 2)
 {
  move_stop(&current_sprite, 2, &guidedy, 1);
 }

 goto CALC;

GARROW:

 if (&setdirA == 1)
 {
  sp_pframe(&current_sprite, 4);
  move_stop(&current_sprite, 4, &guidedx, 1);
 }

 if (&setdirA == 2)
 {
  sp_pframe(&current_sprite, 6);
  move_stop(&current_sprite, 6, &guidedx, 1);
 }

 if (&setdirB == 1)
 {
  sp_pframe(&current_sprite, 8);
  move_stop(&current_sprite, 8, &guidedy, 1);
 }

 if (&setdirB == 2)
 {
  sp_pframe(&current_sprite, 2);
  move_stop(&current_sprite, 2, &guidedy, 1);
 }

 goto CALC;

GAXE:
 if (&setdirA == 1)
 {
  sp_pframe(&current_sprite, 8);
  move_stop(&current_sprite, 4, &guidedx, 1);
 }

 if (&setdirA == 2)
 {
  sp_pframe(&current_sprite, 3);
  move_stop(&current_sprite, 6, &guidedx, 1);
 }

 if (&setdirB == 1)
 {
  sp_pframe(&current_sprite, 1);
  move_stop(&current_sprite, 8, &guidedy, 1);
 }

 if (&setdirB == 2)
 {
  sp_pframe(&current_sprite, 6);
  move_stop(&current_sprite, 2, &guidedy, 1);
 }

 goto CALC;
}

void hit(void)
{
 sp_kill(&current_sprite, 1);
}

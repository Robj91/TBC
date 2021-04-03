void main(void)
{
 int &dvar = sp_editor_num(&current_sprite);
 editor_type(&dvar, 0);
 int &l1d = editor_seq(&dvar, -1);
 
 if (&l1d == 0)
 {
  wait(250);
  say("`2It's too strong.. use the bombs.. blow the bastard to pieces!", &current_sprite);
  &l1d = 1;
  editor_seq(&dvar, &l1d);
  return;
 }
 if (&l1d == 1)
 {
  return;
 }
}
  
void talk(void)
{
 say("`6He's dead...", 1);
}
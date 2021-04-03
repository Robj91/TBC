void main(void)
{
 int &botvar = sp_editor_num(&current_sprite);
 editor_type(&botvar, 0);
 int &l1bot = editor_seq(&botvar, -1);
 int &check;
}

void talk(void)
{
 if (&l1bot == 0)
 {
  &check = count_item("item-alc");
  if (&check == 0)
  {
   freeze(1);
   choice_start();
   set_y 240
   title_start();
   "The cupboard is stacked with a range of different liquor bottles"
   title_end();
   "Take a bottle of alcohol"
   "leave"
   choice_end();

	if (&result == 1)
	{
	 add_item("item-alc", 34, 13);
         Playsound(10,22050,0,0,0);
	 say_stop("`6You never know when this could prove useful!", 1);
	 &l1bot = 1;
	 editor_seq(&botvar, &l1bot);
	}
   unfreeze(1);
   return;
  }
  else
  {
   say("`6Whoever lived here is an alcoholic...", 1);
  }
 }
 if (&l1bot == 1)
 {
  say("`6Whoever lived here is an alcoholic...", 1);
 }
}
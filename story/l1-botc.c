void main(void)
{
 if (&sgchar == 1)
 {
  int &botc = &current_sprite;
  script_attach(0);
  sp_script(&botc, "l1-botcp2");
  kill_this_task();
 }
}

void talk(void)
{ 
 if (&knight != 1) say("There's a heap of liquor up here.", 1);
 
 if (&knight == 1)
 {
  freeze(1);
  &pause = 1;
  choice_start();
  set_y 240
  title_start();
  "The cupboard is stacked with a range of different liquor bottles"
  title_end();
  "Take a closer look"
  "leave""
  choice_end();
  &pause = 0;

   if (&result == 1)
   {
    if (&knight == 1)
    {
     say_stop("Hmmmm.... I think I'll have a closer look", 1);
     wait(200);
     say_stop("Hey, there's a bottle of elixir back there!", 1);
     &knight = 2;
    }
    &pause = 1;
    choice_start(); 
    set_y 240
    title_start();
    "Do you want to take any of the bottles?"
    title_end();
    "Take a bottle of elixir"
    "Take a bottle of elixir and a bottle of alcohol"
    "leave"
    choice_end();
    &pause = 0;
  
       if (&result == 1)
       {
        say_stop("I'll just take a bottle of elixir", 1);
        add_item("item-elix", 438, 11);
        Playsound(10,22050,0,0,0);
        &knight = 3;
       }
       if (&result == 2)
       { 
        say_stop("I'll take a bottle of elixir and a bottle of alcohol", 1);
        add_item("item-elix", 438, 11);
        add_item("item-alc", 34, 13);
        Playsound(10,22050,0,0,0);
        &knight = 3;
       }
   } 
  unfreeze(1);
 }
}
    
void hit(void)
{
 say("Hitting glass is fun!", 1);
}



  
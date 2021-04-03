void use(void)
{
 say("I can't use this", 1);
}

void disarm(void)
{
 kill_this_task();
}

void arm(void)
{

}

void pickup(void)
{
 kill_this_task();
}

void drop(void)
{
 draw_status();
 kill_this_task();
}
void main(void)
{
 int &howmany = sripts_used();
 int &howmany2 = var_used();
 loop:
 wait(200);
 &howmany = scripts_used();
 &howmany2 = var_used();
 say("&howmany scripts are being used, &howmany2 vars are being used", 1);
 goto loop;
}
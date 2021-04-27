if((c != 'y') || (c != 'Y')) return ;

length = (length < BUFSIZE) ? length : BUFSIZE; 

if(flag) flag = 0;
else flag = 1;

if(*line == '"') quote = 1;
else quote = 0;

bit = (val & 1) ? 1 : 0;

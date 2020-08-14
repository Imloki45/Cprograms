char *l,*m,c;
//m=l;
for(c='a';c<='z';c++)
*m++=c;
*m=NULL;
for(m=l;m!=NULL;m++)
putchar(*m);

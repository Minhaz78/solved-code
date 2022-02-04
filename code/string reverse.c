int main()
{
    int i,length;
char word[]="minhaz";
char reverseword="";
length=strlen(word);
for( i=length-1;i>=0;i--)
{
char letter=word[i];
reverseword=reverseword+letter;
}
printf("%s",reverseword);

}

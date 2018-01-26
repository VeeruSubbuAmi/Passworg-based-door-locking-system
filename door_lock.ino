#include<LiquidCrystal.h>
LiquidCrystal lcd(9,8,5,4,3,2);
int r1=22;
int r2=24;
int r3=26;
int r4=28;
int once=0;
int c1=30;
int c2=32;
int c3=34;
int c4=36;
int numbers=3;
int scr=0;
int memdata[3]={1234,1842,1120};
int count=0;
int pass[4]={};
int spec;
int passcheck=0;
int passenter=0;
int password=0;
int newpassword=0;
int newpass[4]={};
int index=0;
int option=0;
int wel;
int start=0;
int vv=0;
void setup()
{
  Serial.begin(9600);
  
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);

  pinMode(c1,INPUT);
  pinMode(c2,INPUT);
  pinMode(c3,INPUT);
  pinMode(c4,INPUT);
  pinMode(31,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(35,OUTPUT);
  pinMode(37,OUTPUT);
  lcd.begin(20,4);
  pinMode(13,OUTPUT);
  lcd.setCursor(0,0);
  lcd.print(" ROBOTICS CLUB ");
  lcd.setCursor(0,1);
  lcd.print("Enter Password:");
 
}
void loop()
{
  digitalWrite(c1,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(c4,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,HIGH);
  if(digitalRead(c4)==0)
  {
    if(passcheck==1&& option==1)
    {
      option=0;
      passcheck=1;
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Enter Option:");
    }
  }
   digitalWrite(c1,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(c4,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  if(digitalRead(c4)==0)
  {
      Serial.println("15");
      spec=15;
      wel=0;
 
  if(wel==0){
    wel=1;
   lcd.setCursor(0,0);
   lcd.clear();
   lcd.print("  THANK YOU");
  lcd.setCursor(0,1);
  lcd.print(" VISIT AGAIN ");
  delay(3000);
    }
  lcd.setCursor(0,0);
   lcd.print("ROBOTICS CLUB ");
  lcd.setCursor(0,1);
  lcd.print("Enter Password:   ");
  passcheck=0;
  passenter=0;
  index=0;
  option=0;
  once=0;
  newpassword=0;
  spec=0;
  count=0;
  password=0;
  scr=0;
  start=0;
  }
  digitalWrite(c1,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(c4,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  if(digitalRead(c4)==0)
  {   lcd.clear();
      lcd.setCursor(0,0);
     lcd.print("Enter Again:");
      Serial.println("13");
      count=0;
      passenter=0;
      password=0;
      newpassword=0;
  }
  digitalWrite(c1,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(c4,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==0)
  {
   pass[count]=1;
   count++;
    lcd.setCursor(0,1);
    if(count==1)
    {
       lcd.clear();
      lcd.print("  password:  *     ");
      Serial.println("entered");
     Serial.println("1");
    }
    else if(count==2)
    { lcd.clear();
      lcd.print(" password: **");
      Serial.println("entered");
      Serial.println("1");
    }
    else if(count==3)
    { lcd.clear();
      lcd.print(" password:***");
      Serial.println("entered");
      Serial.println("1");
    }
    else if(count==4)
    { lcd.clear();
      lcd.print(" password:****");
      Serial.println("entered");
      Serial.println("1");
    }
  }
  else if(digitalRead(c2)==0)
  {
    pass[count]=2;
   count++;
     lcd.setCursor(0,0);
   if(count==1)
   {
       lcd.clear();
      lcd.print("  password:  *     ");
      Serial.println("entered");
      Serial.println("2");
   }
    else if(count==2)
    {
       lcd.clear();
      lcd.print(" password: **");
      Serial.println("entered");
      Serial.println("2");
    }
    else if(count==3)
    {
      lcd.clear();
      lcd.print(" password: ***");
      Serial.println("entered");
      Serial.println("2");
    }
    else if(count==4)
    {
      lcd.clear();
      lcd.print(" password: ****");
      Serial.println("entered");
      Serial.println("2");
    }
  }
  else if(digitalRead(c3)==0)
  {
    pass[count]=3;
   count++;
     lcd.setCursor(0,0);
   if(count==1)
   {
     lcd.clear();
      lcd.print(" password: *");
      Serial.println("entered");
      Serial.println("3");
      }
    else if(count==2){
      
         lcd.clear();
      lcd.print(" password: **");
      Serial.println("entered");
      Serial.println("3");
    }
    else if(count==3){
      lcd.clear();
      lcd.print(" password: ***");
      Serial.println("entered");
      Serial.println("3");
    }
    else if(count==4){
     
      lcd.clear();
      lcd.print(" password: ****");
      Serial.println("entered");
      Serial.println("3");
    }
  }
  
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==0)
  {
    pass[count]=4;
   count++;
     lcd.setCursor(0,0);
   if(count==1){
      lcd.clear();
      lcd.print(" password: *");
      Serial.println("entered");
      Serial.println("4");
   }
    else if(count==2)
      {
      lcd.clear();
      lcd.print(" password: **");
      Serial.println("entered");
      Serial.println("4");
   }
    else if(count==3)
    {
      lcd.clear();
      lcd.print(" password: ***");
      Serial.println("entered");
      Serial.println("4");
   }
      
    else if(count==4)
    {
      lcd.clear();
      lcd.print(" password: ****");
      Serial.println("entered");
      Serial.println("4");
   }
      
  }
  else if(digitalRead(c2)==0)
  {
    pass[count]=5;
   count++;
     lcd.setCursor(0,0);
    if(count==1)
    {
      lcd.clear();
      lcd.print(" password: *");
      Serial.println("entered");
      Serial.println("5");
   }
      
    else if(count==2)
    {
      lcd.clear();
      lcd.print(" password: **");
      Serial.println("entered");
      Serial.println("5");
   }
      
    else if(count==3)
    {
      lcd.clear();
      lcd.print(" password: ***");
      Serial.println("entered");
      Serial.println("5");
   }
      
    else if(count==4)
    {
      lcd.clear();
      lcd.print(" password: ****");
      Serial.println("entered");
      Serial.println("5");
   }
   }
  else if(digitalRead(c3)==0)
  {
    pass[count]=6;
   count++;
     lcd.setCursor(0,0);
    if(count==1)
    {
      lcd.clear();
      lcd.print(" password: *");
      Serial.println("entered");
      Serial.println("6");
   }
      
    else if(count==2)
    {
      lcd.clear();
      lcd.print(" password: **");
      Serial.println("entered");
      Serial.println("6");
   }
      
    else if(count==3)
    {
      lcd.clear();
      lcd.print(" password: ***");
      Serial.println("entered");
      Serial.println("6");
   }
   else if(count==4)
   {
      lcd.clear();
      lcd.print(" password: ****");
      Serial.println("entered");
      Serial.println("6");
   }
      
  }
 
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==0)
  {
    pass[count]=7;
   count++;
     lcd.setCursor(0,0);
    if(count==1)
    {
      lcd.clear();
      lcd.print(" password: *");
      Serial.println("entered");
      Serial.println("7");
   }
     
    else if(count==2)
    {
      lcd.clear();
      lcd.print(" password: **");
      Serial.println("entered");
      Serial.println("7");
   }
      
    else if(count==3)
     {
      lcd.clear();
      lcd.print(" password: ***");
      Serial.println("entered");
      Serial.println("7");
   }
      
    else if(count==4)
     {
      lcd.clear();
      lcd.print(" password: ****");
      Serial.println("entered");
      Serial.println("7");
   }
        }
  else if(digitalRead(c2)==0)
  {
   pass[count]=8;
   count++; 
   lcd.setCursor(0,0);
    if(count==1)
       {
      lcd.clear();
      lcd.print(" password: *");
      Serial.println("entered");
      Serial.println("8");
   }
    else if(count==2)
      {
      lcd.clear();
      lcd.print(" password: **");
      Serial.println("entered");
      Serial.println("8");
   }
    else if(count==3)
      {
      lcd.clear();
      lcd.print(" password: ***");
      Serial.println("entered");
      Serial.println("8");
   }
    else if(count==4)
      {
      lcd.clear();
      lcd.print(" password: ****");
      Serial.println("entered");
      Serial.println("8");
   }
  }
  else if(digitalRead(c3)==0)
  {
    pass[count]=9;
   count++;
     lcd.setCursor(0,0);
   if(count==1)
     {
      lcd.clear();
      lcd.print(" password: *");
      Serial.println("entered");
      Serial.println("9");
   }
    else if(count==2)
      {
      lcd.clear();
      lcd.print(" password: **");
      Serial.println("entered");
      Serial.println("9");
   }
    else if(count==3)
       {
      lcd.clear();
      lcd.print(" password: ***");
      Serial.println("entered");
      Serial.println("9");
   }
    else if(count==4)
       {
      lcd.clear();
      lcd.print(" password: ****");
      Serial.println("entered");
      Serial.println("9");
   }
  }
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  if(digitalRead(c1)==0)
  {
   
  }
  else if(digitalRead(c2)==0)
  {
    pass[count]=0;
   count++;
     lcd.setCursor(0,0);
    if(count==1)
      {
      lcd.clear();
      lcd.print(" password: *");
      Serial.println("entered");
      Serial.println("0");
   }
    else if(count==2)
       {
      lcd.clear();
      lcd.print(" password: **");
      Serial.println("entered");
      Serial.println("0");
   }
    else if(count==3)
       {
      lcd.clear();
      lcd.print(" password: ***");
      Serial.println("entered");
      Serial.println("0");
   }
    else if(count==4)
       {
      lcd.clear();
      lcd.print(" password: ****");
      Serial.println("entered");
      Serial.println("0");
   }
  }
  delay(145);
  if(count==4)
  { 
    passenter=1;
    Serial.println("pwd received");
    
   }
   if(passenter==1)
  {
    count=0;
    int i=0;
    for(i=0;i<4;i++)
   {
      password=password*10+pass[i];
          
   }
     for(i=0;i<numbers;i++)
   {
    if (memdata[i]==password)
    { index=i;
      passcheck=1;
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("ENTER OPTION:");
      break;
    }
   }
   if(passcheck==1)
   {
    Serial.println("pass correct");
   }
   else
   Serial.println("not correct");
  }
if(passcheck==1)
  {
    passenter=0;
    lcd.setCursor(0,0);
   while(option==0)
   {digitalWrite(c1,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(c4,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Invalid option");
    lcd.setCursor(0,1);
    lcd.print(" Please Try Again");
    
  }
  else if(digitalRead(c2)==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Invalid option");
    lcd.setCursor(0,1);
    lcd.print(" Please Try Again");
  }
  else if(digitalRead(c3)==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Invalid option");
    lcd.setCursor(0,1);
    lcd.print(" Please Try Again");
  }
  else if(digitalRead(c4)==0)
  {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("   Thank you     ");
      spec=12;
      Serial.println("12");
      option=1;
  }
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Invalid option");
    lcd.setCursor(0,1);
    lcd.print(" Please Try Again");
  }
  else if(digitalRead(c2)==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Invalid option");
    lcd.setCursor(0,1);
    lcd.print(" Please Try Again");
   }
  else if(digitalRead(c3)==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Invalid option");
    lcd.setCursor(0,1);
    lcd.print(" Please Try Again");
  }
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Invalid option");
    lcd.setCursor(0,1);
    lcd.print(" Please Try Again");
        }
  else if(digitalRead(c2)==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Invalid option");
    lcd.setCursor(0,1);
    lcd.print(" Please Try Again");
  }
  else if(digitalRead(c3)==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Invalid option");
    lcd.setCursor(0,1);
    lcd.print(" Please Try Again");
  }
   /*else if(digitalRead(c4)==0)
  {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("  Thank you  ");
      spec=14;
      Serial.println("14");
      option=1;
  
  }*/
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  if(digitalRead(c1)==0)
  {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("   Thank you  ");
      spec=10;
      Serial.println("10");
      option=1;
      once=1;
  }
  else if(digitalRead(c2)==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Invalid option");
    lcd.setCursor(0,1);
    lcd.print(" Please Try Again");
  }
  else if(digitalRead(c3)==0)
  {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("    Thank you   ");
      spec=11;
      Serial.println("11");
      option=1;
      once=1;
  }
  else if(digitalRead(c4)==0)
  {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("    Thank you    ");
      Serial.println("15");
      spec=15;
      option=1;
  }
    
   }
   if(spec==10)
  {
    spec=0;
    if(once==1)
    {
  digitalWrite(31,HIGH);
  digitalWrite(33,LOW);
  digitalWrite(35,HIGH);
  digitalWrite(37,LOW);
  delay(350);
  digitalWrite(31,LOW);
  digitalWrite(33,LOW);
  digitalWrite(35,LOW);
  digitalWrite(37,LOW);
   delay(350);
   once=2; 
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
  }
  else if(spec==11)
  {
    spec=0;
  if(once==1)
  {
  digitalWrite(31,LOW);
  digitalWrite(33,HIGH);
  digitalWrite(35,LOW);
  digitalWrite(37,HIGH);
  delay(350);
  digitalWrite(31,HIGH);
  digitalWrite(33,LOW);
  digitalWrite(35,HIGH);
  digitalWrite(37,LOW);
   delay(350);
  }

  }
  else if(spec==12)
  {
    spec=0;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Enter New Password: ");
  delay(1000);
  lcd.clear();
  count=0;
  int i=0;
  while(i==0)
  {
  digitalWrite(c1,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(c4,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==0)
  {
   newpass[count]=1;
   count++;
    lcd.setCursor(0,0);
    if(count==1){
      lcd.clear();
      Serial.println("entered");
      Serial.println("1");
      lcd.print("  password:  *     ");
    }
    else if(count==2)
    { lcd.clear();
      Serial.println("entered");
      Serial.println("1");
      lcd.print(" password: **");
    }
    else if(count==3){
      lcd.clear();
      Serial.println("entered");
      Serial.println("1");
      lcd.print(" password: ***");
    }
    else if(count==4)
    {lcd.clear();
      Serial.println("entered");
      Serial.println("1");
      lcd.print(" password: ****");
    }
  }
  else if(digitalRead(c2)==0)
  {
    newpass[count]=2;
   count++;
     lcd.setCursor(0,0);
   if(count==1){
       lcd.clear();
      Serial.println("entered");
      Serial.println("2");
      lcd.print("  password:  *     ");
     }
    else if(count==2){
       lcd.clear();
      Serial.println("entered");
      Serial.println("2");
      lcd.print(" password: **");
    }
    else if(count==3){
       lcd.clear();
      Serial.println("entered");
      Serial.println("2");
      lcd.print(" password: ***");
    }
    else if(count==4){
      lcd.clear();
      Serial.println("entered");
      Serial.println("2");
      lcd.print(" password: ****");
    }
  }
  else if(digitalRead(c3)==0)
  {
    newpass[count]=3;
   count++;
     lcd.setCursor(0,0);
   if(count==1){
       lcd.clear();
      Serial.println("entered");
      Serial.println("3");
      lcd.print("  password:  *  ");
   }
    else if(count==2){
       lcd.clear();
      Serial.println("entered");
      Serial.println("3"); 
       lcd.print(" password: ** ");
    }
    else if(count==3){
       lcd.clear();
      Serial.println("entered");
      Serial.println("3");
      lcd.print(" password: *** ");
    }
    else if(count==4){
        lcd.clear();
      Serial.println("entered");
      Serial.println("3");
       lcd.print(" password: **** ");
    }
  }
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==0)
  {
    newpass[count]=4;
   count++;
     lcd.setCursor(0,0);
   if(count==1){
       lcd.clear();
      Serial.println("entered");
      Serial.println("4");
      lcd.print("  password:  *     ");
   }
    else if(count==2){
      lcd.clear();
      Serial.println("entered");
      Serial.println("4"); 
       lcd.print(" password: ** ");
    }
    else if(count==3){
       lcd.clear();
      Serial.println("entered");
      Serial.println("4");
      lcd.print(" password: ***");
    }
    else if(count==4){
       lcd.clear();
      Serial.println("entered");
      Serial.println("4");
      lcd.print(" password: ****");
    }
  }
  else if(digitalRead(c2)==0)
  {
    newpass[count]=5;
   count++;
     lcd.setCursor(0,0);
    if(count==1){
       lcd.clear();
      Serial.println("entered");
      Serial.println("5");
      lcd.print("  password:  *     ");
    }
    else if(count==2){
       lcd.clear();
      Serial.println("entered");
      Serial.println("5");
      lcd.print(" password: ** ");
    }
    else if(count==3){
      lcd.clear();
      Serial.println("entered");
      Serial.println("5");
      lcd.print(" password: ***");
    }
    else if(count==4){
       lcd.clear();
      Serial.println("entered");
      Serial.println("5");
      lcd.print(" password: ****");
    }
  }
  else if(digitalRead(c3)==0)
  {
    newpass[count]=6;
   count++;
     lcd.setCursor(0,0);
    if(count==1){
       lcd.clear();
      Serial.println("entered");
      Serial.println("6");
      lcd.print("  password:  *     ");
    }
    else if(count==2){
      lcd.clear();
      Serial.println("entered");
      Serial.println("6");
      lcd.print(" password: ** ");
    }
    else if(count==3){
      lcd.clear();
      Serial.println("entered");
      Serial.println("6");
      lcd.print(" password: ***");
    }
    else if(count==4){
       lcd.clear();
      Serial.println("entered");
      Serial.println("6");
      lcd.print(" password: ****");
    }
  }
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,HIGH);
  if(digitalRead(c1)==0)
  {
    newpass[count]=7;
   count++;
     lcd.setCursor(0,0);
    if(count==1){
       lcd.clear();
      Serial.println("entered");
      Serial.println("7");
      lcd.print("  password:  *     ");
    }
    else if(count==2){
      lcd.clear();
      Serial.println("entered");
      Serial.println("7");
      lcd.print(" password: ** ");
    }
    else if(count==3){
       lcd.clear();
      Serial.println("entered");
      Serial.println("7");
      lcd.print(" password: ***");
    }
    else if(count==4){
       lcd.clear();
      Serial.println("entered");
      Serial.println("7");
      lcd.print(" password: ****");
    }
  }
  else if(digitalRead(c2)==0)
  {
   newpass[count]=8;
   count++; 
   lcd.setCursor(0,0);
    if(count==1)
    {
     lcd.clear();
      Serial.println("entered");
      Serial.println("8");
      lcd.print("  password:  *     ");
    }
    else if(count==2)
    {  lcd.clear();
      Serial.println("entered");
      Serial.println("8");
      lcd.print(" password: ** ");
    }
    else if(count==3)
    {  lcd.clear();
      Serial.println("entered");
      Serial.println("8");
      lcd.print(" password: ***");
    }
    else if(count==4)
    { lcd.clear();
      Serial.println("entered");
      Serial.println("8");
      lcd.print(" password: ****");
    }
  }
  else if(digitalRead(c3)==0)
  {
    newpass[count]=9;
   count++;
     lcd.setCursor(0,0);
   if(count==1){
       lcd.clear();
      Serial.println("entered");
      Serial.println("9");
      lcd.print("  password:  *     ");
   }
    else if(count==2){
      lcd.clear();
      Serial.println("entered");
      Serial.println("9");
      lcd.print(" password: ** ");
    }
    else if(count==3){
       lcd.clear();
      Serial.println("entered");
      Serial.println("9");
      lcd.print(" password: ***");
    }
    else if(count==4){
       lcd.clear();
      Serial.println("entered");
      Serial.println("9");
      lcd.print(" password: ****");
    }
  }
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  if(digitalRead(c2)==0)
  {
    newpass[count]=0;
   count++;
     lcd.setCursor(0,0);
    if(count==1){
       lcd.clear();
      Serial.println("entered");
      Serial.println("0");
      lcd.print("  password:  *     ");
    }
    else if(count==2){
       lcd.clear();
      Serial.println("entered");
      Serial.println("0");
      lcd.print(" password: ** ");
    }
    else if(count==3){
       lcd.clear();
      Serial.println("entered");
      Serial.println("0");
      lcd.print(" password: ***");
    }
    else if(count==4){
       lcd.clear();
      Serial.println("entered");
      Serial.println("0");
      lcd.print(" password: ****");
    }
  }
  delay(145);
  if(count==4)
  {
    count=0;
    int newpassword=0;
   for(int j=0;j<4;j++)
   {
    newpassword =10*newpassword+newpass[j];
   }
     memdata[index]=newpassword;
    newpassword=0;
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Password Updated");
    Serial.println("updted");
    spec=0;
    break;
   
  }
  }
      
  }
  else if(spec==15)
  {
  wel=0;
 
  if(wel==0){
    wel=1;
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("THANK YOU");
  lcd.setCursor(0,1);
  lcd.print("   VISIT AGAIN ");
  delay(350);
    }
  lcd.setCursor(0,0);
   lcd.print("ROBOTICS CLUB ");
  lcd.setCursor(0,1);
  lcd.print("Enter Password:   ");
  passcheck=0;
  passenter=0;
  index=0;
  option=0;
  once=0;
  newpassword=0;
  spec=0;
  count=0;
  password=0;
  scr=0;
  start=0;
  }
    
}
else if(passenter==1)
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("WORNG PASSWORD");
  delay(2000);
  lcd.setCursor(0,0);
   lcd.print("ROBOTICS CLUB ");
  lcd.setCursor(0,1);
  lcd.print("Enter Password:   ");
  passcheck=0;
  passenter=0;
  index=0;
  option=0;
  once=0;
  newpassword=0;
  spec=0;
  count=0;
  password=0;
  scr=0;
  start=0;
}
}






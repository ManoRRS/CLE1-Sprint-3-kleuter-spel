#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3E, 16,2 );  // Set the LCD I2C address
LiquidCrystal_I2C lcd2(0x3E, 16,2 );  // Set the LCD I2C address

bool klik1 = true; //Als team 1 een punt heeft dan geeft dat door aan deze var
bool klik2 = true; //Als team 1 een punt heeft dan geeft dat door aan deze var
int scoreTeam1 = 0; // Dit houdt de punten bij van de team
int scoreTeam2 = 0; // Dit houdt de punten bij van de team
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(klik1 == true){ 
    scoreTeam1++;
    lcd.setCursor(0,0); // Set de cursor op de eerste rij
      lcd.print("Team1"); //Print de tekst uit
      lcd.clear(); //Verwijderd de tekst
      lcd.setCursor(0,1); //zet de cursor op de 2de rij
      //Als team1 een punt komt er 'x' op de scherm
      if(scoreTeam1 == 1){
      lcd.clear(); 
      lcd.setCursor(0,0);
      lcd.print("Team1");
      lcd.setCursor(0,1);
      lcd.print("x");
      //Als team1 twee punten heeft komt er 'xx' op de scherm te staan
      }else if(scoreTeam1 == 2){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team1");
      lcd.setCursor(0,1);
      lcd.print("xx");
      //Als team1 drie punten heeft komt er 'xxx' op de scherm te staan
      }else if(scoreTeam1 == 3){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team1");
      lcd.setCursor(0,1);
      lcd.print("xxx");
      //Als team1 vier punten heeft komt er 'xxxx' op de scherm te staan
      }else if(scoreTeam1 == 4){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team1");
      lcd.setCursor(0,1);
      lcd.print("xxxx");
      //Als team1 vijf punten heeft komt er 'xxxxx' op de scherm te staan
      }else if(scoreTeam1 == 5){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team1");
      lcd.setCursor(0,1);
      lcd.print("xxxxx");
      //Als team1 zes punten heeft komt er 'xxxxxx' op de scherm te staan
      }else if(scoreTeam1 == 6){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team1");
      lcd.setCursor(0,1);
      lcd.print("xxxxxx");
      //Als team1 zeven punten heeft komt er 'xxxxxxx' op de scherm te staan
      }else if(scoreTeam1 == 7){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team1");
      lcd.setCursor(0,1);
      lcd.print("xxxxxxx");
      //Als team1 acht punten heeft komt er 'xxxxxxxx' op de scherm te staan
      }else{
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team1 Wint!");
      lcd.setCursor(0,1);
      lcd.print("xxxxxxxx");
  } 
      delay(690);
    if(klik2 == true){
    scoreTeam2++;
      lcd.setCursor(0,0);
      lcd.print("Team1");
      lcd.setCursor(0,1);
      delay(1000);  
      //Als team2 een punt komt er 'x' op de scherm
      if(scoreTeam2 == 1){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team2");
      lcd.setCursor(0,1);
      lcd.print("x");
      //Als team2 twee punten heeft komt er 'xx' op de scherm te staan
      }else if(scoreTeam2 == 2){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team2");
      lcd.setCursor(0,1);
      lcd.print("xx");
        //Als team2 drie punten heeft komt er 'xxx' op de scherm te staan
      }else if(scoreTeam2 == 3){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team2");
      lcd.setCursor(0,1);
      lcd.print("xxx");
        //Als team2 vier punten heeft komt er 'xxxx' op de scherm te staan
      }else if(scoreTeam2 == 4){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team2");
      lcd.setCursor(0,1);
      lcd.print("xxxx");
        //Als team2 vijf punten heeft komt er 'xxxxx' op de scherm te staan
      }else if(scoreTeam2 == 5){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team2");
      lcd.setCursor(0,1);
      lcd.print("xxxxx");
        //Als team2 zes punten heeft komt er 'xxxxxx' op de scherm te staan
      }else if(scoreTeam2 == 6){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team2");
      lcd.setCursor(0,1);
      lcd.print("xxxxxx");
        //Als team2 zeven punten heeft komt er 'xxxxxxx' op de scherm te staan
      }else if(scoreTeam2 == 7){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team2");
      lcd.setCursor(0,1);
      lcd.print("xxxxxxx");
      }else{
        //Als team2 acht punten heeft komt er 'xxxxxxxx' op de scherm te staan
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Team2 Wint!");
      lcd.setCursor(0,1);
      lcd.print("xxxxxxxx");
      } 
      delay(690);
  }
  }
  }

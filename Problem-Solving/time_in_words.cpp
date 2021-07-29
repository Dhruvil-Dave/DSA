#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hour;
    int min;
    cin>>hour;
    cin>>min;
    string h;
    if(min<=30){
        if(hour==1){
            h="one";
        }
        else if(hour==2){
            h="two";
        }
        else if(hour==3){
            h="three";
        }
        else if(hour==4){
            h="four";
        }
        else if(hour==5){
            h="five";
        }
        else if(hour==6){
            h="six";
        }
        else if(hour==7){
            h="seven";
        }
        else if(hour==8){
            h="eight";
        }
        else if(hour==9){
            h="nine";
        }
        else if(hour==10){
            h="ten";
        }
        else if(hour==11){
            h="eleven";
        }
        else if(hour==12){
            h="twelve";
        }
    }else{
        if(hour==1){
            h="two";
        }
        else if(hour==2){
            h="three";
        }
        else if(hour==3){
            h="four";
        }
        else if(hour==4){
            h="five";
        }
        else if(hour==5){
            h="six";
        }
        else if(hour==6){
            h="seven";
        }
        else if(hour==7){
            h="eight";
        }
        else if(hour==8){
            h="nine";
        }
        else if(hour==9){
            h="ten";
        }
        else if(hour==10){
            h="eleven";
        }
        else if(hour==11){
            h="twelve";
        }
        else if(hour==12){
            h="one";
        }
    }






    string m;
    if(min==00){
        m="o' clock";
        cout<<h<<" "<<m;
    }
    else if(min==01){
        m="one minute past";
        cout<<m<<" "<<h;
    }
    else if(min==02){
        m="two minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==03){
        m="three minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==04){
        m="four minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==05){
        m="five minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==06){
        m="six minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==07){
        m="seven minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==8){
        m="eight minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==9){
        m="nine minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==10){
        m="ten minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==11){
        m="eleven minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==12){
        m="twelve minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==13){
        m="thirteen minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==14){
        m="fourteen minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==15){
        m="quarter past";
        cout<<m<<" "<<h;
    }
    else if(min==16){
        m="sixteen minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==17){
        m="seventeen minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==18){
        m="eighteen minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==19){
        m="nineteen minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==20){
        m="twenty minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==21){
        m="twenty one minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==22){
        m="twenty two minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==23){
        m="twenty three minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==24){
        m="twenty four minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==25){
        m="twenty five minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==26){
        m="twenty six minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==27){
        m="twenty seven minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==28){
        m="twenty eight minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==29){
        m="twenty nine minutes past";
        cout<<m<<" "<<h;
    }
    else if(min==30){
        m="half past";
        cout<<m<<" "<<h;
    }
    else if(min==31){
        m="twenty nine minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==32){
        m="twenty eight minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==33){
        m="twenty seven minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==34){
        m="twenty six minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==35){
        m="twenty five minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==36){
        m="twenty four minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==37){
        m="twenty three minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==38){
        m="twenty two minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==39){
        m="twenty one minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==40){
        m="twenty minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==41){
        m="nineteen minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==42){
        m="eighteen minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==43){
        m="seventeen minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==44){
        m="sixteen minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==45){
        m="quarter to";
        cout<<m<<" "<<h;
    }
    else if(min==46){
        m="fourteen minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==47){
        m="thirteen minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==48){
        m="twelve minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==49){
        m="eleven minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==50){
        m="ten minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==51){
        m="nine minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==52){
        m="eight minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==53){
        m="seven minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==54){
        m="six minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==55){
        m="five minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==56){
        m="four minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==57){
        m="three minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==58){
        m="two minutes to";
        cout<<m<<" "<<h;
    }
    else if(min==59){
        m="one minute to";
        cout<<m<<" "<<h;
    }
    return 0;
}

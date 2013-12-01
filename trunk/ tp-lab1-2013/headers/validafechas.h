#ifndef VALIDAFECHAS_H_INCLUDED
#define VALIDAFECHAS_H_INCLUDED

bool comprobarFecha(int dia, int mes, int anio){
    if(mes<=12){
        if(mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12){
            if(dia<=31 and dia>0){
                return true;
            }
        }
        else{
            if(mes==2){
                if(anio%400==0 or (anio%4==0 and anio%100!=0)){
                    if(dia<=29 and dia>0){
                        return true;
                    }
                }
                else{
                    if(dia<=28 and dia>0){
                        return true;
                    }
                }
            }
            else{
                if(dia<=30 and dia>0){
                    return true;
                }
            }
        }
    }
    return false;
}

#endif // VALIDAFECHAS_H_INCLUDED

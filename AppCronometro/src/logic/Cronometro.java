/*
 * Cronometro.java
 * 
 * Created on 7/09/2007, 08:56:17 AM
 * 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package logic;

/**
 *
 * @author alejo
 */
public class Cronometro {
    Horas h;
    Minutos m;
    Segundos s;
    Memoria[] mem;
    Formato f = new Formato();
    
    int memCont;
    
    String cadena;

    public Cronometro() {
        h = new Horas();
        m = new Minutos();
        s = new Segundos();
        mem = new Memoria[5];
        memCont=0;
        
        for(int x=0;x<mem.length;x++){
            mem[x]=new Memoria();
        }
        
        cadena = new String("00 : 00: 00");

    }
    
    public String avanzar(){       
        if(s.forward()==00){
            if(m.forward()==00){
                h.forward();
            }
        }
        
        cadena = f.Formato();
        return cadena;
    }
    
     public String retroceder(){       
        if(s.back()==s.tope){
            if(m.back()==m.tope){
                h.back();
            }
        }
        
        cadena = f.Formato(memCont, memCont, memCont);
        return cadena;
    }
    
    public String reset(){
        s.reset();
        m.reset();
        h.reset();
        cadena = h.valor + " : " + m.valor + " : " + s.valor;
        return cadena;
    }
    
    public String generarMemoria(){
        
        mem[memCont].setMemoria(h.valor,m.valor,s.valor);
        cadena = mem[memCont].getMemoria();
        if(memCont<mem.length-1){
            memCont++;
        }else{
            memCont=0;
        }
        return cadena;
    }

}

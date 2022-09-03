#include<stdio.h>
#include<conio.h>
void main()
{
    float v_in,v_out,i_in,i_out,p_in,p_out;
    float v_gain,i_gain,p_gain,r_in,r_out;
    int choice,choicep;
    printf("Enter 1 to calculate voltage gain,2 for curretn gain,3 for power gain,4 for input resistance,5 for output resistance");
    printf("\nchoose an operation to perform(1,2,3,4,5):");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        printf("\nEnter the values of input voltage and output voltage of a given amplifier:\n");
        scanf("%f%f",&v_in,&v_out);
        v_gain=v_out/v_in;
        printf("\nVoltage gain of a given amplifier is:%f",v_gain);
        break;
        
        case 2:
        printf("\nEnter the values of input current and output current of a given amplifier:\n");
        scanf("%f%f",&i_in,&i_out);
        i_gain=i_out/i_in;
        printf("\nCurrent gain of a given amplifier is:%f",i_gain);
        break;
        
        case 3:
        printf("\nEnter 1 to calculate wrt input power and output power,2 wrt voltage gain and current gain,3 wrt input and output voltage and input and output current");
        printf("\nEnter the choice:");
        scanf("%d",&choicep);
        if(choicep==1)
        {
        printf("\nEnter the values of input power and output power of a given amplifier:\n");
        scanf("%f%f",&p_in,&p_out);
        p_gain=p_out/p_in;
        printf("\nPower gain of a given amplifier is:%f",p_gain);
        }
           else if(choicep==2)
           {
               printf("\nEnter values of voltage gain and current gain:");
               scanf("%f%f",&v_gain,&i_gain);
               p_gain=v_gain*i_gain;
               printf("\nPower gain of a given amplifier is:%f",p_gain);
           }
               else if(choicep==3)
               {
                   printf("\nEnter values of input and ouput voltage and input and output current:\n");
                   scanf("%f%f%f%f",&v_in,&v_out,&i_in,&i_out);
                   p_gain=(v_out*i_out)/(v_in*i_in);
                   printf("\nPower gain of a given amplifier is:%f",p_gain);
               }
        break;
        
        case 4:
        printf("Enter the values of input voltage and input current of a given amplifier:");
        scanf("%f%f",&v_in,&i_in);
        r_in=v_in/i_in;
        printf("\nInput Resistance of a given amplifier:%f",r_in);
        break;
        
        case 5:
        printf("\nEnter the values of output voltage and output current of a given amplifier:\n");
        scanf("%f%f",&v_out,&i_out);
        r_out=v_out/i_out;
        printf("\nOutput Resistance of a given amplifier is:%f",r_out);
        break;
        
        default:
        printf("\nEnter correct choice");
        break;
        
    }
    
}

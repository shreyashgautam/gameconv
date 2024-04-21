#include<iostream>
using namespace std;
#include<set>
#include <cstdlib>
#include <ctime>
#include<string.h>
#include<math.h>
int number() {
    srand(time(0));
    int x=(rand() % 6 + 1);
    return x;
}
void dec_to_bin(int x){
    int rem;
    int bin=0;
    int arr[100000];
    int i=0;
    while(x!=0){
        rem=x%2;
        arr[i]=rem;
        i++;
        x=x/2;
    }
    for(int j=i-1;j>=0;j--){
        bin=bin*10+arr[j];
        
    }
    cout<<"THE BINARY OF THE NUMBER IS : "<<bin;
    cout<<endl;
}
void bin_to_dec(int x){
    int num=0;
    int rem=0;
    int a=0;
   
   
    
    while(x!=0){
        rem=x%10;
       
        num=num+int(pow(2,a))*rem;
        a++;
        x=x/10;
    }
    cout<<"THE DECIMAL NUMBER IS :"<<num;
    cout<<endl;
    
}
int rbin_to_dec(int x){
    int num=0;
    int rem=0;
    int a=0;
   
   
    
    while(x!=0){
        rem=x%10;
       
        num=num+int(pow(2,a))*rem;
        a++;
        x=x/10;
    }
    return num;
}
void dec_to_octal(int x){
    int rem;
    int bin=0;
    int arr[100000];
    int i=0;
    while(x!=0){
        rem=x%8;
        arr[i]=rem;
        i++;
        x=x/8;
    }
    for(int j=i-1;j>=0;j--){
        bin=bin*10+arr[j];
        
    }
    cout<<"THE OCTAL OF THE NUMBER IS : "<<bin;
    cout<<endl;
}
void octal_to_dec(int x){
    int num=0;
    int rem=0;
    int a=0;
    while(x!=0){
        rem=x%10;
       
        num=num+int(pow(8,a))*rem;
        a++;
        x=x/10;
    }
    cout<<"THE DECIMAL NUMBER IS :"<<num;
    cout<<endl;
}
int roctal_to_dec(int x){
    int num=0;
    int rem=0;
    int a=0;
    while(x!=0){
        rem=x%10;
       
        num=num+int(pow(8,a))*rem;
        a++;
        x=x/10;
    }
    return num;
}
void binary_octal(long int bi)
{
    int i=0,rem,sum=0,r[100],len=0;

    while(bi!=0)
    {
        rem=bi%10;
        bi=bi/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        r[i]=sum%8;
        sum=sum/8;
        i++;
        len++;
    }

    printf("\nOctal Number: ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",r[i]);
    }cout<<endl;
}

void binary_hexadecimal(long int bi)
{
    int rem,i=0,sum=0,r[100],len=0;

    while(bi!=0)
    {
        rem=bi%10;
        bi=bi/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        r[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }

    printf("\nHexa-Decimal Number: ");
    for(i=len-1;i>=0;i--)
    {
        switch(r[i])
        {
            case 10:
                printf("A"); 
                break;
            case 11:
                printf("B"); 
                break;
            case 12:
                printf("C"); 
                break;
            case 13:
                printf("D"); 
                break;
            case 14:
                printf("E"); 
                break;
            case 15:
                printf("F"); 
                break;
            default:
                printf("%d",r[i]);
        }
    }cout<<endl;
}
void decToHexa(int n)
{
   
    string ans = "";
   
    while (n != 0) {
        
        int rem = 0;
         
        
        char ch;
        
        rem = n % 16;
 
        if (rem < 10) {
            ch = rem + 48;
        }
        else {
            ch = rem + 55;
        }

        ans += ch;
        n = n / 16;
    }
     
    
    int i = 0, j = ans.size() - 1;
    while(i <= j)
    {
      swap(ans[i], ans[j]);
      i++;
      j--;
    }
    cout<<"Hexa-Decimal Number: "<<ans;cout<<endl;
}
void octal_hexadecimal(long int oct)
{
    int r[50000],len=0,decimal=0,i=0,num,ans=0;
    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }

    i=0;
    while(decimal!=0)
    {
        r[i]=decimal%16;
        decimal=decimal/16;
        i++;
        len++;
    }

    printf("\nHexa-Decimal Number: ");
    
    for(i=len-1;i>=0;i--)
    {
        switch(r[i])
        {
            case 10:
                printf("A"); 
                break;
            case 11:
                printf("B"); 
                break;
            case 12:
                printf("C"); 
                break;
            case 13:
                printf("D"); 
                break;
            case 14:
                printf("E"); 
                break;
            case 15:
                printf("F"); 
                break;
            default:
                printf("%d",r[i]);
        }
    }cout<<endl;
}
void hexadecimal_decimal(char *hexa)
{
    int i,num=0,power=0,decimal=0;

    for(i=strlen(hexa)-1;i>=0;i--)
    {
        if(hexa[i]=='A'||hexa[i]=='a')
            num=10;
        else if(hexa[i]=='B'||hexa[i]=='b')
            num=11;
        else if(hexa[i]=='C'||hexa[i]=='c')
            num=12;
        else if(hexa[i]=='D'||hexa[i]=='d')
            num=13;
        else if(hexa[i]=='E'||hexa[i]=='e')
            num=14;
        else if(hexa[i]=='F'||hexa[i]=='f')
            num=15;
        else
            num=hexa[i]-48;

        decimal=decimal+num*pow(16,power);
        power++;
    }
    printf("\nDecimal Number: %d",decimal);cout<<endl;
}
int rhexadecimal_decimal(char hexa[])
{
    int i,num=0,power=0,decimal=0;

    for(i=strlen(hexa)-1;i>=0;i--)
    {
        if(hexa[i]=='A'||hexa[i]=='a')
            num=10;
        else if(hexa[i]=='B'||hexa[i]=='b')
            num=11;
        else if(hexa[i]=='C'||hexa[i]=='c')
            num=12;
        else if(hexa[i]=='D'||hexa[i]=='d')
            num=13;
        else if(hexa[i]=='E'||hexa[i]=='e')
            num=14;
        else if(hexa[i]=='F'||hexa[i]=='f')
            num=15;
        else
            num=hexa[i]-48;

        decimal=decimal+num*pow(16,power);
        power++;
    }
    return decimal;
}
void hexadecimal_octal(char hexa[])
{
    int i,len,num=0,power=0,decimal=0,rem[100];

    for(i=strlen(hexa)-1;i>=0;i--)
    {
        if(hexa[i]=='A'||hexa[i]=='a')
            num=10;
        else if(hexa[i]=='B'||hexa[i]=='b')
            num=11;
        else if(hexa[i]=='C'||hexa[i]=='c')
            num=12;
        else if(hexa[i]=='D'||hexa[i]=='d')
            num=13;
        else if(hexa[i]=='E'||hexa[i]=='e')
            num=14;
        else if(hexa[i]=='F'||hexa[i]=='f')
            num=15;
        else
            num=hexa[i]-48;

        decimal=decimal+num*pow(16,power);
        power++;
    }

    i=0,len=0;
    while(decimal!=0)
    {
        rem[i]=decimal%8;
        decimal=decimal/8;
        i++;
        len++;
    }

    printf("\nOctal Number: ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
    cout<<endl;
}
void data(){
    cout<<"SNAKE ARE AT POSITION:"<<endl;
    cout<<"1. SNAKE AT 28 BRINGS BACK TO 10"<<endl;
    cout<<"2. SNAKE AT 37 BRINGS BACK TO 3"<<endl;
    cout<<"3. SNAKE AT 48 BRINGS BACK TO 16"<<endl;
    cout<<"4. SNAKE AT 75 BRINGS BACK TO 32"<<endl;
    cout<<"5. SNAKE AT 94 BRINGS BACK TO 71"<<endl;
    cout<<"6. SNAKE AT 96 BRINGS BACK TO 42"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"LADDER ARE AT POSITION:"<<endl;
    cout<<"1. LADDER AT 4 GOES TO 56"<<endl;
    cout<<"2. LADDER AT 12 GOES TO 50"<<endl;
    cout<<"3. LADDER AT 14 GOES TO 55"<<endl;
    cout<<"4. LADDER AT 22 GOES TO 58"<<endl;
    cout<<"5. LADDER AT 41 GOES TO 79"<<endl;
    cout<<"6. LADDER AT 54 GOES TO 88"<<endl;
    cout<<"--------------------------------"<<endl;
}
void exdisplay(int example[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<example[i][j];
            if(j!=2){
            cout<<" | ";
           }
        }
        
        cout<<endl;
        if(i!=2)
        cout<<"----------"<<endl;
        
        
    }
}
int checkrr(char arr[3][3],char choice){
    int ans=0;
    if(arr[0][0]==choice && arr[0][1]==choice && arr[0][2]==choice){
       return 1;
    }
    else if(arr[1][0]==choice && arr[1][1]==choice && arr[1][2]==choice){
        return 1;
    }
    else if(arr[2][0]==choice && arr[2][1]==choice && arr[2][2]==choice){
       return 1;
    }
    else if(arr[0][0]==choice && arr[1][0]==choice && arr[2][0]==choice){
       return 1;
    }
    else if(arr[0][1]==choice && arr[1][1]==choice && arr[2][1]==choice){
       return 1;
    }
    else if(arr[0][2]==choice && arr[1][2]==choice && arr[2][2]==choice){
       return 1;
    }
    else if(arr[0][0]==choice && arr[1][1]==choice && arr[2][2]==choice){
      return 1;
    }
    else if(arr[0][2]==choice && arr[1][1]==choice && arr[2][0]==choice){
        return 1;
    }
    return 0;
}
int allfull(char arr[3][3]){
    int full=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==' '){
                full=1;
            }
        }
    }
    return full;
}
void printmatrix(char arr[3][3]){
     
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<arr[i][j];
           if(j!=2){
            cout<<" | ";
           }
        }
        
        cout<<endl;
        if(i!=2)
        cout<<"---------"<<endl;
        
        
    }
}
int check(char arr[3][3],int x,int n){
    int actual=0;
    int rowa=0;
    if(x>=2){
        actual=x;
        rowa=0;
    }
    else if(x<=3 && x>=5){
        actual=x-3;
        rowa=1;
    }
    else{
        actual=x-6;
        rowa=2;
    }
    if(arr[rowa][actual]==' '){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int choice;
    for(int i=0;;i++){
    cout<<"\nWELCOME TO THE GAMECONV"<<endl;
    cout<<"PRESS 1. TO PLAY TICK TAC TAO"<<endl;
    cout<<"PRESS 2. TO PLAY SNAKE AND LADDER"<<endl;
    cout<<"PRESS 3. TO USE CONVERTER"<<endl;
    cin>>choice;
    if(choice==1){
    cout<<"WELCOME TO TICK TAC TAO"<<endl<<endl;
    cout<<"THIS IS A TWO PLAYER GAME"<<endl<<endl;
    char arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=' ';
        }
    }
    int example[3][3];
    int set=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            example[i][j]=set;
            set++;
        }
    }
    exdisplay(example);
    string a,b;
    cout<<"KINDLY ENTER PLAYER 1 NAME"<<endl;
    cin>>a;
    cout<<"KINDLY ENTER PLAYER 2 NAME"<<endl;
    cin>>b;
    int n=0;
    int ans;
    for(int i=0;;i++){
        if(n%2==0){
            cout<<"THE CHANCE IS OF "<<a<<endl<<endl;
            int pos1;
            cout<<"ENTER THE POSITION WHERE YOU WANT TO ADD  FROM (0 TO 8)"<<endl;
            cin>>pos1;
            if(pos1>8 || pos1<0){
                cout<<"YOU CAN'T PUT  OUTSIDE THE GRID !! "<<endl;
            }
            else if(pos1<=8 && pos1>=0){
                ans=check(arr,pos1,n);
                if(ans==1){
                    int actual=0;
                    int rowa=0;
                    int x=pos1;
                    if(pos1>=2){
                        actual=x;
                        rowa=0;
                    }
                    else if(x<=3 && x>=5){
                       actual=x-3;
                       rowa=1;
                    } 
                    else{
                    actual=x-6;
                    rowa=2;
                    }
                    
                        arr[rowa][actual]='O';
                    
                    
                    printmatrix(arr);
                    if(checkrr(arr,'O')==1){
                        cout<<"CONGRATS "<<a<<" YOU  WON !!!"  <<endl;
                        break;
                    }
                    n++;
                }
                else{
                    cout<<"SORRY THAT POSITION IS ALREADY OCUPIED"<<endl;
                }
            }
        }
        if(allfull(arr)==0){
            cout<<"THE GAME HAS ENDED NO ONE HAS WON THE GAME"<<endl;
            cout<<"TIED"<<endl;
            break;
        }
        
        if(n%2==1){
            cout<<"THE CHANCE IS OF :"<<b<<endl<<endl;
            int pos1;
            cout<<"ENTER THE POSITION WHERE YOU WANT TO ADD  FROM (0 TO 8)"<<endl;
            cin>>pos1;
            if(pos1>8 || pos1<0){
                cout<<"YOU CAN'T PUT  OUTSIDE THE GRID !! "<<endl;
            }
            else if(pos1<=8 && pos1>=0){
                ans=check(arr,pos1,n);
                if(ans==1){
                    int actual=0;
                    int rowa=0;
                    int x=pos1;
                    if(pos1>=2){
                        actual=x;
                        rowa=0;
                    }
                    else if(x<=3 && x>=5){
                       actual=x-3;
                       rowa=1;
                    } 
                    else{
                    actual=x-6;
                    rowa=2;
                    }
                    
                    arr[rowa][actual]='X';
                    
                    
                    printmatrix(arr);
                    if(checkrr(arr,'X')==1){
                        cout<<"CONGRATS "<<b<<" YOU  WON !!!"  <<endl;
                        break;
                    }
                    n++;
                }
                else{
                    cout<<"SORRY THAT POSITION IS ALREADY OCUPIED!!"<<endl;
                }
            }
        }
        
        if(allfull(arr)==0){
            cout<<"THE GAME HAS ENDED NO ONE HAS WON THE GAME"<<endl;
            cout<<"TIED"<<endl;
            break;
        } 
        
    }
    }
    else if(choice==2){
        cout<<"WELCOME TO SNAKE AND LADDER"<<endl;
    int arr[10][10];
    int x=100;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=x;
            x--;
        }
    }
     for(int i=0;i<9;i++){
        cout<<"   ";
        for(int j=0;j<10;j++){
            cout<<arr[i][j]<<"   ";
            
        }
        cout<<endl;
    }
    x=1;
    cout<<"   ";
    for(int i=0;i<10;i++){
        cout<<x<<"    ";
        x++;
    }
    cout<<endl;
    data();
    string a,b;
    cout<<"KINDLY ENTER THE NAME OF PLAYER 1:";
    cin>>a;
    cout<<"\nKINDLY ENTER THE NAME OF PLAYER 2:";
    cin>>b;
    cout<<endl;
    cout<<"IF YOU WANT TO ROLL THE DICE BY YOURSELF PRESS 1 ELSE PRESS 2"<<endl;
    int ccc;
    cin>>ccc;
    int n=0;
    int starta=0;
    int startb=0;
    for(int i=0;;i++){
        if(n%2==0){
            cout<<"THE CHANCE IS OF PLAYER "<<a<<endl;
            if(ccc==1){
            cout<<"KINDLY PRESS ANY LETTER TO ROLL THE DICE"<<endl;
            string ans;
            cin>>ans;}
             x=number();
             cout<<"THE DICE IS ROLLING AND THE VALUE CAME IS "<<x<<endl;
            starta=starta+x;
            if(x!=6){
                n++;
            }
            if(starta==28){
                cout<<"OOPSSS SNAKE BITE"<<endl;
                starta=10;
                
            }
            else if(starta==48){
                cout<<"OOPSSS SNAKE BITE"<<endl;
                starta=16;
                
            }
            else if(starta==37){
                cout<<"OOPSSS SNAKE BITE"<<endl;
                starta=3;
                
            }
            else if(starta==75){
                cout<<"OOPSSS SNAKE BITE"<<endl;
                starta=32;
                
            }
            else if(starta==94){
                cout<<"OOPSSS SNAKE BITE"<<endl;
                starta=10;
                
            }
            else if(starta==96){
                cout<<"OOPSSS SNAKE BITE"<<endl;
                starta=42;
                
            }
            if(starta==4){
                cout<<"YEEEEEHHH LADDER HERE!!!"<<endl;
                starta=56;
                
            }
            else if(starta==12){
                cout<<"YEEEEEHHH LADDER HERE!!!"<<endl;
                starta=50;
                
            }
            else if(starta==14){
                cout<<"YEEEEEHHH LADDER HERE!!!"<<endl;
                starta=55;
                
            }
            else if(starta==22){
                cout<<"YEEEEEHHH LADDER HERE!!!"<<endl;
                starta=58;
                
            }
            else if(starta==41){
                cout<<"YEEEEEHHH LADDER HERE!!!"<<endl;
                starta=79;
                
            }
            else if(starta==54){
                cout<<"YEEEEEHHH LADDER HERE!!!"<<endl;
                starta=88;
                
            }
            if(starta>100){
                starta=starta-x;
            }
            cout<<"CURRENT POSITION IS OF "<<a<<" IS "<<starta<<endl;
            if(x==6){
                cout<<"AS YOU SCORED 6 YOUR CHANCE COMES AGAIN!!"<<endl;
            }
            
        }
        if(starta==100){
            cout<<"CONGRATS "<<a<<" HAS WON THE GAME!!"<<endl;
            break;
        }
        else if(n%2!=0){
            cout<<"THE CHANCE IS OF PLAYER "<<b<<endl;
            if(ccc==1){
            cout<<"KINDLY PRESS ANY LETTER TO ROLL THE DICE"<<endl;
            string ans1;
            cin>>ans1;}
             x=number();
             cout<<"THE DICE IS ROLLING AND THE VALUE CAME IS "<<x<<endl;
            startb=startb+x;
            if(x!=6){
                n++;
            }
            if(startb==28){
                cout<<"SNACK BITE"<<endl;
                startb=10;
                
            }
            else if(startb==48){
                cout<<"SNACK BITE"<<endl;
                startb=16;
                
            }
            else if(startb==37){
                cout<<"SNACK BITE"<<endl;
                startb=3;
                
            }
            else if(startb==75){
                cout<<"SNACK BITE"<<endl;
                startb=32;
                
            }
            else if(startb==94){
                cout<<"SNACK BITE"<<endl;
                startb=10;
                
            }
            else if(startb==96){
                cout<<"SNACK BITE"<<endl;
                startb=42;
                
            }
            if(startb==4){
                cout<<"LADDER HERE!!!"<<endl;
                startb=56;
                
            }
            else if(startb==12){
                cout<<"LADDER HERE!!!"<<endl;
                startb=50;
                
            }
            else if(startb==14){
                cout<<"LADDER HERE!!!"<<endl;
                startb=55;
                
            }
            else if(startb==22){
                cout<<"LADDER HERE!!!"<<endl;
                startb=58;
                
            }
            else if(startb==41){
                cout<<"LADDER HERE!!!"<<endl;
                startb=79;
                
            }
            else if(startb==54){
                cout<<"LADDER HERE!!!"<<endl;
                startb=88;
                
            }
            if(startb>100){
                cout<<"SORRY THIS IS NOT POSIBLE"<<endl;
                startb=startb-x;
            }
            cout<<"CURRENT POSITION IS OF "<<b<<" IS "<<startb<<endl;
            if(x==6){
                cout<<"AS YOU SCORED 6 YOUR CHANCE COMES AGAIN!!"<<endl;
            }
            if(startb==100){
            cout<<"CONGRATS "<<b<<" HAS WON THE GAME!!"<<endl;
            break;
            }
            
        }
    }
    }
    else if(choice==3){
        cout<<"WELCOME TO THE CONVERTER"<<endl;
    cout<<"HOW CAN WE HELP YOU OUT "<<endl;
    cout<<"*************************************************"<<endl;
    cout<<"PRESS 1. TO CONVERT DECIMAL NUMBER TO A BINARY NUMBER"<<endl;
    cout<<"PRESS 2. TO CONVERT BINARY TO DECIMAL"<<endl;
    cout<<"PRESS 3. TO CONVERT DECIMAL TO OCTAL "<<endl;
    cout<<"PRESS 4. TO CONVERT OCTAL TO DECIMAL "<<endl;
    cout<<"PRESS 5. TO CONVERT BINARY TO OCTAL "<<endl;
    cout<<"PRESS 6. TO CONVERT BINARY TO HEXADECIMAL "<<endl;
    cout<<"PRESS 7. TO CONVERT DECIMAL TO HEXADECIMAL "<<endl;
    cout<<"PRESS 8. TO CONVERT OCTAL TO HEXADECIMAL"<<endl;
    cout<<"PRESS 9. TO CONVERT HEXADECIMAL TO DECIMAL"<<endl;
    cout<<"PRESS 10. TO CONVERT HEXADECIMAL TO OCTAL "<<endl;
    cout<<"PRESS 11. TO ADD 2 DECIMAL NUMBERS"<<endl;
    cout<<"PRESS 12. TO ADD 2 BINARY NUMBER"<<endl;
    cout<<"PRESS 13. TO ADD 2 OCTAL NUMBERS"<<endl;
    cout<<"PRESS 14. TO ADD 2 HEXADECIMAL NUMBER"<<endl;
    cout<<"PRESS 15. TO MULTIPLY 2 DECIMAL NUMBERS"<<endl;
    cout<<"PRESS 16. TO MULTIPLY 2 BINARY NUMBER"<<endl;
    cout<<"PRESS 17. TO MULTIPLY 2 OCTAL NUMBERS"<<endl;
    cout<<"PRESS 18. TO MULTIPLY 2 HEXADECIMAL NUMBER"<<endl;
    cout<<"*************************************************"<<endl;
    cout<<"ENTER YOUR CHOICE"<<endl;
    int x;
    
        cin>>x;
        switch(x){
            case 1:
            cout<<"*************************************************"<<endl;
            cout<<"DECIMAL TO BINARY CONVERTER IS HERE"<<endl;
            int w;
            cout<<"KINDLY ENTER THE DECIMAL NUMBER "<<endl;
            cin>>w;
            dec_to_bin(w);
            break;
            case 2:
            cout<<"*************************************************"<<endl;
            cout<<"BINARY TO DECIMAL CONVERTER IS HERE"<<endl;
            int a;
            cout<<"KINDLY ENTER THE BINARY NUMBER "<<endl;
            cin>>a;
            bin_to_dec(a);
                
            
            break;
            case 3:
            cout<<"*************************************************"<<endl;
            cout<<"DECIMAL TO OCTAL CONVERTER IS HERE"<<endl;
            int b;
            cout<<"KINDLY ENTER THE DECIMAL NUMBER "<<endl;
            cin>>b;
            dec_to_octal(b);
            break;
            case 4:
            cout<<"*************************************************"<<endl;
            cout<<"OCTAL TO DECIMAL CONVERTER IS HERE"<<endl;
            int d;
            cout<<"KINDLY ENTER THE OCTAL NUMBER "<<endl;
            cin>>d;
            
            
                octal_to_dec(d);
                
            
            break;
            case 5:
            cout<<"*************************************************"<<endl;
            cout<<"BINARY TO OCTAL CONVERTER IS HERE"<<endl;
            int c;
            cout<<"KINDLY ENTER THE BINARY NUMBER "<<endl;
            cin>>c;
            
                
            
          
                binary_octal(c);
                
            
            break;
            case 6:
            cout<<"*************************************************"<<endl;
            cout<<"BINARY TO HEXADECIMAL IS HERE"<<endl;
            int e;
            cout<<"KINDLY ENTER THE BINARY NUMBER "<<endl;
            cin>>e;
           
                
            
            
                binary_hexadecimal(e);
                
            
            break;
            case 7:
            cout<<"*************************************************"<<endl;
            cout<<"DECIMAL TO HEXADECIMAL IS HERE"<<endl;
            int f;
            cout<<"KINDLY ENTER THE DECIMAL NUMBER"<<endl;
            cin>>f;
            decToHexa(f);
            break;
            case 8:
            cout<<"*************************************************"<<endl;
            cout<<"OCTAL TO HEXADECIMAL IS HERE"<<endl;
            int g;
            cout<<"KINDLY ENTER THE OCTAL NUMBER"<<endl;
            cin>>g;
            
                octal_hexadecimal(g);
            
            break;
            case 9:
            cout<<"*************************************************"<<endl;
            cout<<"HEXADECIMAL TO DECIMAL IS HERE"<<endl;
            char h[1000];
            cout<<"KINDLY ENTER THE HEXADECIMAL NUMBER"<<endl;
            cin>>h;
            hexadecimal_decimal(h);
            break;
            case 10:
            cout<<"*************************************************"<<endl;
            cout<<"HEXADECIMAL TO OCTAL IS HERE"<<endl;
            char I[1000];
            cout<<"KINDLY ENTER THE HEXADECIMAL NUMBER"<<endl;
            cin>>I;
            hexadecimal_octal(I);
            break;
            case 11:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO NUMBERS"<<endl;
            int num1,num2;
            cin>>num1>>num2;
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE SUM OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans;
            ans=num1+num2;
            int res;
            cin>>res;
            if(res==1){
                cout<<"THE SUM IN DECIMAL IS "<<ans<<endl;
            }
            else if(res==2){
                cout<<"THE SUM IN ";
                dec_to_bin(ans);
                
            }
            else if(res==3){
                cout<<"THE SUM IN";
                dec_to_octal(ans);
            }
            else if(res==4){
                cout<<"THE SUM IN ";
                decToHexa(ans);
            }
            break;
            case 12:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO BINARY NUMBERS"<<endl;
            int dec1,dec2;
            cin>>dec1>>dec2;
            dec1=rbin_to_dec(dec1);
            dec2=rbin_to_dec(dec2);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE SUM OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans1;
            ans1=dec1+dec2;
            int cho;
            cin>>cho;
            if(cho==1){
                cout<<"THE SUM IN DECIMAL IS "<<ans1<<endl;
            }
            else if(cho==2){
                cout<<"THE SUM IN ";
                dec_to_bin(ans1);
                
            }
            else if(cho==3){
                cout<<"THE SUM IN";
                dec_to_octal(ans1);
            }
            else if(cho==4){
                cout<<"THE SUM IN ";
                decToHexa(ans1);
            }
            break;
            case 13:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO OCTAL NUMBERS"<<endl;
            int octal1,octal2;
            cin>>octal1>>octal2;
            octal1=roctal_to_dec(octal1);
            octal2=roctal_to_dec(octal2);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE SUM OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans2;
            ans2=octal1+octal2;
            int choc;
            cin>>choc;
            if(choc==1){
                cout<<"THE SUM IN DECIMAL IS "<<ans2<<endl;
            }
            else if(choc==2){
                cout<<"THE SUM IN ";
                dec_to_bin(ans2);
                
            }
            else if(choc==3){
                cout<<"THE SUM IN";
                dec_to_octal(ans2);
            }
            else if(choc==4){
                cout<<"THE SUM IN ";
                decToHexa(ans2);
            }
            break;
            case 14:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO HEXADECIMAL NUMBERS"<<endl;
            char hexa1[100],hexa2[100];
            cin>>hexa1>>hexa2;
            int deh1,deh2;
            deh1=rhexadecimal_decimal(hexa1);
            deh2=rhexadecimal_decimal(hexa2);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE SUM OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans3;
            ans3=deh1+deh2;
            int cc;
            cin>>cc;
            if(cc==1){
                cout<<"THE SUM IN DECIMAL IS "<<ans3<<endl;
            }
            else if(cc==2){
                cout<<"THE SUM IN ";
                dec_to_bin(ans3);
                
            }
            else if(cc==3){
                cout<<"THE SUM IN";
                dec_to_octal(ans3);
            }
            else if(cc==4){
                cout<<"THE SUM IN ";
                decToHexa(ans3);
            }
            break;
            case 15:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO DECIMAL NUMBERS"<<endl;
            int num11,num12;
            cin>>num11>>num12;
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE PRODUCT OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans11;
            ans11=num11*num12;
            int res1;
            cin>>res1;
            if(res1==1){
                cout<<"THE PRODUCT IN DECIMAL IS "<<ans11<<endl;
            }
            else if(res==2){
                cout<<"THE PRODUCT IN ";
                dec_to_bin(ans11);
                
            }
            else if(res==3){
                cout<<"THE PRODUCT IN";
                dec_to_octal(ans11);
            }
            else if(res==4){
                cout<<"THE PRODUCT IN ";
                decToHexa(ans11);
            }
            break;
            case 16:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO BINARY NUMBERS"<<endl;
            int dec11,dec12;
            cin>>dec11>>dec12;
            dec1=rbin_to_dec(dec11);
            dec2=rbin_to_dec(dec12);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE PRODUCT OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans111;
            ans111=dec11*dec12;
            int cho1;
            cin>>cho1;
            if(cho1==1){
                cout<<"THE PRODUCT IN DECIMAL IS "<<ans111<<endl;
            }
            else if(cho1==2){
                cout<<"THE PRODUCT IN ";
                dec_to_bin(ans111);
                
            }
            else if(cho1==3){
                cout<<"THE PRODUCT IN";
                dec_to_octal(ans111);
            }
            else if(cho1==4){
                cout<<"THE SUM IN ";
                decToHexa(ans111);
            }
            break;
            case 17:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO OCTAL NUMBERS"<<endl;
            int octal11,octal12;
            cin>>octal1>>octal2;
            octal1=roctal_to_dec(octal1);
            octal2=roctal_to_dec(octal2);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE PRODUCT OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans211;
            ans211=octal11*octal12;
            int choc11;
            cin>>choc11;
            if(choc11==1){
                cout<<"THE PRODUCT IN DECIMAL IS "<<ans211<<endl;
            }
            else if(choc11==2){
                cout<<"THE PRODUCT IN ";
                dec_to_bin(ans211);
                
            }
            else if(choc11==3){
                cout<<"THE PRODUCT IN";
                dec_to_octal(ans211);
            }
            else if(choc11==4){
                cout<<"THE PRODUCT IN ";
                decToHexa(ans211);
            }
            break;
            case 18:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO HEXADECIMAL NUMBERS"<<endl;
            char hexa11[100],hexa12[100];
            cin>>hexa11>>hexa12;
            int deh11,deh12;
            deh11=rhexadecimal_decimal(hexa11);
            deh12=rhexadecimal_decimal(hexa12);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE PRODUCT OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans31;
            ans31=deh11*deh12;
            int cc1;
            cin>>cc1;
            if(cc1==1){
                cout<<"THE PRODUCT IN DECIMAL IS "<<ans31<<endl;
            }
            else if(cc1==2){
                cout<<"THE PRODUCT IN ";
                dec_to_bin(ans31);
                
            }
            else if(cc1==3){
                cout<<"THE PRODUCT IN";
                dec_to_octal(ans31);
            }
            else if(cc1==4){
                cout<<"THE PRODUCT IN ";
                decToHexa(ans31);
            }
            break;
            default:
            cout<<"WRONG NUMBER PRESS !!!!"<<endl;
        
        
    
    }
    }
    cout<<"WOULD YOU LIKE TO EXIT OR CONTINUE PLAYING"<<endl;
    cout<<"PRESS Y TO CONINTUE OR N TO EXIT"<<endl;
    string s;
    cin>>s;
    if(s=="N"||s=="n"){
        break;
    }
    }
    cout<<"THANKS FOR PLAYING MADE AND MANAGED BY SHREYASH GAUTAM VIT CHENNAI"<<endl;
    cout<<"FOR FEEDBACK OR ISSUES CONTACT ME ON :"<<endl;
    cout<<"EMAIL:shreyashgautam2007@gmail.com "<<endl;
}
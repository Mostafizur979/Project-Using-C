#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct converter
{
    int number,bi[32],oc[32],hex[32];
    char bin[32],oct[32],he[32];
    long long int bina;
};
int dtb()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Decimal To Binary";
    fprintf(fp,"\n%s\n",n);
    int i=0,j,emp;
    //int number,bi[32];
    struct converter d;
    printf("Decimal To Binary\n");
    printf("Enter The Decimal Number: ");

    char s[32]="Input";
    char ab[32]="Output";
    scanf("%d",&d.number);
    fprintf(fp,"%s = %d\n",s,d.number);
    emp=d.number;
    while(d.number>0)
    {
        d.bi[i]=d.number%2;
        d.number=d.number/2;
        i++;
    }
    fprintf(fp,"%s=",ab);
    printf("Decimal To Binary: %dd = ",emp);
    for(j=(i-1); j>=0; j--)
    {
        printf("%d",d.bi[j]);
        fprintf(fp,"%d",d.bi[j]);
    }
    printf("b\n");
    fclose(fp);
}
int dto()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char s[32]="Input";
    char ab[32]="Output";
    char n[32]="Decimal To Octal";
    fprintf(fp,"\n%s\n",n);
    int i=0,j,emp;
    //int number,oc[32];
    struct converter d;
    printf("Decimal To Octal\n");
    printf("Enter The Decimal Number: ");

    scanf("%d",&d.number);
    fprintf(fp,"%s = %d\n",s,d.number);
    emp=d.number;
    while(d.number>0)
    {
        d.oc[i]=d.number%8;
        d.number=d.number/8;
        i++;
    }
    fprintf(fp,"%s=",ab);
    printf("Decimal To Octal: %dd = ",emp);
    for(j=(i-1); j>=0; j--)
    {
        printf("%d",d.oc[j]);
        fprintf(fp,"%d",d.oc[j]);
    }
    printf("o\n");
    fclose(fp);
}
int dth()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Decimal To Hexadecimal";
    char s[32]="Input";
    char ab[32]="Output";
    fprintf(fp,"\n%s\n",n);
    int i=0,j,emp;
    //int number,hex[32];
    struct converter d;
    //char he[32];
    printf("Decimal To Hexadecimal\n");
    printf("Enter The Decimal Number: ");

    scanf("%d",&d.number);
    fprintf(fp,"%s = %d\n",s,d.number);
    emp=d.number;
    while(d.number>0)
    {
        d.hex[i]=d.number%16;
        d.number=d.number/16;
        if(d.hex[i]==0)
        {
            d.he[i]='0';
        }
        if(d.hex[i]==1)
        {
            d.he[i]='1';
        }
        if(d.hex[i]==2)
        {
            d.he[i]='2';
        }
        if(d.hex[i]==3)
        {
            d.he[i]='3';
        }
        if(d.hex[i]==4)
        {
            d.he[i]='4';
        }
        if(d.hex[i]==5)
        {
            d.he[i]='5';
        }
        if(d.hex[i]==6)
        {
            d.he[i]='6';
        }
        if(d.hex[i]==7)
        {
            d.he[i]='7';
        }
        if(d.hex[i]==8)
        {
            d.he[i]='8';
        }
        if(d.hex[i]==9)
        {
            d.he[i]='9';
        }
        if(d.hex[i]==10)
        {
            d.he[i]='A';
        }
        if(d.hex[i]==11)
        {
            d.he[i]='B';
        }
        if(d.hex[i]==12)
        {
            d.he[i]='C';
        }
        if(d.hex[i]==13)
        {
            d.he[i]='D';
        }
        if(d.hex[i]==14)
        {
            d.he[i]='E';
        }
        if(d.hex[i]==15)
        {
            d.he[i]='F';
        }
        i++;
    }

    fprintf(fp,"%s=",ab);
    printf("Decimal To Hexadecimal: %dd = ",emp);
    for(j=(i-1); j>=0; j--)
    {
        printf("%c",d.he[j]);
        fprintf(fp,"%c",d.he[j]);
    }
    printf("h\n");
    fclose(fp);
}
int btd()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Binary To Decimal";
    char s[32]="Input";
    char ab[32]="Output";
    fprintf(fp,"\n%s\n",n);
    int i=0,j,sum=0,k=0;
    struct converter b;
    //char bin[32];
    printf("Binary To Decimal\n");
    printf("Enter The Binary Number: ");
    int x;
    scanf("%s",b.bin);
    fprintf(fp,"%s = %s\n",s,b.bin);
    j=strlen(b.bin);
    j--;
    fprintf(fp,"%s=",ab);
    for(i=j; i>=0; i--)
    {
        sum=sum+((b.bin[i]-48)*pow(2,k++));
    }
    printf("Binary To Decimal: %sb = ",b.bin);
    fprintf(fp,"%d",sum);
    printf("%dd\n",sum);
    fclose(fp);
}
int otd()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Octal To Decimal";
    char s[32]="Input";
    char ab[32]="Output";
    fprintf(fp,"\n%s\n",n);
    struct converter o;
    int i=0,j,sum=0,k=0;
    //char oct[32];
    printf("Octal To Decimal\n");
    printf("Enter The Octal Number: ");
    scanf("%s",o.oct);
    fprintf(fp,"%s = %s\n",s,o.oct);
    j=strlen(o.oct);
    j--;
    fprintf(fp,"%s=",ab);
    for(i=j; i>=0; i--)
    {
        sum=sum+((o.oct[i]-48)*pow(8,k++));
    }
    printf("Octal To Decimal: %so = ",o.oct);
    printf("%dd\n",sum);
    fprintf(fp,"%d",sum);
    fclose(fp);
}
int htd()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Hexadecimal To Decimal";
    char s[32]="Input";
    char ab[32]="Output";
    fprintf(fp,"\n%s\n",n);
    int i=0,j,sum=0,k=0;
    //char he[32];
    struct converter h;
    printf("Hexadecimal To Decimal\n");
    printf("Enter The Hexadecimal Number: ");
    scanf("%s",h.he);
    fprintf(fp,"%s = %s\n",s,h.he);
    j=strlen(h.he);
    j--;
    fprintf(fp,"%s=",ab);
    for(i=j; i>=0; i--)
    {
        if(h.he[i]=='0')
        {
            h.hex[i]=0;
        }
        if(h.he[i]=='1')
        {
            h.hex[i]=1;
        }
        if(h.he[i]=='2')
        {
            h.hex[i]=2;
        }
        if(h.he[i]=='3')
        {
            h.hex[i]=3;
        }
        if(h.he[i]=='4')
        {
            h.hex[i]=4;
        }
        if(h.he[i]=='5')
        {
            h.hex[i]=5;
        }
        if(h.he[i]=='6')
        {
            h.hex[i]=6;
        }
        if(h.he[i]=='7')
        {
            h.hex[i]=7;
        }
        if(h.he[i]=='8')
        {
            h.hex[i]=8;
        }
        if(h.he[i]=='9')
        {
            h.hex[i]=9;
        }
        if(h.he[i]=='A')
        {
            h.hex[i]=10;
        }
        if(h.he[i]=='B')
        {
            h.hex[i]=11;
        }
        if(h.he[i]=='C')
        {
            h.hex[i]=12;
        }
        if(h.he[i]=='D')
        {
            h.hex[i]=13;
        }
        if(h.he[i]=='E')
        {
            h.hex[i]=14;
        }
        if(h.he[i]=='F')
        {
            h.hex[i]=15;
        }
        sum=sum+((h.hex[i])*pow(16,k++));
    }
    printf("Hexadecimal To Decimal: %sh = ",h.he);
    printf("%dd\n",sum);
    fprintf(fp,"%d",sum);
    fclose(fp);
}
int bto()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Binary To Octal";
    char s[32]="Input";
    char ab[32]="Output";
    fprintf(fp,"\n%s\n",n);
    long long int emp=0;
    struct converter b;
    int rem,i=0,count=0;
    //char oct[32];
    printf("Binary To Octal\n");
    printf("Enter The Binary Number: ");
    scanf("%lld",&b.bina);
    fprintf(fp,"%s = %lld\n",s,b.bina);
    emp=b.bina;
    while(b.bina!=0)
    {
        rem=b.bina%1000;
        b.bina=b.bina/1000;
        if(rem==0)
        {
            b.oct[i]='0';
        }
        if(rem==1)
        {
            b.oct[i]='1';
        }
        if(rem==10)
        {
            b.oct[i]='2';
        }
        if(rem==11)
        {
            b.oct[i]='3';
        }
        if(rem==100)
        {
            b.oct[i]='4';
        }
        if(rem==101)
        {
            b.oct[i]='5';
        }
        if(rem==110)
        {
            b.oct[i]='6';
        }
        if(rem==111)
        {
            b.oct[i]='7';
        }
        i++;
        count++;
    }
    fprintf(fp,"%s=",ab);
    printf("Binary To Octal: %lldb = ",emp);
    for(i=count; i>=0; i--)
    {
        if(b.oct[i]!=8)
        {
            printf("%c",b.oct[i]);
            fprintf(fp,"%c",b.oct[i]);

        }
    }
    printf("o\n");
    fclose(fp);
}
int bth()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Binary To Hexadecimal";
    char s[32]="Input";
    char ab[32]="Output";
    fprintf(fp,"\n%s\n",n);
    long long int emp=0;
    //char he[32];
    struct converter h;
    int rem,i=0,count=0;
    printf("Binary To Hexadecimal\n");
    printf("Enter The Binary Number: ");
    scanf("%lld",&h.bina);
    fprintf(fp,"%s = %lld\n",s,h.bina);
    emp=h.bina;
    while(h.bina!=0)
    {
        rem=h.bina%10000;
        h.bina=h.bina/10000;

        if(rem==0)
        {
            h.he[i]='0';
        }
        if(rem==1)
        {
            h.he[i]='1';
        }
        if(rem==10)
        {
            h.he[i]='2';
        }
        if(rem==11)
        {
            h.he[i]='3';
        }
        if(rem==100)
        {
            h.he[i]='4';
        }
        if(rem==101)
        {
            h.he[i]='5';
        }
        if(rem==110)
        {
            h.he[i]='6';
        }
        if(rem==111)
        {
            h.he[i]='7';
        }
        if(rem==1000)
        {
            h.he[i]='8';
        }
        if(rem==1001)
        {
            h.hex[i]='9';
        }
        if(rem==1010)
        {
            h.he[i]='A';
        }
        if(rem==1011)
        {
            h.he[i]='B';
        }
        if(rem==1100)
        {
            h.he[i]='C';
        }
        if(rem==1101)
        {
            h.he[i]='D';
        }
        if(rem==1110)
        {
            h.he[i]='E';
        }
        if(rem==1111)
        {
            h.he[i]='F';
        }
        i++;
        count++;
    }
    fprintf(fp,"%s=",ab);
    printf("Binary To Hexadecimal: %lldb =",emp);
    for(i=count; i>=0; i--)
    {
        printf("%c",h.he[i]);
        fprintf(fp,"%c",h.he[i]);

    }
    printf("h\n");
    fclose(fp);
}
int otb()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Octal To Binary";
    char s[32]="Input";
    char ab[32]="Output";
    fprintf(fp,"\n%s\n",n);
    int i;
    //char oct[32];
    struct converter o;
    printf("Octal To Binary\n");
    printf("Enter The Octal Number: ");
    scanf("%s",o.oct);
    fprintf(fp,"%s = %s\n",s,o.oct);
    fprintf(fp,"%s=",ab);
    printf("Octal To Binary: %so =",o.oct);
    for(i=0; o.oct[i]!='\0'; i++)
    {

        if(o.oct[i]=='0')
        {
            printf("000");
            fprintf(fp,"%s","000");
        }
        if(o.oct[i]=='1')
        {
            printf("001");
            fprintf(fp,"%s","001");
        }
        if(o.oct[i]=='2')
        {
            printf("010");
            fprintf(fp,"%s","010");
        }
        if(o.oct[i]=='3')
        {
            printf("011");
            fprintf(fp,"%s","011");
        }
        if(o.oct[i]=='4')
        {
            printf("100");
            fprintf(fp,"%s","100");
        }
        if(o.oct[i]=='5')
        {
            printf("101");
            fprintf(fp,"%s","101");
        }
        if(o.oct[i]=='6')
        {
            printf("110");
            fprintf(fp,"%s","110");
        }
        if(o.oct[i]=='7')
        {
            printf("111");
            fprintf(fp,"%s","111");
        }

    }

    printf("b\n");
    fclose(fp);
}
int htb()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Hexadecimal To Binary";
    char s[32]="Input";
    char ab[32]="Output";
    fprintf(fp,"\n%s\n",n);
    int i;
    //char hex[32];
    struct converter h;
    printf("Hexadecimal To Binary\n");
    printf("Enter The Hexadecimal Number: ");
    scanf("%s",h.he);
    fprintf(fp,"%s = %s\n",s,h.he);
    fprintf(fp,"%s=",ab);
    printf("Hexadecimal To Binary: %sh = ",h.he);
    for(i=0; h.he[i]!='\0'; i++)
    {

        if(h.he[i]=='0')
        {
            printf("0000");
            fprintf(fp,"%s","0000");
        }
        if(h.he[i]=='1')
        {
            printf("0001");
            fprintf(fp,"%s","0001");
        }
        if(h.he[i]=='2')
        {
            printf("0010");
            fprintf(fp,"%s","0010");
        }
        if(h.he[i]=='3')
        {
            printf("0011");
            fprintf(fp,"%s","0011");
        }
        if(h.he[i]=='4')
        {
            printf("0100");
            fprintf(fp,"%s","0100");
        }
        if(h.he[i]=='5')
        {
            printf("0101");
            fprintf(fp,"%s","0101");
        }
        if(h.he[i]=='6')
        {
            printf("0110");
            fprintf(fp,"%s","0110");
        }
        if(h.he[i]=='7')
        {
            printf("0111");
            fprintf(fp,"%s","0111");
        }
        if(h.he[i]=='8')
        {
            printf("1000");
            fprintf(fp,"%s","1000");
        }
        if(h.he[i]=='9')
        {
            printf("1001");
            fprintf(fp,"%s","1001");
        }
        if(h.he[i]=='A')
        {
            printf("1010");
            fprintf(fp,"%s","1010");
        }
        if(h.he[i]=='B')
        {
            printf("1011");
            fprintf(fp,"%s","1011");
        }
        if(h.he[i]=='C')
        {
            printf("1100");
            fprintf(fp,"%s","1100");
        }
        if(h.he[i]=='D')
        {
            printf("1101");
            fprintf(fp,"%s","1101");
        }
        if(h.he[i]=='E')
        {
            printf("1110");
            fprintf(fp,"%s","1110");
        }
        if(h.he[i]=='F')
        {
            printf("1111");
            fprintf(fp,"%s","1111");
        }

    }

    printf("b\n");
    fclose(fp);
}
oth()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Octal To Hexadecimal";
    char s[32]="Input";
    char ab[32]="Output";
    fprintf(fp,"\n%s\n",n);
    int l=0,m,sum=0,k=0,emp;
    //char oct[32];
    struct converter o;
    printf("Octal To Hexadecimal\n");
    printf("Enter The Octal Number: ");
    scanf("%s",o.oct);
    fprintf(fp,"%s = %s\n",s,o.oct);
    fprintf(fp,"%s=",ab);
    m=strlen(o.oct);
    m--;
    for(l=m; l>=0; l--)
    {
        sum=sum+((o.oct[l]-48)*pow(8,k++));
    }

    int i=0,j;
    //int number,hex[32];
    //char hexa[32];
    o.number=sum;
    while(o.number>0)
    {
        o.hex[i]=o.number%16;
        o.number=o.number/16;
        if(o.hex[i]==0)
        {
            o.he[i]='0';
        }
        if(o.hex[i]==1)
        {
            o.he[i]='1';
        }
        if(o.hex[i]==2)
        {
            o.he[i]='2';
        }
        if(o.hex[i]==3)
        {
            o.he[i]='3';
        }
        if(o.hex[i]==4)
        {
            o.he[i]='4';
        }
        if(o.hex[i]==5)
        {
            o.he[i]='5';
        }
        if(o.hex[i]==6)
        {
            o.he[i]='6';
        }
        if(o.hex[i]==7)
        {
            o.he[i]='7';
        }
        if(o.hex[i]==8)
        {
            o.he[i]='8';
        }
        if(o.hex[i]==9)
        {
            o.he[i]='9';
        }
        if(o.hex[i]==10)
        {
            o.he[i]='A';
        }
        if(o.hex[i]==11)
        {
            o.he[i]='B';
        }
        if(o.hex[i]==12)
        {
            o.he[i]='C';
        }
        if(o.hex[i]==13)
        {
            o.he[i]='D';
        }
        if(o.hex[i]==14)
        {
            o.he[i]='E';
        }
        if(o.hex[i]==15)
        {
            o.he[i]='F';
        }
        i++;
    }
    printf("Octal To Hexadecimal: %so = ",o.oct);
    for(j=(i-1); j>=0; j--)
    {
        printf("%c",o.he[j]);
        fprintf(fp,"%c",o.he[j]);
    }
    printf("h\n");
    fclose(fp);
}
hto()
{
    FILE *fp;
    fp=fopen("Base_Conversion","a");
    char n[32]="Hexadecimal To Octal";
    char s[32]="Input";
    char ab[32]="Output";
    fprintf(fp,"\n%s\n",n);
    struct converter h;
    int i=0,j,sum=0,k=0;
    //char he[32],oct[32];
    //int hex[32];
    printf("Hexadecimal To Octal\n");
    printf("Enter The Hexadecimal Number: ");
    scanf("%s",h.he);
    fprintf(fp,"%s = %s\n",s,h.he);
    fprintf(fp,"%s=",ab);
    j=strlen(h.he);
    j--;
    for(i=0; h.he[i]!='\0'; i++)
    {
        if(h.he[i]=='0')
        {
            h.hex[i]=0;
        }
        if(h.he[i]=='1')
        {
            h.hex[i]=1;
        }
        if(h.he[i]=='2')
        {
            h.hex[i]=2;
        }
        if(h.he[i]=='3')
        {
            h.hex[i]=3;
        }
        if(h.he[i]=='4')
        {
            h.hex[i]=4;
        }
        if(h.he[i]=='5')
        {
            h.hex[i]=5;
        }
        if(h.he[i]=='6')
        {
            h.hex[i]=6;
        }
        if(h.he[i]=='7')
        {
            h.hex[i]=7;
        }
        if(h.he[i]=='8')
        {
            h.hex[i]=8;
        }
        if(h.he[i]=='9')
        {
            h.hex[i]=9;
        }
        if(h.he[i]=='A')
        {
            h.hex[i]=10;
        }
        if(h.he[i]=='B')
        {
            h.hex[i]=11;
        }
        if(h.he[i]=='C')
        {
            h.hex[i]=12;
        }
        if(h.he[i]=='D')
        {
            h.hex[i]=13;
        }
        if(h.he[i]=='E')
        {
            h.hex[i]=14;
        }
        if(h.he[i]=='F')
        {
            h.hex[i]=15;
        }
        sum=sum+((h.hex[i])*pow(16,j));
        j--;
    }
    //int number,oc[32];
    h.number=sum;
    i=0;
    while(h.number>0)
    {
        h.oct[i]=h.number%8;
        h.number=h.number/8;
        i++;
    }
    printf("Hexadecimal To Octal: %sh = ",h.he);
    for(j=i-1; j>=0; j--)
    {
        printf("%d",h.oct[j]);
        fprintf(fp,"%d",h.oct[j]);
    }
    printf("o\n");
    fclose(fp);
}
int main()
{
    int x=1, serial;


    printf("\t\t\t**************************************************************************\n");
    printf("\t\t\t******************************BASE CONVERSION******************************\n");
    printf("\t\t\t**************************************************************************\n\n\n");
    printf("\n\n\t\t\t\t\t\t  Course Teacher\n");
    printf("\t\t\t\t\t\t  ______________\n\n\n");
    printf("\t\t\t\t\t  Fahim Faisal\n\t\t\t\t\t  Lecturer\n\t\t\t\t\t  Department of CSE\n\t\t\t\t\t  Daffodil International University\n\n");

    printf("\n\n\t\t\t\t\t\t  Group Members\n");
    printf("\t\t\t\t\t\t  _____________\n\n\n");
    printf("\t\t\t\t\t  Mostafizur Rahman\n\t\t\t\t\t  Id: 212-15-4130\n\t\t\t\t\t  Department of CSE\n\t\t\t\t\t  Daffodil International University\n\n");
    printf("\n1.Decimal To Binary\n2.Decimal To Octal\n3.Decimal To Hexadecimal\n4.Binary To Decimal\n");
    printf("5.Octal To Decimal\n6.Hexadecimal To Decimal\n7.Binary To Octal\n8.Binary To Hexadecimal\n");
    printf("9.Octal To Binary\n10.Hexadecimal To Binary\n11.Octal To Hexadecimal\n12.Hexadecimal To Octal\n\n");

    while(x!=0 && x==1)
    {
        printf("Enter the serial number for respective conversion : ");
        scanf("%d",&serial);
        while(1)
        {
            if(serial <=12 && serial >=0)
            {
                break;
            }
            else
            {
                printf("Please Enter The Correct Serial Number\n");
            }
            scanf("%d",&serial);
        }
        printf("_______________________________________________________________________________________________________________\n\n");
        if(serial==1)
        {
            dtb();
        }
        if(serial==2)
        {
            dto();
        }
        if(serial==3)
        {
            dth();
        }
        if(serial==4)
        {
            btd();
        }
        if(serial==5)
        {
            otd();
        }
        if(serial==6)
        {
            htd();
        }
        if(serial==7)
        {
            bto();
        }
        if(serial==8)
        {
            bth();
        }
        if(serial==9)
        {
            otb();
        }
        if(serial==10)
        {
            htb();
        }
        if(serial==11)
        {
            oth();
        }
        if(serial==12)
        {
            hto();
        }

        printf("_______________________________________________________________________________________________________________\n\n");
        printf("  \t\t\t_________________\t\t______________________\n");
        printf("  \t\t\tPress '0' for end\t\tPress '1' for continue\n");
        printf("  \t\t\t_________________\t\t______________________\n");
        while(1)
        {
            scanf("%d",&x);
            if(x!=0 && x!=1)
            {
                printf("___________________________\n");
                printf("   Please Enter \"0\" or \"1\"  \n");
                printf("___________________________\n");
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}



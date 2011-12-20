//really problematic but i have to do it!!!

void strassen(int a[][],int b[][],int c[][],int n,int rs,int re,int cs,int ce)
{
int midr,midc;
if(rs==re)
c[rs][cs]=a[rs][cs]*b[rs][cs];
else{
midr=(re-rs)/2;
midc=(cs-ce)/2;
strassen(a,b,c,n/2,rs,midr,cs,mid);
strassen(a,b,c,
}

}

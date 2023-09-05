#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col
int x=5,y=3,row=5,col=5,nx,ny;
for(int k=0;k<4;k++)
{
     int nx=x+fx[k]; //Add fx[k] with current row
     int ny=y+fy[k]; //Add fy[k] with current col
     if(valid(nx,ny)
     {
          //DO SOMETHING;
     }
}

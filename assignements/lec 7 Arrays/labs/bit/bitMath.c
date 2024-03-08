int SetBit(int var,int BitNum)
{
	return (var|(1<<BitNum));
  	
}	

int ClrBit(int var,int BitNum)
{
	return (var&~(1<<BitNum));
  	
}	

int TogBit(int var,int BitNum)
{
	return  (var^(1<<BitNum));
  	
}	
#include<stdio.h>

int a[100],b[100],i,n,z,f,j,pf,h,temp;


void main(){

printf("\nEnter the no. of pages : ");		// no. of page referencing 
scanf("%d",&n);

printf("\nEnter the size of frame : ");		// no. of page frames
scanf("%d",&f);

printf("\n Enter the pages value :\n");		// values of page referencing 
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

for(i=0;i<f;i++){							// assign values of page frames 1 innitially 
b[i]=-1;
}


i=0;j=0;h=0;	// i , j used for loop, h for hit count all initialized to 0



while(i<n){


if(b[i]=-1 && i<f ){	// when frames are empty so for starting enquee 
b[i]=a[i];
pf++;					// page fault counter
}
else{
z=0;
for(j=0;j<f;j++){		

	if(b[j]==a[i]){		// to check if value already present 
	h++; 				// hit counter
	}
	else{
	z++;				// if not hit count increment
	}

}
if(z==f){					// if no value matched 
	pf++;					// page fault counter
	for(j=0;j<f-1;j++){		// shifting values 
	temp=b[j];
	b[j]=b[j+1];
	b[j+1]=temp;
	}
	b[f-1]=a[i];			// insert new values
}

} // end else

printf("\n Current Frame:  %d \t %d \t %d \n",b[2],b[1],b[0]);	// frames value for every iteration  

i++;
}	//end while 


printf("\n frame at the end :");	

for(i=0;i<f;i++){
printf("\n b[%d] = %d",i,b[i]);  		// frame values at the end
}

printf("\n Page Fault = %d ",pf);		// no. of page faults
printf("\n Hit = %d ",h);				// no. of hits


printf("\n");
}

/*

Enter the no. of pages : 7

Enter the size of frame : 3

 Enter the pages value :
1
3
0
3
5
6
7

 Current Frame:  -1 	 -1 	 1 

 Current Frame:  -1 	 3 	 1 

 Current Frame:  0 	 3 	 1 

 Current Frame:  0 	 3 	 1 

 Current Frame:  5 	 0 	 3 

 Current Frame:  6 	 5 	 0 

 Current Frame:  7 	 6 	 5 

 frame at the end :
 b[0] = 5
 b[1] = 6
 b[2] = 7
 Page Fault = 6 
 Hit = 1

*/

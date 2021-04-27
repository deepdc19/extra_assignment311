if (istty(stdin)) 
    return ; 
else if (istty(stdout)) 
    return ; 
else if (istty(stderr)) 
    return ; 
else 
    return(0) ; 

switch(retval){
    case 'SUCCESS':
        return SUCCESS;
    default :
        return retval;
}

  
for (k = 0; k< 5; k++){
    x += dx;
    scanf ("%lf", &dx);
}
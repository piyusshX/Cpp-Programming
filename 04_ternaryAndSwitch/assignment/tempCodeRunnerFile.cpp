
      break;
    }
    switch(amt >= 2){
        case 1:
        n2 = amt/2;
        amt -= (2*n2);
      break;
    }
    switch(amt >= 1){
        case 1:
        n1 = amt/1;
      break;
    }
    cout<<"number of 500 notes : "<<n500<<endl;
    cout<<"number of 200 notes : "<<n200<<endl;
    cout<<"number of 100 notes : "<<n100<<endl;
    cout<<"number of 50 notes : "<<n50<<endl;
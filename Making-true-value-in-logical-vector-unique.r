// link: https://stackoverflow.com/questions/59791968/making-true-value-in-logical-vector-unique/59792193#59792193

s=0
for(i in 1:length(vector)) {  
  if(s==1){
    vector[i]=FALSE
  } 
  if(vector[i]) s=1 
  }

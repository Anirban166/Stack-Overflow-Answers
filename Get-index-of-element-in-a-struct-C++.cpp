// link: https://stackoverflow.com/questions/61814770/get-index-of-element-in-a-struct-c/61815173#61815173

struct Person{
    string name;
    int age;
    float spread_prob;
    float disease_prob;
    float recover_prob;
    status disease_status;
    int sick_day;
};

Person person[9];

int find_index(string m){
    for(i=0;i<9;i++){
        if(m==person[i].name){
            return i;   
        }   
    }
    return 0;
}

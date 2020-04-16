// link: https://stackoverflow.com/questions/61190602/c11-how-does-auto-deal-with-initializer/61191873#61191873

c++filt -t St16initializer_listIiE

auto x = (1, 1.5L); 

auto x = (1, 1.5f);

auto x = (1, "string");

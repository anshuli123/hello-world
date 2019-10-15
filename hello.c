 #include <stdio. h>
 #include <cur1/curl. h>
 int main(void)
 CURL*cur1;
 CURLcode res;
cur1=cur1_easy_init();
 if(curl){
 cur1_easy_setopt(cur1,  CURLOPT_URL, "http: //myip. ipip.net/") ;
 res=cur1_easy_perform( cur1)；
 if(res!=CURLE_OK)
 fprintf(stderr, "cur1_easy_perform（）failed: %s\n",cur1_easy_strerror(res));
 cur1 _easy_cleanup(curl);
 return0;
}
 

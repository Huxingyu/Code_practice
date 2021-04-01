//合并排序

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

class soulutin{
    public:
        vector<int>& hebing(vector<int>& seq1,vector<int>& seq2){
            int j=0,m=0,n=0;
            vector<int> ans;
            int l,seq_1=seq1.size(),seq_2=seq2.size();
            if(seq_1>seq_2){
                l=seq_2;      
            }else{
                l=seq_1;
            }
            for(int i=0;i<l;i++){
                if(seq1[m]<=seq2[n]){
                    ans[j++]=seq1[m++];
                }else{
                    ans[j++]=seq2[n++];
                }
            }
            if(l==seq_2){
                while(m<seq_1){
                    ans[j++]=seq1[m++];
                }
            }else{
                while(n<seq_2){
                    ans[j++]=seq2[n++];
                }
            }
            return ans;
        }
};

int main(){
    vector<int> seq1={1,3,5,7};
    vector<int> seq2={2,4,6,8};
    soulutin x;
    vector<int> ans=x.hebing(seq1,seq2);
    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<*it<<""
    }
    system("pause");
    return 0;
}
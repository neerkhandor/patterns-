#include <iostream>
using namespace std;
int main() {
  int n=7;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     cout<<j+1<<" ";
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     cout<<i+1<<" ";
  //   }
  //   cout<<endl;
  // }
//printing in reverse order
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     cout<<n-j<<" ";
  //   }
  //   cout<<endl;
  // }
  
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     cout<<n-i<<" ";
  //   }
  //   cout<<endl;
  // }
  
  // int count=1;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     cout<<count<<" ";
  //     count++;
  //   }
  //   cout<<endl;
  // }
  
//half pyramid
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout<<i<<" ";
  //   }
  //   cout<<endl;
  // }

//hollow square
// for(int i=0;i<n;i++){
//   for(int j=0;j<n;j++){
//     if(i==0 || i==n-1 || j==0 || j==n-1){
//       cout<<"*";
//     }
//     else{
//       cout<<" ";
//     }
//   }
//   cout<<endl;
// }

  // for(int i=0;i<n;i++){
  //   if(i==0 || i==n-1){
  //     for(int j=0;j<n;j++){
  //       cout<<"*";
  //     }
  //   }
  //   else{
  //     cout<<"*";
  //     for(int j=1;j<n-1;j++){
  //       cout<<" ";
  //     }
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

// int count =1;
// for(int i=0;i<n;i++){
//   for(int j=0;j<i;j++){
//     cout<<count<<" ";
//     count++;
//   }
//   cout<<endl;
// }

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<(n-i-1);j++){
  //     cout<<" ";
  //   }
  //   for(int j=0;j<i;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<(n-i-1);j++){
  //     cout<<" ";
  //   }
  //   for(int j=0;j<i;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i;j++){
  //     cout<<" ";
  //   }
  //   for(int j=0;j<n-i;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i;j++){
  //     cout<<" ";
  //   }
  //   for(int j=0;j<n-i;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     char ch='A'+j;
  //     cout<<ch;
  //   }
  //   cout<<endl;
  // }

  
for(int i=0;i<n;i++){
    for(int j=0;j<(n-i-1);j++){
      cout<<" ";
    }
    for(int j=0;j<i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  for(int i=0;i<n-1;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for(int j=0;j<n-i-1;j++){
      cout<<"* ";
    }
    cout<<endl;
  }




  
}
#include <bits/stdc++.h>
using namespace std;
struct dmy
{
    int dd;
    int mm;
    int yy;
    
    void printdmy()
    {
        // nếu tháng có 1 chữ số thì thêm 0
        if (mm < 10)
        {
            cout << dd << "-0" << mm << "-" << yy << endl;
        }
        else{
        cout << dd << "-" << mm << "-" << yy << endl;
        }
    }

    void update(int i)
    {
        while (i>0)
        {
        if (yy % 4 == 0)
        {
            if (mm == 2)
            {
                if (i > ( 29 - dd ))
                {
                    i -= (29 - dd + 1); 
                    dd = 1;
                    mm++;
                    if(mm > 12){
                        dd = 1;
                        mm = 1;
                        yy++;
                    }
                }
                else
                {
                    dd += i;
                    i = 0;
                }
            }
            else if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
            {
                if (i > ( 31 - dd ))
                {
                    i -= (31 - dd + 1);
                    dd = 1;
                    mm++;
                    if(mm > 12){
                        dd = 1;
                        mm = 1;
                        yy++;
                    }
                }
                else
                {
                    dd += i;
                    i = 0;

                }
            }
            else
            {
                if (i > (30 - dd))
                {
                    i -= (30 - dd + 1);
                    dd = 1;
                    mm++;
                }
                else
                {
                    dd += i;
                    i = 0;
                }
            }
        }
        else 
        {
            if (mm == 2)
            {
                if (i > (28 - dd))
                {
                    i -= (28 - dd + 1);
                    dd = 1;
                    mm++;
                }
                else
                {
                    dd += i;
                    i = 0;
                }
            }
            else if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
            {
                if ( i > (31 - dd))
                {
                    i -= (31 - dd + 1);
                    dd = 1;
                    mm++;
                    if(mm > 12){
                        dd=1;
                        mm = 1;
                        yy++;
                    }
                }
                else
                {
                    dd += i;
                    i = 0;
                }
            }
            else
            {
                if (i > (30 - dd))
                {
                    i -= (30 - dd + 1);
                    dd = 1;
                    mm++;
                }
                else
                {
                    dd += i;
                    i = 0;
                }
            }

        }
    }
    }
};
int main()
{
    
    dmy ngay;
    char a,b;
    //tách dấu - ra để in
    cin >> ngay.dd >> a >> ngay.mm >> b >> ngay.yy;
    
    int i = 1;
    

    while (i != 0)
    {
        
        cin >> i; 
        

        //tạo biến phụ để in
        dmy ngayphu;
        ngayphu.dd = ngay.dd;
        ngayphu.mm = ngay.mm;
        ngayphu.yy = ngay.yy;
        
        
        ngayphu.update(i);
        ngayphu.printdmy();
    }
}

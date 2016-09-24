#include <iostream>
#include <boost/shared_ptr.hpp>

namespace cli {

using namespace std;
using namespace boost;

class CWINClient;

class CUIClient {

    public:
        CUIClient(); 
        ~CUIClient () {}
        void start();

    private:
        void _create ();        // 创建窗口
        void _destroy (); 
    private:
        string username;
        shared_ptr<CWINClient> cWin;
};
class CWINClient {

    public:
        CWINClient ();
        ~CWINClient ();
        
        void createWin ();  // 创建窗口(同步等待输入)
        void destroyWin ();  // 销毁窗口
        string cmdWin ();  // 输入指令
         
    private:
        void translateCmd ();   // 解析输入
        string input ();          // 输入
};
}




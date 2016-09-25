#include <iostream>
#include <string>
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
        shared_ptr<CWINClient> cWin;
};

class CWINClient {

    public:
        static const string EMPTY;
        static const string SPLIT;
        
        static const string T_CMD;
        static const string T_NAME;
        static const string T_IP;       // 配置服务器IP
        static const string T_PORT;     // 配置端口号

        static const string S_QUIT;
    
        CWINClient ();
        ~CWINClient ();
       
        void createWin ();  // 创建窗口(同步等待输入)
        void destroyWin ();  // 销毁窗口
         
    private:
        const void prepareCmd ();   // 准备指令输入
        bool translateCmd (string opt);   // 解析输入

    private:
        string _nickname;       // 客户端连接名
        string _state;          // 所处状态
        string _ip;
        string _port;
};
}




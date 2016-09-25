#include "ui/CUIClient.hpp"

namespace cli {
CUIClient::CUIClient () {
    shared_ptr<CWINClient> tmpWin(new CWINClient());
    cWin = tmpWin;
}

void CUIClient::start() {
    CUIClient::_create ();
}

void CUIClient::_create () {
    cWin->createWin ();
}

void CUIClient::_destroy () {
    cWin->destroyWin ();
}

const string CWINClient::EMPTY = "";
const string CWINClient::SPLIT = "@";

const string CWINClient::S_QUIT = "quit";

const string CWINClient::T_CMD = "t_cmd";
const string CWINClient::T_NAME = "t_name";
const string CWINClient::T_PORT = "t_port";
const string CWINClient::T_IP = "t_ip";

CWINClient::CWINClient () {
    _nickname = EMPTY;
    _state = EMPTY;
    _port = EMPTY;
}

CWINClient::~CWINClient () {
}

void CWINClient::createWin () {
    
    string opt; 
    while (true) {
        // TODO循环等待消息输入
        prepareCmd ();

        cin >> opt;

        if (true == translateCmd (opt)) {
            // 退出
            break;
        }
    }

    destroyWin ();
}

void CWINClient::destroyWin () {
    // 打印窗口退出信息
    cout << _nickname << "quit connect with " << _ip << ":" << _port << endl;
}

const void CWINClient::prepareCmd () {
    if (0 == _nickname.compare(EMPTY)) {
        // _nickname未有值
        cout << "input your name:";
        _state = T_NAME;
    } else if (0 == _state.compare (T_NAME)) {
        // 配置服务器IP
        cout << "input server ip:";
        _state = T_IP;
    } else if (0 == _state.compare (T_IP)) {
        // 配置端口号
        cout << "input server port:";
        _state = T_PORT;
    } else {
        cout << _nickname << SPLIT;
        _state = T_CMD;
    }
}

bool CWINClient::translateCmd (string opt) {
    if (0 == opt.compare(S_QUIT)) {
        // 终止
        return true;
    } else {
        if (0 == _state.compare (T_NAME)) {
            // 输入的是名字
            _nickname = opt;
        } else if (0 == _state.compare (T_IP)) {
            // 输入的是IP
            _ip = opt;
        } else if (0 == _state.compare (T_PORT)) {
            // 输入U的是PORT
            _port = opt;
        } else {
            // 输入的是命令
        }
        return false;
    }
}

}


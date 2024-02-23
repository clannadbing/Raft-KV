# Raft-KV

  **基于Raft共识算法的分布式KV存储数据库**

* 基于**protobuf和自定义协议实现RPC通信框架**完成各节点之间的远程调用和数据传递功能  

* 基于跳表数据结构实现**跳表数据库SkipListPro**完成K-V存储功能 

* 实现**Raft协议的心跳与选举机制**，通过定时线程池触发心跳与选举任务，并维护集群的日志提交状态  

* 实现**日志读写与提交**，由领导节点处理客户端的读写请求，并将日志复制至跟随者节点，在超过半数节点复制成功后提交日志，应用命令至状态机并返回响应给客户端  

* 实现**客户端协议**，包括在客户端协议中加入由ip和请求序号组成的“请求id”以保证线性一致性，以及客户端重试等功能。  

## 快速开始

### 1.库准备
- protoc
- boost
- muduo 

**安装说明**

- protoc，本地版本为3.12.4，ubuntu22使用`sudo apt-get install protobuf-compiler libprotobuf-dev`安装默认就是这个版本
- boost，`sudo apt-get install libboost-dev libboost-test-dev libboost-all-dev`
- muduo,https://blog.csdn.net/QIANGWEIYUAN/article/details/89023980

### 2.编译启动
#### 使用rpc
```
mkdir cmake-build-debug
cd cmake-build-debug
cmake ..
make
```
之后在目录bin就有对应的可执行文件生成：
- consumer
- provider
运行即可，注意先运行provider，再运行consumer，原因很简单：需要先提供rpc服务，才能去调用。

#### 使用raft集群
```
mkdir cmake-build-debug
cd cmake-build-debug
cmake..
make
```
之后在目录bin就有对应的可执行文件生成，
```
// make sure you in bin directory ,and this has a test.conf file
raftCoreRun -n 3 -f test.conf
```
正常运行后，命令行应该有如下raft的运行输出：
```
20231228 13:04:40.570744Z 615779 INFO  TcpServer::newConnection [RpcProvider] - new connection [RpcProvider-127.0.1.1:16753#2] from 127.0.0.1:37234 - TcpServer.cc:80
[2023-12-28-21-4-41] [Init&ReInit] Sever 0, term 0, lastSnapshotIncludeIndex {0} , lastSnapshotIncludeTerm {0}
[2023-12-28-21-4-41] [Init&ReInit] Sever 1, term 0, lastSnapshotIncludeIndex {0} , lastSnapshotIncludeTerm {0}
[2023-12-28-21-4-41] [Init&ReInit] Sever 2, term 0, lastSnapshotIncludeIndex {0} , lastSnapshotIncludeTerm {0}
[2023-12-28-21-4-41] [       ticker-func-rf(1)              ]  选举定时器到期且不是leader，开始选举

[2023-12-28-21-4-41] [func-sendRequestVote rf{1}] 向server{1} 發送 RequestVote 開始
[2023-12-28-21-4-41] [func-sendRequestVote rf{1}] 向server{1} 發送 RequestVote 開始
[2023-12-28-21-4-41] [func-sendRequestVote rf{1}] 向server{1} 發送 RequestVote 完畢，耗時:{0} ms
[2023-12-28-21-4-41] [func-sendRequestVote rf{1}] elect success  ,current term:{1} ,lastLogIndex:{0}

[2023-12-28-21-4-41] [func-sendRequestVote rf{1}] 向server{1} 發送 RequestVote 完畢，耗時:{0} ms
[2023-12-28-21-4-41] [func-Raft::doHeartBeat()-Leader: {1}] Leader的心跳定时器触发了

[2023-12-28-21-4-41] [func-Raft::doHeartBeat()-Leader: {1}] Leader的心跳定时器触发了 index:{0}

[2023-12-28-21-4-41] [func-Raft::doHeartBeat()-Leader: {1}] Leader的心跳定时器触发了 index:{2}

[2023-12-28-21-4-41] [func-Raft::sendAppendEntries-raft{1}] leader 向节点{0}发送AE rpc開始 ， args->entries_size():{0}
[2023-12-28-21-4-41] [func-Raft::sendAppendEntries-raft{1}] leader 向节点{2}发送AE rpc開始 ， args->entries_size():{0}
[2023-12-28-21-4-41] [func-Raft::doHeartBeat()-Leader: {1}] Leader的心跳定时器触发了
```

#### 使用kv
## 致谢

本项目参考自项目 https://github.com/youngyangyang04/Skiplist-CPP、https://github.com/youngyangyang04/KVstorageBaseRaft-cpp。

感谢以下朋友的帮助: [@思无邪](https://github.com/578223592)、[@程序员Carl](https://github.com/youngyangyang04)

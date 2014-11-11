//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSDictionary, NSLock, NSMutableData, NSURLConnection, NSURLResponse;

__attribute__((visibility("hidden")))
@interface AsyncJSONTransfer : NSObject
{
    NSURLConnection *connection;
    struct transfer_item *reserve;
    NSDictionary *cache;
    NSCondition *conditionCache;
    _Bool bTransfering;
    NSLock *conditionTransfer;
    _Bool bExitTransferThread;
    NSCondition *conditionExit;
    _Bool bExit;
    NSMutableData *data;
    NSURLResponse *response;
    id <JSONTransferDelegate> jsondelegate;
    id <TransferDelegate> transferdelegate;
}

- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)_threadFinish:(id)arg1;
- (void)_threadTransfer:(id)arg1;
- (void)_clearCache;
- (void)_resetForConnectionEnd;
- (void)_deleteReserve;
- (void)_createReserve:(struct transfer_item *)arg1;
- (void)_deleteResponse;
- (void)_createResponse:(id)arg1;
- (void)_deleteData;
- (void)_createData:(id)arg1;
- (void)_deleteCondition;
- (void)_createCondition;
- (void)_deleteConnection;
- (void)_createConnection:(id)arg1;
- (int)getTransferDataType;
- (int)cancel;
- (int)transferData:(id)arg1 jsondelegate:(id)arg2 transferdelegate:(id)arg3 reserve:(struct transfer_item *)arg4;
- (void)dealloc;
- (id)init;

@end


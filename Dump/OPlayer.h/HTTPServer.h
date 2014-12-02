//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AsyncSocket, NSDictionary, NSMutableArray, NSNetService, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface HTTPServer : NSObject
{
    AsyncSocket *asyncSocket;
    id delegate;
    NSURL *documentRoot;
    Class connectionClass;
    NSNetService *netService;
    NSString *domain;
    NSString *type;
    NSString *name;
    unsigned short port;
    NSDictionary *txtRecordDictionary;
    NSMutableArray *connections;
}

- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)connectionDidDie:(id)arg1;
- (void)onSocket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (unsigned int)numberOfHTTPConnections;
- (BOOL)stop;
- (BOOL)start:(id *)arg1;
- (void)setTXTRecordDictionary:(id)arg1;
- (id)TXTRecordDictionary;
- (void)setPort:(unsigned short)arg1;
- (unsigned short)port;
- (void)setName:(id)arg1;
- (id)publishedName;
- (id)name;
- (void)setType:(id)arg1;
- (id)type;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)setConnectionClass:(Class)arg1;
- (Class)connectionClass;
- (void)setDocumentRoot:(id)arg1;
- (id)documentRoot;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;

@end

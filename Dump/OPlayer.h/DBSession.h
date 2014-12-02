//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface DBSession : NSObject
{
    NSDictionary *baseCredentials;
    NSMutableDictionary *credentialStores;
    NSString *root;
    id <DBSessionDelegate> delegate;
}

+ (void)setSharedSession:(id)arg1;
+ (id)sharedSession;
@property(nonatomic) id <DBSessionDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) NSString *root; // @synthesize root;
- (BOOL)appConformsToScheme;
- (id)appScheme;
- (void)clearSavedCredentials;
- (void)saveCredentials;
- (id)savedCredentials;
@property(readonly, nonatomic) NSArray *userIds;
- (id)credentialStoreForUserId:(id)arg1;
- (void)unlinkUserId:(id)arg1;
- (void)unlinkAll;
- (BOOL)handleOpenURL:(id)arg1;
- (id)parseURLParams:(id)arg1;
- (void)link;
- (void)linkUserId:(id)arg1;
- (BOOL)isLinked;
- (void)setAccessToken:(id)arg1 accessTokenSecret:(id)arg2 forUserId:(id)arg3;
- (void)updateAccessToken:(id)arg1 accessTokenSecret:(id)arg2 forUserId:(id)arg3;
- (void)dealloc;
- (id)initWithAppKey:(id)arg1 appSecret:(id)arg2 root:(id)arg3;

@end


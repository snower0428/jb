/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSThread, ServerAccess;

@interface InfoUpdater : XXUnknownSuperclass {
@private
	NSThread* _thread;
	int _currentStatus;
	NSString* _tid;
	NSString* _utdid;
	ServerAccess* _serverAccess;
}
@property(retain) ServerAccess* serverAccess;
@property(retain) NSString* utdid;
@property(retain) NSString* tid;
@property(assign) int currentStatus;
@property(retain, nonatomic) NSThread* thread;
-(void).cxx_destruct;
-(void)doUploadEventLog:(id)log;
-(void)doUpdate:(id)update;
-(id)getApdidFromBank:(id)bank;
-(void)postProcessAfterUploadingLog:(id)log;
-(id)createServerRequestWithCustomIds:(id)customIds DeviceInfo:(id)info apdid:(id)apdid privateApdid:(id)apdid4 Apdtk:(id)apdtk;
-(void)processServerData:(id)data;
-(void)setDataToBank:(id)bank;
-(int)uploadEventLog;
-(int)updateApdidWithTid:(id)tid Utdid:(id)utdid;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue;

@interface DTFileDownloadManager : XXUnknownSuperclass {
@private
	NSOperationQueue* _queue;
}
@property(retain, nonatomic) NSOperationQueue* queue;
+(id)fileDownloadThread;
+(void)fileDownloadThreadProc:(id)proc;
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)addOperation:(id)operation;
@end

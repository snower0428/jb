/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BundleLoader, NSOperationQueue;

@interface APAppDownloadMgr : XXUnknownSuperclass {
	NSOperationQueue* _downloadQueue;
	BundleLoader* bLoader;
}
+(id)sharedPubElement;
-(void)pauseAOperation:(int)operation;
-(void)downloadImageFinish:(id)finish;
-(void)bundleDownloadFinish:(id)finish;
-(void)downloadAppErr:(id)err;
-(void)updateProgress:(id)progress;
-(void)addDownloadItem:(id)item downloadType:(int)type downloadIndex:(int)index;
-(void)addDownloadItem2:(id)a2 downloadType:(int)type downloadFlag:(id)flag;
-(id)init;
-(void)dealloc;
@end


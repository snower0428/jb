/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "LegacySystemService.h"

@class NSString, WaveResponder, iTunesWorker, AlipayPortalAppDelegate;

@interface LegacySystemServiceImpl : XXUnknownSuperclass <LegacySystemService> {
@private
	WaveResponder* waveResponder;
	AlipayPortalAppDelegate* _appDelegate;
	id _delegate;
	NSString* _token;
	iTunesWorker* _itunesWorker;
	NSString* _trackUrl;
}
@property(copy, nonatomic) NSString* sessionId;
@property(retain, nonatomic) WaveResponder* waveResponder;
@property(retain, nonatomic) NSString* trackUrl;
@property(retain, nonatomic) iTunesWorker* itunesWorker;
@property(copy, nonatomic) NSString* token;
@property(assign, nonatomic) id delegate;
@property(retain, nonatomic) AlipayPortalAppDelegate* appDelegate;
+(id)sharedService;
-(id)getOtp;
-(id)genQRCode:(id)code;
-(id)genBarcode:(id)barcode;
-(void)didFinishLoadingCCDCCardInfo:(id)info;
-(id)importAccountFromOldVersionArchiveAndClear:(BOOL)oldVersionArchiveAndClear;
-(id)queryCCDCCardInfoWithCardNumber:(id)cardNumber CCDCCardUsedType:(int)type completionBlock:(id)block;
-(id)executeRemoteOperation:(id)operation params:(id)params finishedTarget:(id)target action:(SEL)action;
-(void)didReceiveVersionUpdateNotification:(id)notification;
-(void)checkNewVersion;
-(void)updateBundleVersion;
-(void)reportActive;
-(void)setSafePayURL:(id)url;
-(void)setCCDCURL:(id)ccdcurl;
-(void)setGatewayURL:(id)url;
-(void)start;
-(void)loginDidLogout:(id)login;
-(void)loginDidFinished:(id)login;
-(void)loginWithAccountChanged:(id)accountChanged;
-(void)dealloc;
-(void)loadBundleInfoPlist:(id)plist;
-(void)refreshBundleInfoPlist:(id)plist;
-(void)closeReceiveAndConnect;
-(void)startReceive;
-(void)startReceiveAndConnect;
-(id)init;
@end


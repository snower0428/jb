/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BoardingPassViewController.h"

@class NSDictionary, NSString, KABAOPRODPassInfo, ALPPassDataEngine;

@interface UploadPassViewController : BoardingPassViewController {
@private
	NSDictionary* _dataOptions;
	NSString* _sourceId;
	NSString* _localFilename;
	NSString* _pathName;
	NSString* name;
	NSString* _fileSerialNumber;
	KABAOPRODPassInfo* _passInfoFromFile;
}
@property(retain, nonatomic) ALPPassDataEngine* passDataEngine;
@property(retain, nonatomic) KABAOPRODPassInfo* passInfoFromFile;
@property(retain, nonatomic) NSString* fileSerialNumber;
@property(retain, nonatomic) NSString* name;
@property(copy, nonatomic) NSDictionary* dataOptions;
-(void).cxx_destruct;
-(void)refreshEventRecieved:(id)recieved;
-(void)addPassDataComplete:(id)complete;
-(void)turnbackTo3rdApplication:(int)a3rdApplication;
-(void)cancelAction:(id)action;
-(void)_runAnimation:(BOOL)animation;
-(void)addActionAfterCheck;
-(void)addActionWithAuth;
-(void)addCouponPassToPortal:(id)portal;
-(void)setupCancelAddBarButtons;
-(void)passSupportNotification:(id)notification value:(id)value;
-(void)didReceiveMemoryWarning;
-(void)viewWillDestroy;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)registerNotification;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(id)initWithDataOptions:(id)dataOptions;
-(void)applicationEnterBackground:(id)background;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)setupPassviewWithData:(id)data;
-(id)prepareForPassInfo:(id)passInfo;
-(void)dealloc;
@end

